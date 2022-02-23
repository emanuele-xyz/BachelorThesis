VexCreateImage
(
    physicalDevice,
    device,
    swapchainImageExtent.width,
    swapchainImageExtent.height,
    msaaSamples,
    swapchainImageFormat.format,
    VK_IMAGE_TILING_OPTIMAL,
    VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT,
    VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT,
    &renderTargetImage, &renderTargetMemory
);

VexCreateImageView
(
    device,
    renderTargetImage,
    swapchainImageFormat.format,
    VK_IMAGE_ASPECT_COLOR_BIT,
    &renderTargetView
);
