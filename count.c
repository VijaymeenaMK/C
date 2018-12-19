#include<stdio.h>
void main()
{
  char a[100],k;
  int i,j,max=0,count=0;
  scanf("%s",&a);
  for(i=0;a[i]!='\0';i++)
  {
    for(j=i+1;a[j]!='\0';j++)
    {
      if(a[i]==a[j])
      {
        count=count+1;
      }
    }
    if(count>max)
    {
      k=a[i];
      max=count;
    }
  }
  printf("%c",k);
  }
