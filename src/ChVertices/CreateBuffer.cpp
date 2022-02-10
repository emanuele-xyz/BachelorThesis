VkBufferCreateInfo info = {};
info.sType = VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO;
info.size = size; // buffer's size in bytes
info.usage = usage; // usages of the buffer
info.sharingMode = VK_SHARING_MODE_EXCLUSIVE;

VkBuffer buffer = VK_NULL_HANDLE;
vkCreateBuffer(device, &info, nullptr, &buffer);
