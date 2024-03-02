#include "MC_Engine.h"

class Sandbox : public MC_Engine::Application {
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

MC_Engine::Application* MC_Engine::CreateApplication() {
	return new Sandbox();
}