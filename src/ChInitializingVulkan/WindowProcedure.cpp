static LRESULT CALLBACK WindowProcedure(HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam)
{
    LRESULT result = 0;
    switch (msg)
    {
    case WM_QUIT:
    case WM_CLOSE:
    case WM_DESTROY: { PostQuitMessage(0); } break;
    default: { result = DefWindowProcA(hwnd, msg, wparam, lparam); } break;
    };

    return result;
}
