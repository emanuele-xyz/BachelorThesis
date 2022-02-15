// Begin render pass ...

// Bind pipeline state object ...
// Bind vertex buffer ...

vkCmdBindDescriptorSets
(
    commandBuffer,
    VK_PIPELINE_BIND_POINT_GRAPHICS,
    pipelineLayout,
    0,
    1,
    &pipelineDescriptorSet,
    0,
    nullptr
);

// Draw ...

// End render pass ...
