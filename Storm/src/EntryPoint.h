#pragma once

#ifdef ST_PLATFORM_WINDOWS

#include "Storm/Log.h"

extern Storm::Application* Storm::CreateApplication();

void main(int argc, char** argv) {

	//Storm::Print();
	Storm::Log::Init();
	ST_CORE_WARN("client error!!");
	auto sandbox = Storm::CreateApplication();
	sandbox->Run();
	delete sandbox;

}

#endif