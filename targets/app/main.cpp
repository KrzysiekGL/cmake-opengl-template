#ifdef _WIN32
	// OpenGL on Windows needs Windows.h
	#include <Windows.h>
#endif

#include <example-lib.hpp>

#include <GL/gl.h>

int main(int argc, char ** argv, char ** eval) {
	exlib::Window window(800, 600, "Hello from GLFW");

	while(!window.shouldClose()) {
		window.pollEvents();

		// Old OpenGL 1.1 code - for simplicity
		glBegin(GL_TRIANGLES);
		glVertex2f(-.5f, .0f);
		glVertex2f(.0f, .5f);
		glVertex2f(.5f, .0f);
		glEnd();

		window.swapBuffers();
	}

	return 0;
}

