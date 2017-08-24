#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i=0,n,Conv;
   float resultado=0;
   printf("digite um numero: ");
   scanf("%d",&n);
   while(n>0)
  {
       Conv=n%2;
       n=n/2;
       resultado=Conv*pow(10,i)+resultado;
       i++;
  }
  printf("%.0f",resultado);
}
