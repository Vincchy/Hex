#pragma once
#include "Core.h"

namespace Hex {

	class HEX_API Application
	{
	public:
		Application();
		virtual ~Application();
		virtual void Run();
		bool Init();

	private:
		bool m_Running;
	};

	// To be defined in client
	Application* CreateApplication();
}

