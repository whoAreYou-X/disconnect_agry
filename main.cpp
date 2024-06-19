#include <Windows.h>
#include <string.h>
#include <iostream>
#include <string>
#include<tchar.h>
#include <process.h>
#include <windows.h>
#include <tlhelp32.h>

#pragma comment(lib, "winmm.lib")

int main()
{
	HDC hdc = GetDC(0);
	int w = GetSystemMetrics(0);
	int h = GetSystemMetrics(1);
	int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR nCmdLine, int nCmdShow); {
		HDC hDc = GetWindowDC(GetDesktopWindow());

		DWORD WINAPI invers(LPVOID lpstart);

		{
			const char* sound[] = {
			   "SystemHand",
			   "SystemQuestion",
			   "SystemExclamation"
			};
			while (true)
			{
				BitBlt(hdc, rand() % 2, rand() % 2, w, h, hdc, rand() % 2, rand() % 2, SRCAND);
				PlaySoundA(sound[rand() % (sizeof(sound) / sizeof(sound[0]))], 0, SND_ASYNC);
				Sleep(rand() % 555 + 500);
			}


		}

	}
}