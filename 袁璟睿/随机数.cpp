#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
int main()
{ int i,number;
srand((unsigned) time(NULL)); //用了srand才能每次rand的值不一样 
for (i=0; i<50; i++)
{
number = rand() % 101; //产生0-100的随机数
printf("%d ", number);
} 
return 0;
}

