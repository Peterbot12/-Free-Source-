#include <Windows.h>
#include <string>
#include <Windows.h>
#include <TlHelp32.h>
#include <DbgHelp.h>
#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <shellapi.h>
#include <TlHelp32.h>
#include <thread>
#include <vector>
#include <Windows.h>
#include <vector>
#include <string>
#include <string.h>
#include <iostream>
#include <fstream>
#include <winbase.h>
#include <tchar.h>
#include <stdio.h>
#include <Windows.h>
#include <CommCtrl.h>
#include <Windows.h>
#include <vector>
#include <string>
#include <string.h>
#include <iostream>
#include <fstream>
#include <winbase.h>
#include <tchar.h>
#include <mmsystem.h>
#include <iostream>
#include <WinInet.h>
#include <Windows.h>
#pragma comment(lib,"Wininet.lib")
#pragma comment(lib, "winmm.lib")
#pragma comment(lib, "urlmon.lib")
#pragma comment(lib,"wininet.lib")
#pragma comment(lib,"Wininet.lib")
#pragma comment(lib, "winmm.lib")
#define _WIN32_WINNT 0x0500
#include <tlhelp32.h>
#include <thread>
#include <random>


#include <Psapi.h>
#include <chrono>
#include <future>
#include <windows.h>

#pragma comment(lib, "psapi.lib")
#include <iostream>


int main()
{
	SetConsoleTitleA("Kermit Made This");
	std::cout << " Kermit's Basic Source\n";
	std::cout << " Use this idc u can sell u need ur own driver's btw\n\n\n";
	main:
	int choice;
	std::cout << " [1] Spoof\n [2] Clean\n [3] Check Serial's\n --------------------\n\n >> ";
	std::cin >> choice;

	if (choice == 1)
	{
		system("cls");
		URLDownloadToFile(NULL, L"https://Driver-Link-Here", L"C:\\Windows\\System\\Driver Name Here.sys", 0, NULL);
		URLDownloadToFile(NULL, L"Https://Mapper-Link-Here", L"C:\\Windows\\System\\Mapper Name Here.exe", 0, NULL);
		system("C:\\Windows\\System\\Mapper Name Here.exe C:\Windows\\System\\Driver Name Here.sys");
		remove("C:\\Windows\\System\\Driver Name Here.sys");
		Sleep(2000);
		main;

	}
	if (choice == 2)
	{
		system("cls");
		URLDownloadToFile(NULL, L"https://Cleaner-Link-Here", L"C:\\Windows\\System\\Cleaner Name Here.exe", 0, NULL);
		system("C:Windows\\System\\Cleaner Name Here.exe");
		Sleep(2000);
		main;

	}
	if (choice == 3)
	{
		system("cls");
		URLDownloadToFile(NULL, L"Https://Serial-Checker-LinkHere", L"C:\\Windows\\System\\Checker Name Here.bat", 0, NULL);
		system("C:\\Windows\\System\\Checker Name Here.bat");
		Sleep(5000);
		main;
	}
	
}