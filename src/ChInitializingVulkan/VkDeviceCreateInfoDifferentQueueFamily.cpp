// Specify requested device features here
VkPhysicalDeviceFeatures deviceFeatures = {};
// We don't use priority queues
f32 queuePriority = 1.0f;

VkDeviceQueueCreateInfo graphicsQueueCreateInfo = {};
graphicsQueueCreateInfo.sType = VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO;
graphicsQueueCreateInfo.queueFamilyIndex = graphicsQueueFamilyIndex;
graphicsQueueCreateInfo.queueCount = 1;
graphicsQueueCreateInfo.pQueuePriorities = &queuePriority;

VkDeviceQueueCreateInfo presentQueueCreateInfo = {};
presentQueueCreateInfo.sType = VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO;
presentQueueCreateInfo.queueFamilyIndex = presentQueueFamilyIndex;
presentQueueCreateInfo.queueCount = 1;
presentQueueCreateInfo.pQueuePriorities = &queuePriority;

VkDeviceQueueCreateInfo queueCreateInfos[] =
{
    graphicsQueueCreateInfo,
    presentQueueCreateInfo,
};

VkDeviceCreateInfo createInfo = {};
deviceInfo.sType = VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO;
createInfo.queueCreateInfoCount = arraysize(queueCreateInfos);
createInfo.pQueueCreateInfos = queueCreateInfos;
createInfo.enabledExtensionCount = deviceExtensionCount;
createInfo.ppEnabledExtensionNames = deviceExtensions;
createInfo.pEnabledFeatures = &deviceFeatures;
