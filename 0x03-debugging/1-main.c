#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;

<<<<<<< HEAD
        while (i < 10)
=======
       /* while (i < 10)*/
>>>>>>> ed6f8a1d34563c7085c94179a0b58f7e5a731f95
        {
                putchar(i);
        }

        printf("Infinite loop avoided! \\o/\n");

        return (0);
}
