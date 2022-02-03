WNDCLASSEX windowClass = {};
windowClass.cbSize = sizeof(windowClass);
windowClass.style = CS_HREDRAW | CS_VREDRAW;
windowClass.lpfnWndProc = WindowProcedure;
windowClass.hInstance = GetModuleHandle(0);
windowClass.hIcon = LoadIcon(0, IDI_APPLICATION);
windowClass.hCursor = LoadCursor(0, IDC_ARROW);
windowClass.lpszClassName = WINDOW_CLASS_NAME;
windowClass.hIconSm = LoadIcon(0, IDI_APPLICATION);

RegisterClassEx(&windowClass);
