#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
void main()
{
    setlocale(LC_ALL,"Portuguese");
    int n;
    float a;
    printf("digite n :");
    scanf("%d",&n);
    if(sqrt(5*pow(n,2)-4)==(int)sqrt(5*pow(n,2)-4)) //<-- função para o n (o numero dela na sequencia) impar
        printf("faz parte");
    else if(sqrt(5*pow(n,2)+4)==(int)sqrt(5*pow(n,2)+4)) // <-- função para o n(o numero dela na sequencia) par
        printf("faz parte");
    else
        printf("não faz parte");
}
