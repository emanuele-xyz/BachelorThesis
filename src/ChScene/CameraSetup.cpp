Camera camera = {};
camera.position = glm::vec3(0.0f, 8.0f, 8.0f);
camera.target = cube.position;
camera.up = glm::vec3(0.0f, 0.0f, 1.0f);
camera.fov = glm::radians(45.0f);
camera.aspect = (f32)(WINDOW_WIDTH) / (f32)(WINDOW_HEIGHT);
camera.nearPlane = 0.01f;
camera.farPlane = 1000.0f;
