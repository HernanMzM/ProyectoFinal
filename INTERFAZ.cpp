#include <windows.h>
#define bt1 101
#define bt2 102
#define bt3 103

LRESULT CALLBACK WindowProcedure(HWND, UINT, WPARAM, LPARAM);

char NombreClase[] = "Estilos";
HWND ventana1;
HWND ventana2;
HWND button1;
HWND button2;
HWND button3;
HWND staticText;  // Control de texto estático
MSG mensajecomunica;
WNDCLASSEX estilo1;

int WINAPI WinMain(HINSTANCE hThisInstance, HINSTANCE hPrevInstance, LPSTR lpszArgument, int nCmdShow) {
    estilo1.hInstance = hThisInstance;
    estilo1.lpszClassName = NombreClase;
    estilo1.lpfnWndProc = WindowProcedure;
    estilo1.style = CS_DBLCLKS;
    estilo1.cbSize = sizeof(WNDCLASSEX);
    estilo1.hIcon = LoadIcon(NULL, IDI_QUESTION);
    estilo1.hIconSm = LoadIcon(NULL, IDI_INFORMATION);
    estilo1.hCursor = LoadCursor(NULL, IDC_HAND);
    estilo1.lpszMenuName = NULL;
    estilo1.cbClsExtra = 0;
    estilo1.cbWndExtra = 0;
    estilo1.hbrBackground = (HBRUSH)COLOR_WINDOW;

    if (!RegisterClassEx(&estilo1))
        return 0;

    ventana1 = CreateWindowEx(
        0,
        NombreClase,
        ("INGRESAR AL SISTEMA SIVA"),
        WS_OVERLAPPEDWINDOW | WS_BORDER,
        250,
        0,
        888,
        788,
        HWND_DESKTOP,
        NULL,
        hThisInstance,
        NULL
    );

    ventana2 = CreateWindowEx(
        0,
        NombreClase,
        ("MARCA DE ROPA"),
        WS_OVERLAPPEDWINDOW | WS_BORDER,
        250,
        50,
        888,
        788,
        HWND_DESKTOP,
        NULL,
        hThisInstance,
        NULL
    );

    ShowWindow(ventana1, nCmdShow);
    while (GetMessage(&mensajecomunica, NULL, 0, 0)) {
        TranslateMessage(&mensajecomunica);
        DispatchMessage(&mensajecomunica);
    }

    return mensajecomunica.wParam;
}

LRESULT CALLBACK WindowProcedure(HWND otro, UINT mensajecomunica, WPARAM wParam, LPARAM lParam) {
    switch (mensajecomunica) {
        case WM_CLOSE:
            if (otro == ventana2) {
                ShowWindow(ventana2, SW_HIDE);
            } else if (otro == ventana1) {
                PostQuitMessage(0);
            }
            break;
        case WM_CREATE:
            button1 = CreateWindowEx(0, "button", "Siguiente", WS_VISIBLE | WS_CHILD, 500, 400, 100, 30, ventana1, (HMENU)bt1, 0, 0);
            button2 = CreateWindowEx(0, "button", "Salir", WS_VISIBLE | WS_CHILD, 10, 60, 80, 40, ventana1, (HMENU)bt2, 0, 0);
            button3 = CreateWindowEx(0, "button", "Accion", WS_VISIBLE | WS_CHILD | WS_DISABLED, 90, 10, 80, 40, ventana1, (HMENU)bt1, 0, 0);
            
            // Creando el letrero
            staticText = CreateWindowEx(
                0, "STATIC", "SIVA",
                WS_VISIBLE | WS_CHILD | SS_CENTER,
                100, 100, 200, 30,
                ventana1, NULL, GetModuleHandle(NULL), NULL
            );
            break;
        case WM_COMMAND:
            if (wParam == bt2) {
                PostQuitMessage(0);
            } else if (wParam == bt1) {
                ShowWindow(ventana2, SW_SHOW);
                ShowWindow(ventana1, SW_HIDE);
            }
            break;
        default:
            return DefWindowProc(otro, mensajecomunica, wParam, lParam);
    }
    return 0;
}