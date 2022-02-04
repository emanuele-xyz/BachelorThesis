for (u32 i = 0; i < modeCount; i++)
{
    if (modes[i] == VK_PRESENT_MODE_MAILBOX_KHR)
    {
        return VK_PRESENT_MODE_MAILBOX_KHR;
    }
}

// Use FIFO since it's always supported (spec)
return VK_PRESENT_MODE_FIFO_KHR;
