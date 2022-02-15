VkBuffer uniformBufferObject = VK_NULL_HANDLE;
VkDeviceMemory uniformBufferMemory = VK_NULL_HANDLE;
u32 uniformBufferSizeInBytes = sizeof(UBO);
VexCreateBuffer
(
    physicalDevice,
    device,
    uniformBufferSizeInBytes,
    VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT,
    VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT,
    &uniformBufferObject,
    &uniformBufferMemory
);
