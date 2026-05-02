#include <iostream>
#include <thread>
#include <chrono>
#include "updater.h"

void UpdateOffsets()
{
    std::cout << "[>>] Updating addresses\n";

    offsets::updater updater;

    offset::dwEntityList           = updater.GetAddress("dwEntityList", 1);
    offset::dwViewMatrix           = updater.GetAddress("dwViewMatrix", 1);
    offset::dwLocalPlayerPawn      = updater.GetAddress("dwLocalPlayerPawn", 1);
    offset::dwLocalPlayerController= updater.GetAddress("dwLocalPlayerController", 1);

    offset::m_iIDEntIndex          = updater.GetAddress("m_iIDEntIndex", 2);
    offset::m_modelState           = updater.GetAddress("m_modelState", 2);
    offset::m_pGameSceneNode       = updater.GetAddress("m_pGameSceneNode", 2);
    offset::m_hPlayerPawn          = updater.GetAddress("m_hPlayerPawn", 2);

    std::this_thread::sleep_for(std::chrono::milliseconds(250));

    std::cout << "[>>] "
              << updater.total_valid << "/"
              << updater.total_scanned
              << " addresses updated\n\n";
}