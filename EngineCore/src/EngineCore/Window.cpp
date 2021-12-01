#include <iostream>

#include "EngineCore/Log.hpp"
//#define GLEW_STATIC

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "EngineCore/Window.hpp"

namespace Engine {

	GLFWwindow* Window::window;

	Window::~Window() {
		terminate();
	}

	int Window::initialize(int width, int height, const char* title) {
		LOG_INFO("Create window {0} width size {1}x{2}", title, width, height);

		glfwInit();
		glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
		glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
		glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
		glfwWindowHint(GLFW_RESIZABLE, GL_TRUE);

		window = glfwCreateWindow(width, height, title, nullptr, nullptr);
		if (window == nullptr) {
			LOG_CRITICAL("Failed to create GLFW Window");
			glfwTerminate();
			return -1;
		}
		glfwMakeContextCurrent(window);

		/*glewExperimental = GL_TRUE;
		if (glewInit() != GLEW_OK) {
			std::cerr << "Failed to initialize GLEW" << std::endl;
			return -1;
		}*/
		glViewport(0, 0, width, height);

		Window::width = width;
		Window::height = height;
		return 0;
	}

	Window::Window(const char* title, const int width, const int height)
	{
		int resultCode = initialize(width, height, title);
	}

	void Window::setCursorMode(int mode) {
		glfwSetInputMode(window, GLFW_CURSOR, mode);
	}

	void Window::terminate() {
		glfwTerminate();
	}

	bool Window::isShouldClose() {
		return glfwWindowShouldClose(window);
	}

	void Window::setShouldClose(bool flag) {
		glfwSetWindowShouldClose(window, flag);
	}

	void Window::swapBuffers() {
		glfwSwapBuffers(window);
	}

}