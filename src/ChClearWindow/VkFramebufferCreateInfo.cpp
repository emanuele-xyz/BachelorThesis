VkFramebufferCreateInfo createInfo = {};
createInfo.sType = VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO;
createInfo.renderPass = renderPass;
createInfo.attachmentCount = 1;
createInfo.pAttachments = &nextSwapchainImageView;
createInfo.width = swapchainImageExtent.width;
createInfo.height = swapchainImageExtent.height;
createInfo.layers = 1;
