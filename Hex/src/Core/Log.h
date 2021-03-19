#pragma once
#include "spdlog/spdlog.h"
#include "Core.h"

#define SPDLOG_COMPILED_LIB

namespace Hex {

	class HEX_API Log
	{
	public:
		static bool Init();

	private:
		static std::shared_ptr<spdlog::logger> m_CoreLogger;
		static std::shared_ptr<spdlog::logger> m_AppLogger;
	};

#define HEX_CORE_TRACE(x) Log::m_CoreLogger->trace(x)
#define HEX_CORE_INFO(x) Log::m_CoreLogger->info(x)
#define HEX_CORE_WARN(x) Log::m_CoreLogger->warn(x)
#define HEX_CORE_ERROR(x) Log::m_CoreLogger->error(x)

#define HEX_CLIENT_TRACE(x) Log::m_AppLogger->trace(x)
#define HEX_CLIENT_INFO(x) Log::m_AppLogger->info(x)
#define HEX_CLIENT_WARN(x) Log::m_AppLogger->warn(x)
#define HEX_CLIENT_ERROR(x) Log::m_AppLogger->error(x)
}