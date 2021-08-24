#pragma once

#ifdef ST_PLATFORM_WINDOWS
	#ifdef ST_BUILD_DLL
		#define STORM_API __declspec(dllexport)
	#else
		#define STORM_API __declspec(dllimport)
	#endif
#else
#error Storm only supports windows
#endif
