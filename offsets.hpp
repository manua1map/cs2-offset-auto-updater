#include <thread>
#include <chrono>
#include "auto_updater.hpp"

struct Offsets
{
    // offsets.hpp
    uintptr_t dwBuildNumber;
    uintptr_t dwLocalPlayerPawn;
    uintptr_t dwEntityList;

    // client_dll.hpp
    uintptr_t m_hPlayerPawn;
    uintptr_t m_iHealth;
    uintptr_t m_iTeamNum;

    uintptr_t m_Glow;
    uintptr_t m_iGlowType;
    uintptr_t m_glowColorOverride;
    uintptr_t m_bGlowing;
};

Offsets offsets;

bool failed = false;
bool show_offsets = true;

inline void print_offset(const std::string& name, uintptr_t offset)
{
    std::cout << name << " " << std::showbase << std::hex << offset << std::endl;
}

void update_offset(URLSession& session, const std::string& name, uintptr_t& outOffset, int fileType)
{
    std::string formattedName = name;

    if (fileType == 2 && name.rfind("constexpr std::ptrdiff_t ", 0) != 0)
        formattedName = "constexpr std::ptrdiff_t " + name + " = ";

    outOffset = getAddress(session, formattedName, fileType);

    if (!outOffset)
        failed = true;

    if (show_offsets)
        print_offset(name, outOffset);
}

bool update_offsets()
{
    URLSession session;

    // Grouped for readability
    update_offset(session, "dwBuildNumber", offsets.dwBuildNumber, 1);
    update_offset(session, "dwLocalPlayerPawn", offsets.dwLocalPlayerPawn, 1);
    update_offset(session, "dwEntityList", offsets.dwEntityList, 1);

    update_offset(session, "m_hPlayerPawn", offsets.m_hPlayerPawn, 2);
    update_offset(session, "m_iHealth", offsets.m_iHealth, 2);
    update_offset(session, "m_iTeamNum", offsets.m_iTeamNum, 2);

    update_offset(session, "m_Glow", offsets.m_Glow, 2);
    update_offset(session, "m_iGlowType", offsets.m_iGlowType, 2);
    update_offset(session, "m_glowColorOverride", offsets.m_glowColorOverride, 2);
    update_offset(session, "m_bGlowing", offsets.m_bGlowing, 2);

    std::this_thread::sleep_for(std::chrono::milliseconds(25));
    closeWeb(session);
    return failed;
}
