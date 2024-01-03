#include <stdio.h>

// Function to check if a number is a jumping number
int isJumpingNumber(int num) 
{
    int prevDigit = -1;
    while (num > 0) 
    {
        int currentDigit = num % 10;
        if (prevDigit != -1 && abs(prevDigit - currentDigit) != 1) 
        {
            return 0; // Not a jumping number
        }
        prevDigit = currentDigit;
        num /= 10;
    }
    return 1; // It is a jumping number
}

int main() 
{
    printf("Largest three-digit jumping numbers:\n");

    // Loop through three-digit numbers in reverse order
    for (int i = 999; i >= 100; i--)
    {
        if (isJumpingNumber(i)) 
        {
            printf("%d\n", i);
            break; // Print the first jumping number found and exit the loop
        }
    }

    return 0;
}
