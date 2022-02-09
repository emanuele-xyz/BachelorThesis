VkPipelineShaderStageCreateInfo stageInfo = {};
stageInfo.sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
stageInfo.stage = stage;
stageInfo.module = shaderModule;
stageInfo.pName = "main";
