for (u32 i = 0; i < queueFamilyCount; i++)
{
    VkQueueFamilyProperties queueFamily = queueFamilies[i];
    if (queueFamily.queueFlags & VK_QUEUE_GRAPHICS_BIT)
    {
        // graphics operations supported and i is the index
        // of a queue family that supports such operations
    }
}
