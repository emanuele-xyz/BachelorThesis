VkDescriptorSetLayout descriptorSetLayouts[] =
{
    pipelineDescriptorSetLayout,
};

VkPipelineLayoutCreateInfo info = {};
info.sType = VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO;
info.setLayoutCount = arraysize(descriptorSetLayouts);
info.pSetLayouts = descriptorSetLayouts;

VkPipelineLayout pipelineLayout = VK_NULL_HANDLE;
vkCreatePipelineLayout(device, &info, nullptr, &pipelineLayout);
