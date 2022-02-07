VkRenderPassCreateInfo createInfo = {};
createInfo.sType = VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO;
createInfo.attachmentCount = attachmentCount;
createInfo.pAttachments = attachments;
createInfo.subpassCount = subpassCount;
createInfo.pSubpasses = subpassess;
// If there is more than one subpass, we need to specify
// synchronization requirements through subpass dependencies
createInfo.dependencyCount = 0;
createInfo.pDependencies = nullptr;
