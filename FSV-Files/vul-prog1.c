/* vul-prog1.c */

#include<stdio.h>
#include<stdlib.h>

#define SECRET1 0x44	// 68 in decimal
#define SECRET2 0x55	// 85 in decimal

int main(int argc, char *argv[])
{
    char user_input[100];
    int *secret;
    int int_input;
    int a, b, c, d; /* other variables, not used. */
    
    /* The secret value is stored on the heap */
    secret = (int *) malloc(2 * sizeof(int));
    
    /* getting the secret */
    secret[0] = SECRET1;
    secret[1] = SECRET2;
    
    printf("The variable secret's address is 0x%08x (on stack)\n", (unsigned int) &secret);
    printf("The variable secret's value is 0x%08x (on heap)\n", (unsigned int) secret);
    printf("secret[0]'s address is 0x%08x (on heap)\n", (unsigned int) &secret[0]);
    printf("secret[1]'s address is 0x%08x (on heap)\n", (unsigned int) &secret[1]);
    
    printf("Enter a decimal integer: ");
    scanf("%d", &int_input);  /* getting an integer from user */
    printf("Enter a string: ");
    scanf("%s", user_input); /* getting a string from user */
    
    /* vulnerable place */
    printf(user_input);
    printf("\n");
    
    /* Verify whether your attack is successful */
    printf("The original secrets: 0x%x -- 0x%x\n", SECRET1, SECRET2);
    printf("The new secrets:      0x%x -- 0x%x\n", secret[0], secret[1]);

    return 0;
}
