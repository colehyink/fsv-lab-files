#include <stdio.h>

int main()
{
   int a = 1, b = 2, c = 3, d = 4;

   printf("Output: a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

   // %n specifier writes the number of characters printed out so far
   // into the memory location of the corresponding argument
   printf("Output: a = %d, b = %d, c = %d %n\n", a, b, c, &d);

   printf("Output: a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

   return 0;
}

