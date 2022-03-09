VkPipelineVertexInputStateCreateInfo vertexInputInfo = {};
vertexInputInfo.sType =
    VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO;
vertexInputInfo.vertexBindingDescriptionCount =
    arraysize(bindingDescriptions);
vertexInputInfo.pVertexBindingDescriptions =
    bindingDescriptions;
vertexInputInfo.vertexAttributeDescriptionCount =
    arraysize(attributeDescriptions);
vertexInputInfo.pVertexAttributeDescriptions =
    attributeDescriptions;
