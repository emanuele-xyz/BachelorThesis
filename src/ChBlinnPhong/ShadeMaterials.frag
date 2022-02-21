// Compute ambient lighting
vec3 ambient = inLightColor * inObjectMaterialAmbient;

// Compute diffuse lighting
vec3 normal = normalize(inNormal);
vec3 lightDirection = normalize(inLightPosition - inFragmentPosition);
float diffuseImpact = max(dot(normal, lightDirection), 0.0);
vec3 diffuse = inLightColor * (diffuseImpact * inObjectMaterialDiffuse);

// Compute specular lighting
bool blinn = true;
float blinnShininessScale = 3;
vec3 cameraDirection = normalize(inCameraPosition - inFragmentPosition);
vec3 halfwayDirection = normalize(lightDirection + cameraDirection);
float specularImpact = pow(max(dot(normal, halfwayDirection), 0.0), inObjectMaterialShininess.x * blinnShininessScale);
vec3 specular = inLightColor * (specularImpact * inObjectMaterialSpecular);

// Combine ambient, diffuse and specular lighting
vec3 result = ambient + diffuse + specular;
outFragmentColor = vec4(result, 1.0);
