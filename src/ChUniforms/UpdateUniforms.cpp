model = glm::rotate(glm::mat4(1.0f), timeSinceStart * glm::radians(90.0f), glm::vec3(0.0f, 0.0f, 1.0f));
view = glm::lookAt(glm::vec3(2.0f, 2.0f, 2.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 1.0f));
f32 aspect = (f32)(swapchainImageExtent.width) / (f32)(swapchainImageExtent.height);
projection = glm::perspective(glm::radians(45.0f), aspect, 0.1f, 10.0f);

// Perspective matrix correction (only for glm)
ubo.projection[1][1] *= -1;
