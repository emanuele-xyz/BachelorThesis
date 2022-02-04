if (capabilities->currentExtent.width == 0xFFFFFFFF)
{
    VkExtent2D extent = { windowWidth, windowHeight };
    extent.width = clamp(extent.width, capabilities->minImageExtent.width, capabilities->maxImageExtent.width);
    extent.height = clamp(extent.height, capabilities->minImageExtent.height, capabilities->maxImageExtent.height);
    return extent;
}
else
{
    // the current surface size is perfect for the job
    return capabilities->currentExtent;
}
