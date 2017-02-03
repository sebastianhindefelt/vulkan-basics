#pragma once

#include "VDeleter.h"
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class GLFWwindow;

class MainApplication {
public:
	void run();

private:
	void initWindow();
	void mainLoop();

	void initVulkan();
	void createInstance();


	VDeleter<VkInstance> instance { vkDestroyInstance };
	GLFWwindow* window;

	const int WIDTH = 800;
	const int HEIGHT = 600;
};