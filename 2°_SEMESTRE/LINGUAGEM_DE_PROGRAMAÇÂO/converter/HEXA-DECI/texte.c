/*
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#define TRUE 1
#define FALSE 0

int checarParametro();
void imprimirNumDeci();

    char hex[100];  // hexadecimal number (string)
    int len, dec = 0, base = 1, OK_CHECK = 0;

int main() {


    // Prompt user to enter a hexadecimal number
    printf("Enter a hexadecimal number: ");
    scanf("%s", hex);

    // Calculate the length of the hexadecimal number
    len = strlen(hex);

    if(checarParametro())
        imprimirNumDeci();
        

}
int checarParametro(){

    for(int i = len - 1; i >= 0; i--) {
    hex[i] = toupper(hex[i]);

    if (hex[i] >= '0' && hex[i] <= '9') 
        OK_CHECK++;
    else if (hex[i] >= 'A' && hex[i] <= 'F') 
        OK_CHECK++;
    }

    if(OK_CHECK == len) {
        OK_CHECK = 0;
        return TRUE;
    }
    else {  
        OK_CHECK = 0;
        return FALSE;
    }
}

void imprimirNumDeci() {

    for(int i = len - 1; i >= 0; i--) {
    hex[i] = toupper(hex[i]);
    if (hex[i] >= '0' && hex[i] <= '9') {
      dec += (hex[i] - 48) * base;
      base *= 16;
    }
    else if (hex[i] >= 'A' && hex[i] <= 'F') {
      dec += (hex[i] - 55) * base;
      base *= 16;
    }
  }
  printf("The decimal equivalent of %s is %d", hex, dec);
}*/

/*
#include <stdio.h>
#include <math.h>

int main(void) {
    char binary[17];
    int decimal = 0;
    int i = 0;

    printf("Enter a binary number: ");
    scanf("%s", binary);

    int len = strlen(binary);

    for (i = 0; binary[i] != '\0'; i++) {
        decimal += (binary[i] - 48) * pow(2, len - i - 1);
    }

    printf("Binary number: %s\n", binary);
    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}
*/

/*
#include <stdio.h>
#include <math.h>

int main(void) {
    char octal[17];
    int decimal = 0;
    int i = 0;

    printf("Enter an octal number: ");
    scanf("%s", octal);

    int len = strlen(octal);

    for (i = 0; octal[i] != '\0'; i++) {
        decimal += (octal[i] - 48) * pow(8, len - i - 1);
    }

    printf("Octal number: %s\n", octal);
    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}
*/

/*
#include <stdio.h>
#include <math.h>

int main(void) {
    char hex[17];
    int decimal = 0;
    int i = 0;

    printf("Enter a hexadecimal number: ");
    scanf("%s", hex);

    int len = strlen(hex);

    for (i = 0; hex[i] != '\0'; i++) {
        if (hex[i] >= '0' && hex[i] <= '9') {
            decimal += (hex[i] - 48) * pow(16, len - i - 1);
        } else if (hex[i] >= 'A' && hex[i] <= 'F') {
            decimal += (hex[i] - 55) * pow(16, len - i - 1);
        } else if (hex[i] >= 'a' && hex[i] <= 'f') {
            decimal += (hex[i] - 87) * pow(16, len - i - 1);
        }
    }

    printf("Hexadecimal number: %s\n", hex);
    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}
*/



/*
#include <stdio.h>
#include <stdlib.h>

// Function to convert decimal to binary
void decimalToBinary(int n)
{
    int binaryNum[32];

    // Counter for binary array
    int i = 0;
    while (n > 0) {

        // Store remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    // Print binary array in reverse order
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binaryNum[j]);
}

// Driver program to test above function
int main()
{
    int n = 17;
    decimalToBinary(n);
    return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>

// Function to convert decimal to octal
void decimalToOctal(int n)
{
    int octalNum[100];

    // Counter for octal array
    int i = 0;
    while (n != 0) {

        // Store remainder in octal array
        octalNum[i] = n % 8;
        n = n / 8;
        i++;
    }

    // Print octal array in reverse order
    for (int j = i - 1; j >= 0; j--)
        printf("%d", octalNum[j]);
}

// Driver program to test above function
int main()
{
    int n = 17;
    decimalToOctal(n);
    return 0;
}
*/


#include <stdio.h>
#include <stdlib.h>

// Function to convert decimal to hexadecimal
void decimalToHexadecimal(int n)
{
    char hexaDeciNum[100];

    // Counter for hexadecimal array
    int i = 0;
    while (n != 0) {

        // Temporary variable to store remainder
        int temp  = 0;

        // Store remainder in temp variable.
        temp = n % 16;

        // To convert integer into character
        if (temp < 10) {
            hexaDeciNum[i] = temp + 48;
            i++;
        } else {
            hexaDeciNum[i] = temp + 55;
            i++;
        }

        n = n/16;
    }

    // Print hexadecimal number array in reverse order
    for (int j=i-1; j>=0; j--)
        printf("%c", hexaDeciNum[j]);
}

// Driver program to test above function
int main()
{
    long int n = 1000000000;
    //scanf("%d", &n);
    decimalToHexadecimal(n);
    printf("\n");
    return 0;
}



