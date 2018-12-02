#include <Windows.h>
#include <iostream>

int main() {
	DWORD  nBufferLength = 1024;
	wchar_t buff[1024] = { 0 };
	LPWSTR lpBuffer = buff;

	
	// API Call
	GetLogicalDriveStringsW(nBufferLength, lpBuffer);


	HANDLE hOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	WriteConsole(hOutput, lpBuffer, 256, NULL, NULL);

	std::getchar();

	return 0;
}