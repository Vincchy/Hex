#pragma once
#include "spdlog/spdlog.h"
#include "Core.h"

namespace Hex {

	class HEX_API Log
	{
	public:
		static bool Init();
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_AppLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_AppLogger;
	};

#define HEX_CORE_TRACE(x) Hex::Log::GetCoreLogger()->trace(x)
#define HEX_CORE_INFO(x) Hex::Log::GetCoreLogger()->info(x)
#define HEX_CORE_WARN(x) Hex::Log::GetCoreLogger()->warn(x)
#define HEX_CORE_ERROR(x) Hex::Log::GetCoreLogger()->error(x)

#define HEX_CLIENT_TRACE(x) Hex::Log::GetClientLogger->trace(x)
#define HEX_CLIENT_INFO(x) Hex::Log::GetClientLogger->info(x)
#define HEX_CLIENT_WARN(x) Hex::Log::GetClientLogger->warn(x)
#define HEX_CLIENT_ERROR(x) Hex::Log::GetClientLogger->error(x)
}