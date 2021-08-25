#pragma once

#include "../Core.h"
#include "spdlog/spdlog.h"
#include <memory>
namespace Storm {
	class STORM_API Log {
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_coreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_clientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_coreLogger;
		static std::shared_ptr<spdlog::logger> s_clientLogger;
	};
}

//Core log macros
#define ST_CORE_ERROR(...) ::Storm::Log::GetCoreLogger()->error(__VA_ARGS__)
#define ST_CORE_WARN(...) ::Storm::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define ST_CORE_INFO(...) ::Storm::Log::GetCoreLogger()->info(__VA_ARGS__)
#define ST_CORE_TRACE(...) ::Storm::Log::GetCoreLogger()->trace(__VA_ARGS__)

//client log macros
#define ST_ERROR(...) ::Storm::Log::GetClientLogger()->error(__VA_ARGS__)
#define ST_WARN(...) ::Storm::Log::GetClientLogger()->warn(__VA_ARGS__)
#define ST_INFO(...) ::Storm::Log::GetClientLogger()->info(__VA_ARGS__)
#define ST_TRACE(...) ::Storm::Log::GetClientLogger()->trace(__VA_ARGS__)
