#ifndef EXAMPLE_LIB_HPP
#define EXAMPLE_LIB_HPP

#include <string>
#include <memory>

// Forward declare GLFWwindows to avoid including glfw3.h
struct GLFWwindow;

namespace exlib {
	class Window {
	public:
		Window(int width, int height, const std::string & title);
		~Window();

		bool shouldClose() const noexcept;

		void pollEvents() const noexcept;

		void swapBuffers() const noexcept;

		std::pair<int, int> getWindowSize() const noexcept;

	private:
		GLFWwindow * wnd;
	};
}

#endif /* EXAMPLE_LIB_HPP */

