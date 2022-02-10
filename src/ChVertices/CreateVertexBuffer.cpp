VkBuffer vertexBufferObject = VK_NULL_HANDLE;
VkDeviceMemory vertexBufferMemory = VK_NULL_HANDLE;
u32 vertexBufferSizeInBytes = sizeof(*vertices) * arraysize(vertices);
VexCreateBuffer
(
    physicalDevice,
    device,
    vertexBufferSizeInBytes,
    VK_BUFFER_USAGE_TRANSFER_DST_BIT | VK_BUFFER_USAGE_VERTEX_BUFFER_BIT,
    VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT,
    &vertexBufferObject,
    &vertexBufferMemory
);
