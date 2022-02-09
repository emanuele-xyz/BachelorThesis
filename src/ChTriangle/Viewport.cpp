VkViewport viewport = {};
// the viewport's upper left corner (x,y)
viewport.x = 0.0f;
viewport.y = 0.0f;
// viewport's width and height
viewport.width = (f32)(swapchainImageExtent.width);
viewport.height = (f32)(swapchainImageExtent.height);
// the depth range for the viewport
viewport.minDepth = 0.0f;
viewport.maxDepth = 1.0f;
