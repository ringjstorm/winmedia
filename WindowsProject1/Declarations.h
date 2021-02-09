#pragma once

// Forward declarations of functions included in this code module:
ATOM                MyRegisterClass(HINSTANCE hInstance);
BOOL                MyInitInstance(HINSTANCE, int);
LRESULT CALLBACK    MyWndProc(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK    MyAbout(HWND, UINT, WPARAM, LPARAM);

// TODO: move this elsewhere
void getMMIDevices(HWND);
void loadMMIDevices(HWND);
void getMMIDevicesListAndWriteToCombobox(HWND);
void getMMIDeviceSelectedDetailsAndWriteToEdit(HWND,UINT);