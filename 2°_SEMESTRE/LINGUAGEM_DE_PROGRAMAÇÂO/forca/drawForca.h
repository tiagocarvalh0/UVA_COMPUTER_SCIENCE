#include <stdio.h>

void forca(){
    printf("\u2581\u2581\u2581\u2581\u2581\n");
    printf("    \u250b\n");
}

void erroHEAD(){
    forca();
    printf("   \u256d \u256e\n");
    printf("   \u2570\u2530\u256f\n");
}

void erroBODY(){
    erroHEAD();
    printf("    \u257d\n    \u257d\n");
}

void erroLEFT_ARM(){
    erroHEAD();
    printf("   \u2571\u257d\n    \u257d\n");
}

void erroRIGHT_ARM(){
    erroHEAD();
    printf("   \u2571\u257d\u2572\n    \u257d\n");
}

void erroLEFT_LEG(){
    erroRIGHT_ARM();
    printf("   \u2571\n");
}

void erroRIGHT_LEG(){
    erroRIGHT_ARM();
    printf("   \u2571 \u2572\n");
    printf("\033[9;1H!!! GAME OVER !!!\n");
}

void limparTerminal() {
    system("clear");
    forca();
}
