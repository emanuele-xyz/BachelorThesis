VkFenceCreateInfo createInfo = {};
createInfo.sType = VK_STRUCTURE_TYPE_FENCE_CREATE_INFO;
createInfo.flags = VK_FENCE_CREATE_SIGNALED_BIT;

VkFence commandBufferFence = VK_NULL_HANDLE;
vkCreateFence(device, &createInfo, nullptr, &commandBufferFence);
