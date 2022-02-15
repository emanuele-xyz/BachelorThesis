VkDescriptorSetLayout setLayouts[] =
{
    pipelineDescriptorSetLayout,
};

VkDescriptorSetAllocateInfo info = {};
info.sType = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO;
info.descriptorPool = pipelineDescriptorPool;
info.descriptorSetCount = arraysize(setLayouts);
info.pSetLayouts = setLayouts;
