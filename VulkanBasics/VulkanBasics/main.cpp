#include "MainApplication.h"

#include <iostream>
#include <stdexcept>

int main() {
	MainApplication app;

	try {
		app.run();
	}
	catch (const std::runtime_error& e) {
		std::cerr << e.what() << std::endl;
		return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}