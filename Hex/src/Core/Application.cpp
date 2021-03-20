#include "Application.h"
#include "Log.h"

namespace Hex {

	Application::Application()
	{
		Init();
	}

	Application::~Application()
	{
	}

	void Application::Run()
	{
	}

	bool Application::Init()
	{
		HEX_CORE_INFO("Initialized application.");
		return true;
	}

}