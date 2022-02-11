VkVertexInputAttributeDescription positionAttributeDescription = {};
positionAttributeDescription.location = 0;
positionAttributeDescription.binding = 0;
positionAttributeDescription.format = VK_FORMAT_R32G32_SFLOAT;
positionAttributeDescription.offset = offsetof(Vertex, position);

VkVertexInputAttributeDescription colorAttributeDescription = {};
colorAttributeDescription.location = 1;
colorAttributeDescription.binding = 0;
colorAttributeDescription.format = VK_FORMAT_R32G32B32_SFLOAT;
colorAttributeDescription.offset = offsetof(Vertex, color);

VkVertexInputAttributeDescription attributeDescriptions[] =
{
    positionAttributeDescription,
    colorAttributeDescription,
};
