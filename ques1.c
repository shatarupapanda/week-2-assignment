#include<stdio.h>
#include<string.h>
int main()
{
 int l,k,i,m;
 char a1[50],a2[50],a3[50];
 printf("enter first string ");
 scanf("%d", &a1);
 printf("enter the second string");
 scanf("%d",&a2);
 strcat(a1,a2);
 l=strlen(a1);
 k=0;
 m=l-1;
 for(i=k;i<m;i++)
 { 
   a3[i]=a1[i];
   a1[i]=a1[m];
   a1[m]=a3[i];
   m--;
  
  }
  printf("%s",a1);
  return 0;
}