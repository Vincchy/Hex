#include "Application.h"
#include "Log.h"

// To be defined in client
extern Hex::Application* CreateApplication();

int main(int argc, char** argv)
{
	Hex::Application* app = CreateApplication();
	Hex::Log::Init();

	while (true)
		app->Run();

	delete app;
	return 0;
}