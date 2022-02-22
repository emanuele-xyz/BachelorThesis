vec3 result = (ambient + diffuse + specular) * inObjectColor;
outFragmentColor = vec4(result , 1.0);
