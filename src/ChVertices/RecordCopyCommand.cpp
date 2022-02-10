VkCommandBufferBeginInfo info = {};
info.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO;
info.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
vkBeginCommandBuffer(commandBuffer, &info);
{
    VkBufferCopy copyRegion = {};
    copyRegion.size = vertexBufferSizeInBytes;
    vkCmdCopyBuffer(commandBuffer, stagingBufferObject, vertexBufferObject, 1, &copyRegion);
}
vkEndCommandBuffer(commandBuffer);
