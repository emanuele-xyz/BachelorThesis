VkInstanceCreateInfo createInfo = {};
createInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
createInfo.pApplicationInfo = &appInfo;
createInfo.enabledLayerCount = layerCount;
createInfo.ppEnabledLayerNames = layers;
createInfo.enabledExtensionCount = extensionCount;
createInfo.ppEnabledExtensionNames = extentions;
