#include <iostream>
#include <Windows.h>

#include "autoupdater.hpp"

int main()
{
	std::vector<std::string> client_dll_offsetList = { "dwCSGOInput", "dwEntityList", "dwGameEntitySystem", "dwGameEntitySystem_highestEntityIndex", "dwGameRules", "dwGlobalVars", "dwGlowManager", "dwLocalPlayerController", "dwLocalPlayerPawn", "dwPlantedC4", "dwPrediction", "dwSensitivity", "dwSensitivity_sensitivity", "dwViewAngles", "dwViewMatrix", "dwViewRender", "dwWeaponC4" };

	for (int i = 0; i < client_dll_offsetList.size(); i++)
		std::cout << client_dll_offsetList[i] << " --> " << getAddress(client_dll_offsetList[i], 1) << std::endl;

	session.CloseURL();
	session.CloseSession();

	Sleep(-1);

	return 0;
}
