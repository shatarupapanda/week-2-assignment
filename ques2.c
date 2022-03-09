#include<stdio.h>
int main()
{
    int n, e=0, o=0, i;
    printf("Enter 10 numbers:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d", &n);
    
        if(n%2==0)
        {
            e=e+n;
        }
        else
        {
            o=o+n;
        }
    }
    printf("Sum of all even numbers: %d \n", e);
    printf("Sum of all odd numers: %d", o);
  return 0;
}