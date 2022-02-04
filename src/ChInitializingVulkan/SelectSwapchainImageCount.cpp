u32 swapchainMinImageCount = capabilities->minImageCount + 1;
// If maxImageCount is 0, there is no limit on the number of images
if ((capabilities->maxImageCount > 0) && (swapchainMinImageCount > capabilities->maxImageCount))
{
    swapchainMinImageCount = capabilities->maxImageCount;
}

return swapchainMinImageCount;
