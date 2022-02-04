VkQueue graphicsQueue = VK_NULL_HANDLE;
vkGetDeviceQueue(device, graphicsQueueFamilyIndex, 0, &graphicsQueue);

VkQueue presentQueue = VK_NULL_HANDLE;
vkGetDeviceQueue(device, presentQueueFamilyIndex, 0, &presentQueue);
