#version 450

layout(location = 0) in vec3 inPosition;

layout(location = 0) out vec3 outColor;

layout(set = 0, binding = 0) uniform UBO
{
    mat4 model;
    mat4 view;
    mat4 projection;
    vec3 color;
} ubo;

void main()
{
    gl_Position = ubo.projection * ubo.view * ubo.model * vec4(inPosition, 1.0);
    outColor = ubo.color;
}
