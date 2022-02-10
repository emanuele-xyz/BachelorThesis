VkSubmitInfo info = {};
info.sType = VK_STRUCTURE_TYPE_SUBMIT_INFO;
info.commandBufferCount = 1;
info.pCommandBuffers = &commandBuffer;
vkQueueSubmit(graphicsQueue, 1, &info, VK_NULL_HANDLE);
