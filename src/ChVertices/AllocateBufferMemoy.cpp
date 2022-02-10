// Bitmask specifying the properties that we want
// our buffer memory memory to have
VkMemoryPropertyFlags properties = ...;

// Query the memory requirements for our buffer
VkMemoryRequirements memoryRequirements = {};
vkGetBufferMemoryRequirements(device, buffer, &memoryRequirements);

VkMemoryAllocateInfo info = {};
info.sType = VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO;
info.allocationSize = memoryRequirements.size;
info.memoryTypeIndex = FindMemoryType(physicalDevice, memoryRequirements.memoryTypeBits, properties);

VkDeviceMemory memory = VK_NULL_HANDLE;
vkAllocateMemory(device, &info, nullptr, memory);
