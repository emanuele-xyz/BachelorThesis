#ifdef _DEBUG
DestroyDebugUtilsMessengerEXT(instance, debugMessenger, nullptr);
#endif

vkDestroyInstance(instance, nullptr);
