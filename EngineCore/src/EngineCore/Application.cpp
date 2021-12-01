#include "EngineCore/Application.hpp"
#include "EngineCore/Log.hpp"
#include "EngineCore/Window.hpp"



namespace Engine {
	Application::Application() {
		LOG_INFO("Starting Application");
	}
	Application::~Application() {
		LOG_INFO("Closing Application");
	}

	int Application::start(unsigned int window_width, unsigned int window_height, const char* title) {

		window = std::make_unique<Window>(title, window_width, window_height);
       
		on_update();
		
		return 0;
	}

}

