float specularStrength = 0.5;
float shininess = 64;
vec3 cameraDirection = normalize(inCameraPosition - inFragmentPosition);
vec3 halfwayDirection = normalize(lightDirection + cameraDirection);
float specularImpact = pow(max(dot(normal, halfwayDirection), 0.0), shininess);
vec3 specular = specularImpact * inLightColor;

vec3 result = specular * inObjectColor;
outFragmentColor = vec4(result, 1.0);
