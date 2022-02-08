u32 nextSwapchainImageIndex = 0;
vkAcquireNextImageKHR(
    device,
    swapchain,
    UINT64_MAX,
    imageAvailableSemaphore,
    VK_NULL_HANDLE,
    &nextSwapchainImageIndex
);

nextSwapchainImage = swapchainImages[nextSwapchainImageIndex];
nextSwapchainImageView = swapchainImageViews[nextSwapchainImageIndex];
