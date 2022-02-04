VkImageViewCreateInfo createInfo = {};
createInfo.sType = VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO;
createInfo.image = swapchainImages[i];
createInfo.viewType = VK_IMAGE_VIEW_TYPE_2D;
createInfo.format = swapchainImageFormat.format;
createInfo.components =
{
    VK_COMPONENT_SWIZZLE_IDENTITY,
    VK_COMPONENT_SWIZZLE_IDENTITY,
    VK_COMPONENT_SWIZZLE_IDENTITY,
    VK_COMPONENT_SWIZZLE_IDENTITY,
};
createInfo.subresourceRange =
{
    VK_IMAGE_ASPECT_COLOR_BIT,
    0,
    1,
    0,
    1,
};

VkImageView* swapchainImageViews = nullptr;
// .. allocate an array
vkCreateImageView(device, &createInfo, nullptr, &swapchainImageViews[i]);
