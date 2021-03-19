#pragma once

#ifdef HEX_PLATFORM_WINDOWS
	#ifdef HEX_BUILD_DLL
		#define HEX_API _declspec(dllexport)
	#else
		#define HEX_API _declspec(dllimport)
	#endif
#endif
