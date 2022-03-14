for (u32 i = 0; i < queueFamilyCount; i++)
{
    VkBool32 presentSupport = false;
    vkGetPhysicalDeviceSurfaceSupportKHR(physicalDevice, i,
        surface, &presentSupport);
    if (presentSupport)
    {
        // present operations are supported and i is the index
        // of a queue family that supports such operations
    }
}
