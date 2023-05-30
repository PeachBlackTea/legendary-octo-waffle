#include <stdio.h>
#include <windows.h>

void typeString(const char* str) {
    while (*str) {
       
        keybd_event(*str, 0, 0, 0);

        
        keybd_event(*str, 0, KEYEVENTF_KEYUP, 0);

        
        str++;
    }
}

int main() {
   
    const char* ID = "your_id";
    const char* password = "your_password";

    
    Sleep(2000);

    
    typeString(ID);

  
    keybd_event(VK_TAB, 0, 0, 0);
    keybd_event(VK_TAB, 0, KEYEVENTF_KEYUP, 0);

   
    typeString(password);

    
    keybd_event(VK_RETURN, 0, 0, 0);
    keybd_event(VK_RETURN, 0, KEYEVENTF_KEYUP, 0);

    return 0;
}
