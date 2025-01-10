//add two number with function
#include<stdio.h>
void main ()
{
int i=1, n,sum=0;
printf("entre the limit \n");
scanf("%d",&n);
while(i<=n)
{
sum=sum+i;
i++;
}
printf("sum=%d",sum);
}
