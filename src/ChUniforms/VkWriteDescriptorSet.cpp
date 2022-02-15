VkDescriptorBufferInfo info = {};
info.buffer = uniformBufferObject;
info.offset = 0;
info.range = uniformBufferSizeInBytes;

VkWriteDescriptorSet descriptorWrite = {};
descriptorWrite.sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
descriptorWrite.dstSet = pipelineDescriptorSet;
descriptorWrite.dstBinding = 0;
descriptorWrite.dstArrayElement = 0;
descriptorWrite.descriptorCount = 1;
descriptorWrite.descriptorType = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
descriptorWrite.pBufferInfo = &info;
