#include <stdio.h>
/**
 *main - cause an infinite loop
 *
 *Return: 0
 */
int main(void)
{
int i;
printf("infinite loop incoming :\n");
i = 0;
/*
 *while (i < 10)
 *{
 *Infinite loop - No increase of variables
 *putchar(i);
}
*/
printf("infinite loop avoided! \\o/\n");
return (0);
}
