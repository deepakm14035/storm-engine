#pragma once

#ifdef ST_PLATFORM_WINDOWS

extern Storm::Application* Storm::CreateApplication();

void main() {
	//Storm::Print();
	auto sandbox = Storm::CreateApplication(); 
	sandbox->Run();
	delete sandbox;

}

#endif