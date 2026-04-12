A very simple and lightweight auto offset updater that can used for any game both externally and internally. It works by downloading the URL contents of the offsets on [a2x's dumper github repository](https://github.com/a2x/cs2-dumper).

I recommend you output each address ensuring it's correct, you can do so by changing ```print_addr``` in updater.h to true.

```GetAddress``` takes 3 arguments, URL session, address name and file type. Address name must be from a2x github repository, file type 1 will read from offsets.hpp, 2 will read from client_dll.hpp.

Example usage:
~~~cpp
#include "updater.h"
#include "web.h"

void UpdateOffsets()
{
    std::cout << "[>>] Updating addresses\n";
    web::URLSession session;

    offset::dwEntityList = updater::GetAddress(session, "dwEntityList", 1);
    offset::dwViewMatrix = updater::GetAddress(session, "dwViewMatrix", 1);
    offset::dwLocalPlayerPawn = updater::GetAddress(session, "dwLocalPlayerPawn", 1);
    offset::dwLocalPlayerController = updater::GetAddress(session, "dwLocalPlayerController", 1);
    offset::m_iIDEntIndex = updater::GetAddress(session, "m_iIDEntIndex", 2);
    offset::m_modelState = updater::GetAddress(session, "m_modelState", 2);
    offset::m_pGameSceneNode = updater::GetAddress(session, "m_pGameSceneNode", 2);
    offset::m_hPlayerPawn = updater::GetAddress(session, "m_hPlayerPawn", 2);

    std::this_thread::sleep_for(std::chrono::milliseconds(250));
    updater::CloseWeb(session);
    std::cout << "[>>] " << updater::total_valid << "/" << updater::total_scanned << " addresses updated\n";
}
