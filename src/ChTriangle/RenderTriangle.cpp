// begin render pass ...

vkCmdBindPipeline(commandBuffer, VK_PIPELINE_BIND_POINT_GRAPHICS, pipeline);
vkCmdDraw(
    commandBuffer,
    3, // number of vertices to draw
    1, // number of instances to draw (we don't use instancing)
    0, // index of the first vertex to draw
    0  // instance ID of the first instance to draw
);

// end render pass ...
