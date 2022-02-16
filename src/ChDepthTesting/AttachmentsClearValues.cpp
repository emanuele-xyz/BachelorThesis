VkClearValue clearValues[2] = {};
clearValues[0].color = { 0.0f, 0.0f, 0.0f, 1.0f };
clearValues[1].depthStencil = { 1.0f, 0 };

VkRenderPassBeginInfo renderPassBeginInfo = {};
renderPassBeginInfo.sType = VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO;
renderPassBeginInfo.renderPass = renderPass;
renderPassBeginInfo.framebuffer = framebuffer;
renderPassBeginInfo.renderArea.offset = { 0, 0 };
renderPassBeginInfo.renderArea.extent = context.swapchainImageExtent;
renderPassBeginInfo.clearValueCount = arraysize(clearValues);
renderPassBeginInfo.pClearValues = clearValues;
