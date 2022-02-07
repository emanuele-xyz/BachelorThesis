VkSemaphore imageAvailableSemaphore = VK_NULL_HANDLE;
VkSemaphore renderFinishedSemaphore = VK_NULL_HANDLE;

VkSemaphoreCreateInfo createInfo = {};
createInfo.sType = VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO;
vkCreateSemaphore(device, &createInfo, nullptr, &imageAvailableSemaphore);
vkCreateSemaphore(device, &createInfo, nullptr, &renderFinishedSemaphore);
