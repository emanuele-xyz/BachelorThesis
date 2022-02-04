if ((formatCount == 1) && (formats[0].format == VK_FORMAT_UNDEFINED))
{
    // There is no preferred surface format
    return { VK_FORMAT_R8G8B8A8_UNORM, VK_COLORSPACE_SRGB_NONLINEAR_KHR };
}
else
{
    // We have to pick a format from the list
    // We search for a format that we like
    for (u32 i = 0; i < formatCount; i++)
    {
        if (formats[i].format == VK_FORMAT_R8G8B8A8_UNORM)
        {
            return formats[i];
        }
    }

    // We haven't found the format(s) that we were looking for
    // Pick the first format
    return formats[0];
}
