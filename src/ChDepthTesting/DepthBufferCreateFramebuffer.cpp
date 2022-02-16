VkImageView attachments[] =
{
    nextSwapchainImageView,
    depthBufferView,
};

VkFramebufferCreateInfo createInfo = {};
createInfo.sType = VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO;
createInfo.renderPass = renderPass;
createInfo.attachmentCount = arraysize(attachments);
createInfo.pAttachments = attachments;
createInfo.width = swapchainImageExtent.width;
createInfo.height = swapchainImageExtent.height;
createInfo.layers = 1;
