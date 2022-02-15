UBO ubo = {};
ubo.model = model;
ubo.view = view;
ubo.projection = projection;

void* data = nullptr;
vkMapMemory(device, uniformBufferMemory, 0, sizeof(ubo), 0, &data);
memcpy(data, &ubo, sizeof(ubo));
vkUnmapMemory(device, uniformBufferMemory);
