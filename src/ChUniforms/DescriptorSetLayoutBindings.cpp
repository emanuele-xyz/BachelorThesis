VkDescriptorSetLayoutBinding uniformBufferBinding = {};
uniformBufferBinding.binding = 0;
uniformBufferBinding.descriptorType = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
uniformBufferBinding.descriptorCount = 1;
uniformBufferBinding.stageFlags = VK_SHADER_STAGE_VERTEX_BIT;

VkDescriptorSetLayoutBinding bindings[] =
{
    uniformBufferBinding
};
