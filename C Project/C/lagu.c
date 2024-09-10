#include <stdio.h>
#include <windows.h> 

void hide_cursor(){
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO info;
    info.dwSize = 100; 
    info.bVisible = FALSE; 
    SetConsoleCursorInfo(consoleHandle, &info);
}

void print_with_delay(const char *text, int delay){
    while(*text){
        printf("%c", *text);
        fflush(stdout); 
        Sleep(delay); 
        text++;
    }
    printf("\n");
}

int main(){
    hide_cursor(); 

    print_with_delay("bawa dia kembali", 200);
    Sleep(4200);
    print_with_delay("selalu", 200);
    Sleep(600);
    print_with_delay("dengarlah doaku", 180);
    Sleep(800);
    print_with_delay("yang tak pernah meminta", 150);
    print_with_delay("bawa dia kembali", 170);
    print_with_delay("bersama walau sesaat", 160);
    Sleep(5420);
    print_with_delay("walau hanya sesaat", 300);

    return 0;
}



