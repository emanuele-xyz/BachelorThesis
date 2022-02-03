DWORD windowStyle = (WS_OVERLAPPEDWINDOW | WS_VISIBLE | WS_CAPTION) & (~WS_THICKFRAME) & (~WS_MINIMIZEBOX) & (~WS_MAXIMIZEBOX);
DWORD windowExtendedStyle = 0;

HWND handle = CreateWindowEx(
    windowExtendedStyle,
    WINDOW_CLASS_NAME,
    name,
    windowStyle,
    CW_USEDEFAULT, CW_USEDEFAULT,
    windowWidth, windowHeight,
    0,
    0,
    GetModuleHandle(0),
    0
);
