#define VK_USE_PLATFORM_WIN32_KHR
#include "Vulkan.h"

const char* const* extensions[] =
{
    VK_KHR_SURFACE_EXTENSION_NAME,
    VK_KHR_WIN32_SURFACE_EXTENSION_NAME,
    // ... other extensions
}
