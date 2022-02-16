VkMemoryRequirements memoryRequirements = {};
vkGetImageMemoryRequirements(device, imageObject, &memoryRequirements);

VkMemoryAllocateInfo info = {};
info.sType = VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO;
info.allocationSize = memoryRequirements.size;
info.memoryTypeIndex = FindMemoryType(physicalDevice, memoryRequirements.memoryTypeBits, properties);

VkDeviceMemory imageMemory = VK_NULL_HANDLE;
vkAllocateMemory(device, &info, nullptr, &imageMemory);
