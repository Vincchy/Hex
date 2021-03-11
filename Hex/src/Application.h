#pragma once
#include "../src/Core.h"

namespace Hex {

	class HEX_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
		bool Init();

	private:
		bool m_Running;
	};

}

