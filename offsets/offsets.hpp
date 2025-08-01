// Generated using https://github.com/a2x/cs2-dumper
// 2025-08-01 23:11:28.967946500 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace offsets {
        // Module: client.dll
        namespace client_dll {
            constexpr std::ptrdiff_t dwCSGOInput = 0x1D2C010;
            constexpr std::ptrdiff_t dwEntityList = 0x1CBE620;
            constexpr std::ptrdiff_t dwGameRules = 0x1D1D4E0;
            constexpr std::ptrdiff_t dwGlobalVars = 0x1AE9458;
            constexpr std::ptrdiff_t dwGlowManager = 0x1D1D508;
            constexpr std::ptrdiff_t dwPlantedC4 = 0x1D27180;
            constexpr std::ptrdiff_t dwViewMatrix = 0x1D21A00;
            constexpr std::ptrdiff_t dwViewRender = 0x1D22640;
        }
        // Module: engine2.dll
        namespace engine2_dll {
            constexpr std::ptrdiff_t dwBuildNumber = 0x5B94C4;
            constexpr std::ptrdiff_t dwNetworkGameClient = 0x5B85B0;
            constexpr std::ptrdiff_t dwNetworkGameClient_clientTickCount = 0x358;
            constexpr std::ptrdiff_t dwNetworkGameClient_deltaTick = 0x27C;
            constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x230;
            constexpr std::ptrdiff_t dwNetworkGameClient_serverTickCount = 0x23C;
            constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x220;
            constexpr std::ptrdiff_t dwWindowHeight = 0x8AB4DC;
            constexpr std::ptrdiff_t dwWindowWidth = 0x8AB4D8;
        }
        // Module: inputsystem.dll
        namespace inputsystem_dll {
        }
        // Module: matchmaking.dll
        namespace matchmaking_dll {
            constexpr std::ptrdiff_t dwGameTypes_mapName = 0x120;
        }
        // Module: soundsystem.dll
        namespace soundsystem_dll {
            constexpr std::ptrdiff_t dwSoundSystem = 0x3CF620;
        }
    }
}
