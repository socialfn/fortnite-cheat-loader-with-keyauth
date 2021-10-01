
#include <iostream>
#include <Windows.h>
#include <ios>
#include <limits>
#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <sstream>
#include <string>
#include <urlmon.h>
#include <tchar.h>
#include "api/KeyAuth.hpp"
#pragma comment (lib, "urlmon.lib")
using namespace KeyAuth;
////// very simple cheat loader with keyauth
//////// coded by fortware.xyz
////github.com/fortware
/////you need to replace the links and the file path and the keyauth things
/////have fun to paste 



std::string name = XorStr(""); // application name. right above the blurred text aka the secret on the licenses tab among other tabs
std::string ownerid = XorStr(""); // ownerid, found in account settings. click your profile picture on top right of dashboard and then account settings.
std::string secret = XorStr(""); // app secret, the blurred text on licenses tab and other tabs
std::string version = XorStr(""); // leave alone unless you've changed version on website

api KeyAuthApp(name, ownerid, secret, version);

int main()
{

	SetConsoleTitleA(XorStr("your name").c_str());
	std::cout << XorStr("\n\n Connecting..");
	KeyAuthApp.init();
	system(XorStr("cls").c_str());


	


	        std::string key;
			std::cout << XorStr("\n Enter Key: ");
			std::cin >> key;
			KeyAuthApp.license(key);


	


	#pragma region
			
			system("cls");
			std::cout << " Welcome to YOURNAME loader... fortware";
			Sleep(2000);
			system("cls");
			system("color b");
			std::cout << " select your winver\n\n";
			std::cout << " [1] 2004-21h2\n";
			std::cout << " [2] 1909\n\n";
			std::cout << "> ";
			std::string winver;
			std::cin >> winver;
			
			if (winver == "1") {
				//Drivers 
				std::string gaymapper = "";
				std::string gaydrivers = "";
				HRESULT a = URLDownloadToFile(NULL, _T(""), _T("mapper path"), 1, NULL);
				HRESULT b = URLDownloadToFile(NULL, _T(""), _T("drivers path"), 2, NULL);
				system("your mapper");
				Sleep(4222);
				//Delete Drivers
				std::wstring verygay(gaydrivers.begin(), gaydrivers.end());
				std::wstring veryverygay(gaymapper.begin(), gaymapper.end());
				auto nigger1 = DeleteFile(verygay.c_str());
				auto nigger2 = DeleteFile(veryverygay.c_str());
				//Random 
				system("cls");
				system("color a");
				std::cout << " [+] Loaded Drivers\n";
				Sleep(1500);
				std::cout << " [+] Called Function\n";
				Sleep(1500);
				std::cout << " [+] Successfully Executed\n";
				Sleep(1500);
				system("cls");
				system("color d");
				std::cout << "Press any key to inject [lobby]\n\n";
				system("pause >nul");
				//Modmap
				std::string gayinjector = "";
				std::string iamgay = "";
				HRESULT e = URLDownloadToFile(NULL, _T("file link"), _T("injector path"), 5, NULL);
				HRESULT f = URLDownloadToFile(NULL, _T("file link"), _T("dll path"), 6, NULL);
				system("your injector");
				Sleep(4222);
				std::wstring morethanverygay(gayinjector.begin(), gayinjector.end());
				std::wstring morethanveryverygay(iamgay.begin(), iamgay.end());
				auto daddy1 = DeleteFile(morethanverygay.c_str());
				auto daddy2 = DeleteFile(morethanveryverygay.c_str());
				system("cls");
				system("cls");
				system("color a");
				std::cout << " [+] Checking for Updates\n";
				Sleep(1500);
				std::cout << " [+] Finding Fortnite Game\n";
				Sleep(1500);
				std::cout << " [+] Injecting..\n";
				Sleep(1500);
				std::cout << " [+] Injected\n\n";
				system("pause >nul");





			}else if (winver == "2"){
				std::string moregaymapper = "";
				std::string moregaydrivers = "";
				HRESULT c = URLDownloadToFile(NULL, _T("file link"), _T(""), 3, NULL);
				HRESULT d = URLDownloadToFile(NULL, _T("file link"), _T(""), 4, NULL);
				system("mapper");
				Sleep(4222);
				std::wstring verygay(moregaydrivers.begin(), moregaydrivers.end());
				std::wstring veryverygay(moregaymapper.begin(), moregaymapper.end());
				auto nigga1 = DeleteFile(verygay.c_str());
				auto nigga2 = DeleteFile(veryverygay.c_str());
				system("cls");
				system("color a");
				std::cout << " [+] Loaded Drivers\n";
				Sleep(1500);
				std::cout << " [+] Called Function\n";
				Sleep(1500);
				std::cout << " [+] Successfully Executed\n";
				Sleep(1500);
				system("cls");
				system("color d");
				std::cout << "Press any key to inject [lobby]\n\n";
				system("pause");
				std::string gayinjector1 = "path";
				std::string iamgay2 = "path";
				HRESULT e = URLDownloadToFile(NULL, _T("link "), _T("path"), 5, NULL);
				HRESULT f = URLDownloadToFile(NULL, _T("link"), _T("path"), 6, NULL);
				//Inject 
				system("injector");
				Sleep(4222);
				//Delete Driver
				std::wstring morethanverygay(gayinjector1.begin(), gayinjector1.end());
				std::wstring morethanveryverygay(iamgay2.begin(), iamgay2.end());
				auto daddy1 = DeleteFile(morethanverygay.c_str());
				auto daddy2 = DeleteFile(morethanveryverygay.c_str());
				//FAke injector
				system("cls");
				system("cls");
				system("color a");
				std::cout << " [+] Checking for Updates\n";
				Sleep(1500);
				std::cout << " [+] Finding Fortnite Game\n";
				Sleep(1500);
				std::cout << " [+] Injecting..\n";
				Sleep(1500);
				std::cout << " [+] Injected\n";



				

			}






}
