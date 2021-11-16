#include <stdio.h>

int main()
{
   int id = 100, age = 25;
   char *name = "Bob Smith";

   // Correct use of printf():
   // 1. printf (and several other functions in C) takes a variable number of arguments
   // 2. Number of format specifiers in the format string match the
   //    the number of optional arguments given
   // 3. Format string is a string literal (not mixed in with any user input)
   printf("ID: %d, Name: %s, Age: %d\n", id, name, age);

   return 0;
}

