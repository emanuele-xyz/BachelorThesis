VkBuffer stagingBufferObject = VK_NULL_HANDLE;
VkDeviceMemory stagingBufferMemory = VK_NULL_HANDLE;
u32 stagingBufferSizeInBytes = vertexBufferSizeInBytes;
CreateBuffer
(
    physicalDevice,
    device,
    stagingBufferSizeInBytes,
    VK_BUFFER_USAGE_TRANSFER_SRC_BIT,
    VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT,
    &stagingBufferObject,
    &stagingBufferMemory
);
