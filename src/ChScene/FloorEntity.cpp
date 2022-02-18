Entity floor = {};
floor.position = glm::vec3(0.0f, 0.0f, 0.0f);
floor.rotation = glm::vec3(0.0f, 0.0f, 0.0f);
floor.scale = 10.0f;
floor.color = glm::vec3(0.0f, 0.0f, 1.0f);
floor.vertexBuffer = &quadVertexBuffer;
floor.pipeline = &defaultPipeline;
floor.uniformBuffer = CreateUniformBuffer(floor.pipeline.descriptorSetLayout);
