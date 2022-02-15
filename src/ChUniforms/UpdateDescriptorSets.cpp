VkWriteDescriptorSet descriptorWrites[] =
{
    descriptorWrite,
};

vkUpdateDescriptorSets(device, arraysize(descriptorWrites), descriptorWrites, 0, nullptr);
