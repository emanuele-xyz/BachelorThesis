VexEntity cube = {};
cube.position = glm::vec3(0.0f, 0.0f, 0.5f);
cube.rotation = glm::vec3(0.0f, 0.0f, VEX_PI / 4.0f);
cube.scale = 1.0f;
cube.color = glm::vec3(0.0f, 1.0f, 0.0f);
cube.vertexBuffer = &cubeVertexBuffer;
cube.pipeline = &defaultPipeline;
cube.uniformBuffer = CreateUniformBuffer(cube.pipeline.descriptorSetLayout);
