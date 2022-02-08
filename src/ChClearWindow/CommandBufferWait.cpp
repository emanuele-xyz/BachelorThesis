vkWaitForFences(device, 1, &commandBufferFence, VK_TRUE, UINT64_MAX);
vkResetFences(device, 1, &commandBufferFence);
