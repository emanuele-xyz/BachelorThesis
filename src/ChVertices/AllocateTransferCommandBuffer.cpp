VkCommandBufferAllocateInfo info = {};
info.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO;
info.commandPool = graphicsCommandPool;
info.level = VK_COMMAND_BUFFER_LEVEL_PRIMARY;
info.commandBufferCount = 1;

VkCommandBuffer commandBuffer = VK_NULL_HANDLE;
vkAllocateCommandBuffers(device, &info, &commandBuffer);
