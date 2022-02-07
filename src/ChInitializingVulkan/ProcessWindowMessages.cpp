MSG message = {};
while (PeekMessage(&message, 0, 0, 0, PM_REMOVE))
{
    switch (message.message)
    {
    case WM_QUIT:
    {
        isApplicationRunning = false;
    } break;

    default:
    {
        TranslateMessage(&message);
        DispatchMessageA(&message);
    } break;
    }
}
