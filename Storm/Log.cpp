#include "src\Storm\Log.h"

#include <memory>
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

std::shared_ptr<spdlog::logger> Storm::Log::s_coreLogger;
std::shared_ptr<spdlog::logger> Storm::Log::s_clientLogger;

void Storm::Log::Init()
{
	spdlog::set_pattern("%^[%T] %n: %v%$");
	s_coreLogger = spdlog::stdout_color_mt("Storm");
	s_coreLogger->set_level(spdlog::level::trace);
	s_clientLogger = spdlog::stdout_color_mt("Game");
	s_clientLogger->set_level(spdlog::level::trace);
}
