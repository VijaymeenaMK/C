#include<stdio.h>
void main()
{
  int n,a[100],i,j;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    int count=0;
    for(j=0;j<n;j++)
    {
      if(a[i]==a[j] && i!=j)
      {
        count=count+1;
      }
    }
    if(count==0)
    {
    printf("%d",a[i]);
    }
  }
  
}
