VkDescriptorSetLayoutCreateInfo info = {};
info.sType = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO;
info.bindingCount = arraysize(bindings);
info.pBindings = bindings;
