// color attachment reference ...

VkAttachmentReference depthAttachmentReference = {};
depthAttachmentReference.attachment = 1;
depthAttachmentReference.layout = VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL;

// color attachment references ...

VkSubpassDescription colorSubpass = {};
colorSubpass.pipelineBindPoint = VK_PIPELINE_BIND_POINT_GRAPHICS;
colorSubpass.colorAttachmentCount = arraysize(colorAttachmentReferences);
colorSubpass.pColorAttachments = colorAttachmentReferences;
colorSubpass.pDepthStencilAttachment = &depthAttachmentReference;
