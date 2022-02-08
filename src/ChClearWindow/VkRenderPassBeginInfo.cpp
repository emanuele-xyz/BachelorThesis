VkRenderPassBeginInfo beginInfo = {};
beginInfo.sType = VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO;
beginInfo.renderPass = renderPass;
beginInfo.framebuffer = framebuffer;
beginInfo.renderArea.offset = { 0, 0 };
beginInfo.renderArea.extent = context.swapchainImageExtent;
beginInfo.clearValueCount = 1;
beginInfo.pClearValues = &clearValue;
