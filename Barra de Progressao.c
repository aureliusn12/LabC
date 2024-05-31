#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
int i,j,espacosAntes = 45;
void BarraProgressao(){
    printf("+========================================================================================================+\n");
    printf("|A   G   U   A   R   D   E    O    S  I   S   T   E   M   A     I   N   I   C   I   A   L   I   Z   A   R|\n");
    printf("+========================================================================================================+\n");
    for (i = 0; i <= 100; i++)
    {
        printf("\xDB");
        system("color A");
        Sleep(100);
    }
    for (j = 0; j < 100; j++)
    {
        printf("\r%*d %%", espacosAntes,j);
        fflush(stdout);
        Sleep(100);
    }
}
int main(){
    BarraProgressao();
}