// dllmain.cpp : Defines the entry point for the DLL application.
#include <Windows.h>
#include <iostream>
using namespace std;

extern "C" __declspec(dllexport) void TestMsg() {
    MessageBoxA(0, "Test DLL in Python!!!", "TestDllPython", MB_OK | MB_ICONEXCLAMATION);
    Sleep(1500);
    exit(122);
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        cout << "[+] DLL Has Been Attached To Python" << endl;
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

