VkCommandPoolCreateInfo createInfo = {};
createInfo.sType = VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO;
createInfo.flags = VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT;
createInfo.queueFamilyIndex = graphicsQueueFamilyIndex;
