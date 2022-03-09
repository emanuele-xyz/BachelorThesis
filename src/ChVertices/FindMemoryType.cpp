u32 VexFindMemoryType
(
    VkPhysicalDevice physicalDevice,
    u32 supportedMemoryTypes,
    VkMemoryPropertyFlags requiredMemoryProperties
)
{
    // Get the available types of memory
    VkPhysicalDeviceMemoryProperties memoryProperties = {};
    vkGetPhysicalDeviceMemoryProperties(
        physicalDevice,
        &memoryProperties
    );

    // Find a memory type that is supported
    for (u32 i = 0; i < memoryProperties.memoryTypeCount; i++)
    {
        bool isMemoryTypeSupported =
            (supportedMemoryTypes & (1 << i));

        VkMemoryPropertyFlags memoryTypeProperties =
            memoryProperties.memoryTypes[i].propertyFlags;

        bool areRequiredMemoryPropertiesSupported =
            ((memoryTypeProperties & requiredMemoryProperties) ==
            requiredMemoryProperties);

        if (isMemoryTypeSupported &&
            areRequiredMemoryPropertiesSupported)
        {
            return i;
        }
    }

    assert(false, "Failed to find a suitable memory type");

    return 0;
}
