VkPipelineRasterizationStateCreateInfo rasterizationState = {};
rasterizationState.sType = VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO;
rasterizationState.depthClampEnable = VK_FALSE;
rasterizationState.rasterizerDiscardEnable = VK_FALSE;
rasterizationState.polygonMode = VK_POLYGON_MODE_FILL;
rasterizationState.cullMode = VK_CULL_MODE_NONE;
rasterizationState.lineWidth = 1.0f;
