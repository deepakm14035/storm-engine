#pragma once
#include "../Core.h"
namespace Storm {
	class STORM_API Application {
	public:
		Application();
		virtual ~Application();

		void Run();

	};
	Application* CreateApplication();
}