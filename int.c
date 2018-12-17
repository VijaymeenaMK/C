#include<stdio.h>
int main()
{
int n1,n2,i;
scanf("%d",&n1);
scanf("%d",&n2);
for(i=n1+1;i<=n2-1;i++)
{
if(i%2!=0)
{
printf("%d",i);
}
}
return 0;
}
