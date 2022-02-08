VkClearValue clearValue = {};
{
    f32 red = 0.0f;
    f32 blue = std::abs(std::sin(time));
    f32 green = 0.0f;
    clearValue.color = { red, green, blue, 0.0f };
}
