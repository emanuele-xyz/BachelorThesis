VkPipelineDepthStencilStateCreateInfo depthStencilState = {};
depthStencilState.sType = VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO;
depthStencilState.depthTestEnable = VK_TRUE;
depthStencilState.depthWriteEnable = VK_TRUE;
depthStencilState.depthCompareOp = VK_COMPARE_OP_LESS;
