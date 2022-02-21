// Compute diffuse component
vec3 normal = normalize(inNormal);
vec3 lightDirection = normalize(inLightPosition - inFragmentPosition);
float diffuseImpact = max(dot(normal, lightDirection), 0.0);
vec3 diffuse = diffuseImpact * inLightColor;

vec3 result = diffuse * inObjectColor;
outFragmentColor = vec4(result, 1.0);
