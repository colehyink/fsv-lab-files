#include <stdio.h>

int main()
{
   int id = 100, age = 25;
   char *name = "Bob Smith";

   // Missing optional arguments - number of format specifiers in the
   // format string is more than the number of optional arguments given.
   // As a result, the internal pointer used to fetch the optional arguments
   // crosses the stack frame boundary of printf() into the stack frame
   // of caller main(). Output is unpredictable value for Age field,
   // but does not pose a severe threat (programmer mistake?)
   printf("ID: %d, Name: %s, Age: %d\n", id, name);

   return 0;
}

