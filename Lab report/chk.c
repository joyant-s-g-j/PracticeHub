#include <stdio.h>
int main()
{
int i;
i = 4;
printf("%d\n", i);
printf("%d\n", i++ ); // post increment
printf("%d\n\n", i);
i = 4;
printf("%d\n", i);
printf("%d\n", ++i); //preincrement
printf("%d\n", i);
return 0;
}