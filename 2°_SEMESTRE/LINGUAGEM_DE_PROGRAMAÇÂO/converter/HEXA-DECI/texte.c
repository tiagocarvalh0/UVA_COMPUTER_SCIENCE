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
        if (binary[i] >= '0' && binary[i] <= '1') {
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
        if (octal[i] >= '0' && octal[i] <= '8') {
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

/*
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

/*
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  // Check if a filename was provided
  if (argc < 2) {
    printf("Error: no file provided\n");
    return 1;
  }

  // Open the file
  FILE *file = fopen(argv[1], "r");
  if (file == NULL) {
    printf("Error: unable to open file\n");
    return 1;
  }

  // Read decimal numbers from the file and convert them to hexadecimal
  int dec;
  while (fscanf(file, "%d", &dec) == 1) {
    printf("%X\n", dec);
  }

  // Close the file and return
  fclose(file);
  return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  // Prompt the user to enter a number and its base
  int number, base, new_base;
  printf("Enter a number: ");
  scanf("%d", &number);
  printf("Enter the base of the number (2-36): ");
  scanf("%d", &base);

  // Check if the base is valid (between 2 and 36)
  if (base < 2 || base > 36) {
    printf("Error: invalid base\n");
    return 1;
  }

  // Prompt the user to enter the desired base to convert to
  printf("Enter the desired base to convert to (2-36): ");
  scanf("%d", &new_base);

  // Check if the desired base is valid (between 2 and 36)
  if (new_base < 2 || new_base > 36) {
    printf("Error: invalid base\n");
    return 1;
  }

  // Convert the number to base 10
  int dec = 0, i = 0;
  while (number > 0) {
    int digit = number % 10;
    dec += digit * pow(base, i);
    i++;
    number /= 10;
  }

  // Convert the number from base 10 to the desired base
  int converted = 0, j = 1;
  while (dec > 0) {
    int digit = dec % new_base;
    converted += digit * j;
    j *= 10;
    dec /= new_base;
  }

  // Print the converted number
  printf("The converted number is: %d\n", converted);

  return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// Function to convert from one base to another
long long convertToBase(long long num, int base)
{
    long long res = 0;
    int i = 0;

    // Convert the given number to the desired base
    while (num > 0)
    {
        res += num % base * pow(10, i);
        num /= base;
        i++;
    }

    return res;
}

// Function to convert a number from one base to another
long long convertFromBase(long long num, int base)
{
    long long res = 0;
    int i = 0;

    // Convert the given number from the given base to decimal
    while (num > 0)
    {
        res += num % 10 * pow(base, i);
        num /= 10;
        i++;
    }

    return res;
}
/*
int main()
{
    long long num;
    int fromBase, toBase;

    // Read the number and the bases from the user
    printf("Enter a number and the base it belongs to (separated by space): ");
    scanf("%lld %d", &num, &fromBase);

    printf("Enter the base to convert to: ");
    scanf("%d", &toBase);

    // Convert the number to decimal
    long long decimal = convertFromBase(num, fromBase);

    // Convert the decimal number to the desired base
    long long result = convertToBase(decimal, toBase);

    printf("The number in base %d is %lld\n", toBase, result);

    return 0;
}*/






