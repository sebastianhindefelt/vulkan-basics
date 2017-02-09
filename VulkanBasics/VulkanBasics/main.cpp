#include "VulkanHandler.h"

#include <iostream>
#include <stdexcept>

int main() 
{
	VulkanHandler vh;

	try {
		vh.initWindow();
		vh.initVulkan("shaders/shader.vert.spv", "shaders/shader.frag.spv");
		vh.run();
	}
	catch (const std::runtime_error& e) 
	{
		std::cerr << e.what() << std::endl;
		return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}