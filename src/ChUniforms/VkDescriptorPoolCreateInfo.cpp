VkDescriptorPoolSize uniformBufferPoolSize = {};
uniformBufferPoolSize.type = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
uniformBufferPoolSize.descriptorCount = 1;

VkDescriptorPoolSize poolSizes[] =
{
    uniformBufferPoolSize,
};

VkDescriptorPoolCreateInfo info = {};
info.sType = VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO;
info.maxSets = 1;
info.poolSizeCount = arraysize(poolSizes);
info.pPoolSizes = poolSizes;
