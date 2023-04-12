#include<stdio.h>
#include<string.h>
int main()
{
char *student[4]={"gita","seema","raj","sonal"};
int i;
printf("name of the students=");
for(i=0;i<4;i++)
{
printf("\n %s \n",student[i]);
}
return 0;
}
