#include "Log.h"

bool Hex::Log::Init()
{
	m_CoreLogger = std::make_shared<spdlog::logger>(spdlog::logger("Hex"));
	m_AppLogger = std::make_shared<spdlog::logger>(spdlog::logger("Application"));

	spdlog::initialize_logger(m_CoreLogger);
	spdlog::initialize_logger(m_AppLogger);

	return true;
}
