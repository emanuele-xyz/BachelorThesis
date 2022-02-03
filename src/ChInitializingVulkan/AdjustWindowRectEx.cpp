RECT windowDimensions = { 0, 0, clientWidth, clientHeight };
AdjustWindowRectEx(&windowDimensions, windowStyle, false, windowExtendedStyle);
i32 windowWidth = windowDimensions.right - windowDimensions.left;
i32 windowHeight = windowDimensions.bottom - windowDimensions.top;
