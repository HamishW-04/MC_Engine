#pragma once

#include <stdio.h>

#ifdef MCE_PLATFORM_WINDOWS

extern MC_Engine::Application* MC_Engine::CreateApplication();

int main(int argc, char** argv) {
	printf("Welcome to MC_Engine!");
	auto app = MC_Engine::CreateApplication();
	app->Run();
	delete app;

	//return 0;
}
#else
	#error MC_Engine only supports Windows! :(
#endif