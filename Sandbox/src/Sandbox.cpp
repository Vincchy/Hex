#include <Hex.h>
#include <iostream>

class SandboxApplication : public Hex::Application
{
public:

	SandboxApplication()
	{

	}

	~SandboxApplication()
	{

	}
};

Hex::Application* CreateApplication()
{
	return new SandboxApplication();
}