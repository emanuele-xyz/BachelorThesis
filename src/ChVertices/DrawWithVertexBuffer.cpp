// Begin render pass ...

// Bind our pipeline state object ...

VkBuffer buffers[] = { vertexBufferObject };
VkDeviceSize offsets[] = { 0 };
vkCmdBindVertexBuffers(commandBuffer, 0, 1, buffers, offsets);

vkCmdDraw(commandBuffer,arraysize(vertices), 1, 0, 0);

// End render pass ...
