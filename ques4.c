#include<stdio.h>
int main()
{
 int a1=0,a2=1,b,i,n;
 printf("enter the number of terms ");
 scanf("%d", &n);
 printf("Fibonacci series : %d,%d,",a1,a2);
 for(i=3;i<=n;i++)
 {
   a1=a2;
   a2=b;
   b=a1+a2;
   printf("%d,",b);
 }
  return 0;
}