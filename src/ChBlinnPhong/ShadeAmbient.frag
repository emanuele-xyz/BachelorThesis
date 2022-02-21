// Compute diffuse component
float ambientStrength = 0.1;
vec3 ambient = ambientStrength * inLightColor;

vec3 result = ambient * inObjectColor;
outFragmentColor = vec4(result, 1.0);
