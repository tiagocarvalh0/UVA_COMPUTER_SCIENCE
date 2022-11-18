#include <stdio.h>

void forca(){
    printf("_____\n");
    printf("   |\n");
}

void erroHEAD(){
    forca();
    printf("  (_)\n");
}

void erroBODY(){
    forca();
    printf("  (_)\n");
    printf("   |\n");
    printf("   |\n");
}

void erroLEFT_ARM(){
    forca();
    printf("  (_)\n");
    printf("  /|\n");
    printf("   |\n");
}

void erroRIGHT_ARM(){
    forca();
    printf("  (_)\n");
    printf("  /|\\\n");
    printf("   |\n");
}

void erroLEFT_LEG(){
    forca();
    printf("  (_)\n");
    printf("  /|\\\n");
    printf("   |\n");
    printf("  / \n");
}

void erroRIGHT_LEG(){
    forca();
    printf("  (_)\n");
    printf("  /|\\\n");
    printf("   |\n");
    printf("  / \\\n");
    printf("!!!GAME OVER!!!\n");
}

void limparTerminal() {
    system("clear");
    forca();
}
