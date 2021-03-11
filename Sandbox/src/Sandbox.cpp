#include <Hex.h>

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

int main()
{
	SandboxApplication* app = new SandboxApplication();
	app->Run();

	return 0;
}