#include "stdio.h"
/**
* main - entry point
*
* Return: void
*/

int main(void)

{
int p = 100;
int i;


i = 1;
while (i <= p)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
}

else if (i % 5 == 0)
{
if (i < p)
printf("Buzz")
}

else
{
printf("%1", i);
}

i++;


}
printf("\n")
return (0);
}
