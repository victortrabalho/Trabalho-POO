#include<stdlib.h>
#include<stdio.h>
#include<math.h>
double fatorial(int n)
{
    if(n==1)
        return 1;
    else
        return n*fatorial(n-1);
}
double cossen(double n)
{ double resposta=1;
  int i,sinal=-1;
    for(i=1;i<10;i++)
    {   sinal=pow(sinal,i);
        resposta=resposta+(pow(n,2*i)/fatorial(i*2))*sinal;
        sinal=-1;
    }
    return resposta;
}
void main()
{
    float a,d,DHOR;
    printf("digite o angulo : ");
    scanf("%f",&a);
    a=(a*M_PI)/180;
    printf("digite a distancia :");
    scanf("%f",&d);
    DHOR=d*cossen(a);
    printf("altura %f , distancia horisontal %f"
    ,sqrt(pow(d,2)-pow(DHOR,2)),DHOR);
}
