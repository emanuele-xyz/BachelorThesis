VexEntity light = {};
light.position = glm::vec3(2.0f, 1.0f, 3.0f);
light.rotation = glm::vec3(0.0f, 0.0f, 0.0f);
light.scale = 0.25f;
light.color = glm::vec3(1.0f, 1.0f, 1.0f);
light.vertexBuffer = &cubeVertexBuffer;
light.pipeline = &defaultPipeline;
light.uniformBuffer = CreateUniformBuffer(light.pipeline.descriptorSetLayout)
