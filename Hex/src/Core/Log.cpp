#include "Log.h"

#include "spdlog/sinks/stdout_color_sinks.h"

namespace Hex {

	std::shared_ptr<spdlog::logger> Log::s_CoreLogger;
	std::shared_ptr<spdlog::logger> Log::s_AppLogger;

	bool Log::Init()
	{
		spdlog::set_pattern("[%n][%H:%M:%S][%l]:%^ %v %$");

		s_CoreLogger = spdlog::stdout_color_mt("Hex");
		s_CoreLogger->set_level(spdlog::level::level_enum::trace);

		s_AppLogger = spdlog::stdout_color_mt("Application");
		s_AppLogger->set_level(spdlog::level::level_enum::trace);

		s_CoreLogger->info("Initialized core logger.");
		s_CoreLogger->info("Initialized client logger.");

		return true;
	}

}