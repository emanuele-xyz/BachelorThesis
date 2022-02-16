VkImageViewCreateInfo info = {};
info.sType = VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO;
info.image = imageObject;
info.viewType = VK_IMAGE_VIEW_TYPE_2D;
info.format = format;
info.subresourceRange.aspectMask = aspectMask;
info.subresourceRange.baseMipLevel = 0;
info.subresourceRange.levelCount = 1;
info.subresourceRange.baseArrayLayer = 0;
info.subresourceRange.layerCount = 1;

VkImageView imageView = VK_NULL_HANDLE;
vkCreateImageView(device, &info, nullptr, &imageView);
