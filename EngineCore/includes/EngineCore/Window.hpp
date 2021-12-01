#pragma once

#include <GLFW/glfw3.h>

namespace Engine {

	class Window {
	private:
		static int initialize(int width, int height, const char* title);

		static int width;
		static int height;
		const char* title;

	public:
		
		Window(const char* title, const int width, const int height);
		~Window();

		Window(const Window&) = delete;
		Window(Window&&) = delete;
		Window& operator = (const Window&) = delete;
		Window& operator = (Window&&) = delete;

		static GLFWwindow* window;
		
		static void terminate();

		static void setCursorMode(int mode);
		static bool isShouldClose();
		static void setShouldClose(bool flag);
		static void swapBuffers();

	
	};

}