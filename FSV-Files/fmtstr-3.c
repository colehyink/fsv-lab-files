#include <stdio.h>

int main()
{
   int a = 1, b = 2, c = 3;
   char *d = "Bob Smith";

   printf("Output: a = %d, b = %d, c = %d, d = %s\n", a, b, c, d);

   //printf("%d %d %d\n");

   //printf("%x %x %x\n");

   //printf("%f %f %f\n");
   
   //printf("%s %s %s\n");

   //printf("%s %s %s %s %s %s %s %s %s %s %s %s\n");

   /*
   char input[100];
   printf("Please enter a string: ");
   fgets(input, sizeof(input), stdin);
   printf(input); 	// <-- security vulnerability: all or part of format string
   					// for printf() comes from user input
   */

   return 0;
}

