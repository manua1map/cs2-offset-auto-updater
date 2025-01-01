#include <iostream>
#include <Windows.h>

#include "autoupdater.hpp"

int main()
{
	for (int i = 0; i < 17; i++) // 'i' is equal to the number of addresses scanned 
	{
		std::vector<std::string> client_dll_offsetList = { "dwCSGOInput", "dwEntityList", "dwGameEntitySystem", "dwGameEntitySystem_highestEntityIndex", "dwGameRules", "dwGlobalVars", "dwGlowManager", "dwLocalPlayerController", "dwLocalPlayerPawn", "dwPlantedC4", "dwPrediction", "dwSensitivity", "dwSensitivity_sensitivity", "dwViewAngles", "dwViewMatrix", "dwViewRender", "dwWeaponC4"};
		std::cout << client_dll_offsetList[i] << " --> " << getAddress(client_dll_offsetList[i], 1) << std::endl;
	}

	Sleep(-1); // pause console indefinitly 

	return 0;
}
