#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
  char hex[100];  // hexadecimal number (string)
  int len, dec = 0, base = 1;

  // Prompt user to enter a hexadecimal number
  printf("Enter a hexadecimal number: ");
  scanf("%s", hex);

  // Calculate the length of the hexadecimal number
  len = strlen(hex);

  // Convert the hexadecimal number to a decimal number
  for(int i = len - 1; i >= 0; i--)
  {
    if (hex[i] >= '0' && hex[i] <= '9')
    {
      dec += (hex[i] - 48) * base;
      base *= 16;
    }
    else if (hex[i] >= 'A' && hex[i] <= 'F')
    {
      dec += (hex[i] - 55) * base;
      base *= 16;
    }
  }

  // Print the decimal equivalent of the hexadecimal number
  printf("The decimal equivalent of %s is %d", hex, dec);

  return 0;
}

