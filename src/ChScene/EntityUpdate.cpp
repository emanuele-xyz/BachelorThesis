Entity cube = ...;

// Update cube properties ...
cube.position = newPosition;
cube.rotation = newRotation;
cube.scale = newScale;

// Update uniform buffer data ...
cube.ubo.model = ComputeModelMatrix(&cube);
cube.ubo.view = ComputeViewMatrix(&camera);
cube.ubo.projection = ComputeProjectionMatrix(&camera);

// Update uniform buffer ...
// Use vkMapMemory, memcpy and vkUnmapMemory ...
