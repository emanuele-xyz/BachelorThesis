u32 queueFamilyIndices[] =
{
    graphicsQueueFamilyIndex,
    presentQueueFamilyIndex,
};

if (graphicsQueueFamilyIndex != presentQueueFamilyIndex)
{
    // Using the concurrent sharing mode we don't need to worry
    // about resource queue ownership transitions
    swapchainCreateInfo.imageSharingMode = VK_SHARING_MODE_CONCURRENT;
    swapchainCreateInfo.queueFamilyIndexCount =
        arraysize(queueFamilyIndices);
    swapchainCreateInfo.pQueueFamilyIndices = queueFamilyIndices;
}
else
{
    // We use a single queue, thus it can exclusively own the
    // swapchain images that will be created.
    // This is more efficient
    swapchainCreateInfo.imageSharingMode = VK_SHARING_MODE_EXCLUSIVE;
}
