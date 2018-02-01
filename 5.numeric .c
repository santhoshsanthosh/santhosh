#include<stdio.h>
#include<conio.h>
int main()
{
  int a,b,c,i,count=0;
  printf("enter the number");
  scanf("%d",&n);
  while(n!=0)
   {
     a=n%10;
     b=a+b;
     c=n/10;
     count++;
   }
    printf("the total no digits is %d",count);
 }
