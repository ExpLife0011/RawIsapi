// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files:
#include <windows.h>



#ifndef GLOBAL_VALUES
#define GLOBAL_VALUES
// This is the launch path for the managed DLL. It is set in dllmain.cpp
extern wchar_t Global_DllFilePath[513];

// Expected .Net DLL file name
#define DOTNET_HOST_FILE_NAME L"Communicator.dll"

// Expected .Net entry class (with full namespace)
#define DOTNET_ENTRY_CLASS_NAME L"Communicator.Entry"

// Expected .Net static probing method
#define DOTNET_PROBING_STATIC L"FindFunctionPointer"

// Runtime host version
#define DOTNET_RUNTIME_VERSION L"v4.0.30319"

#endif
