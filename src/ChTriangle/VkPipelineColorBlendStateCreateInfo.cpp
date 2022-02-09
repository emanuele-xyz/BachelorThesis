VkPipelineColorBlendStateCreateInfo colorBlendState = {};
colorBlendState.sType = VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO;
colorBlendState.attachmentCount = 1;
colorBlendState.pAttachments = &colorBlendAttachmentState;
