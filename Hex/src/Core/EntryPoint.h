#include "Application.h"
#include "Log.h"

// To be defined in client
extern Hex::Application* CreateApplication();

int main(int argc, char** argv)
{
	Hex::Log::Init();
	Hex::Application* app = CreateApplication();

	while (true)
		app->Run();

	delete app;
	return 0;
}