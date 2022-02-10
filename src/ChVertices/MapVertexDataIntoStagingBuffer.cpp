void* data = nullptr;
vkMapMemory(device, stagingBufferMemory, 0, stagingBufferSizeInBytes, 0, &data);
memcpy(data, vertices, stagingBufferSizeInBytes);
vkUnmapMemory(device, stagingBufferMemory);
