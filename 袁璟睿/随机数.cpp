#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
int main()
{ int i,number;
srand((unsigned) time(NULL)); //����srand����ÿ��rand��ֵ��һ�� 
for (i=0; i<50; i++)
{
number = rand() % 101; //����0-100�������
printf("%d ", number);
} 
return 0;
}

