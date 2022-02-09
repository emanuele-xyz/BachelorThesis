const char* shaderPath = "path/to/shader.spv";
u32 codeSize = GetFileSize(shaderPath);
u8* codeData = LoadFile(shaderPath, codeSize);

VkShaderModuleCreateInfo createInfo = {};
createInfo.sType = VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO;
createInfo.codeSize = codeSize;
createInfo.pCode = (u32*)(codeData);

VkShaderModule shaderModule = VK_NULL_HANDLE;
vkCreateShaderModule(device, &createInfo, nullptr, shaderModule);

free(codeData);
codeSize = 0;
