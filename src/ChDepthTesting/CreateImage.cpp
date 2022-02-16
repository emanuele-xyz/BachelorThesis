VkImageCreateInfo info = {};
info.sType = VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO;
info.imageType = VK_IMAGE_TYPE_2D;
info.format = format;
info.extent = { width, height, 1 };
info.mipLevels = 1;
info.arrayLayers = 1;
info.samples = VK_SAMPLE_COUNT_1_BIT;
info.tiling = tiling;
info.usage = usage;
info.sharingMode = VK_SHARING_MODE_EXCLUSIVE;
info.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;

VkImage imageObject = VK_NULL_HANDLE;
vkCreateImage(device, &info, nullptr, &imageObject);
