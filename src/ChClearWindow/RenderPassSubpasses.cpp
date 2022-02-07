VkAttachmentReference colorAttachmentReference = {};
// Attachment's index in 'attachments' array
colorAttachmentReference.attachment = 0;
// Layout the attachment uses during the subpass
colorAttachmentReference.layout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;

VkAttachmentReference colorAttachmentReferences[] =
{
    colorAttachmentReference,
};

VkSubpassDescription colorSubpass = {};
colorSubpass.pipelineBindPoint = VK_PIPELINE_BIND_POINT_GRAPHICS;
colorSubpass.colorAttachmentCount = arraysize(colorAttachmentReferences);
colorSubpass.pColorAttachments = colorAttachmentReferences;

VkSubpassDescription subpassess[] =
{
    colorSubpass,
};
