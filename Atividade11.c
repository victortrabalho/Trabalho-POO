#include<stdlib.h>
#include<stdio.h>
#include<math.h>
void main ()
{
    int nF,i,Total=0,cont=0;
    printf("Digite o numero de funcionarios: ");
    scanf("%d",&nF);
    float salarios[nF];
    for(i=0;i<nF;i++)
    {
        printf("digite o salario do funonario %d ",i+1);
        scanf("%f",&salarios[i]);
        Total=Total+salarios[i];
    }
    for(i=0;i<nF;i++)
    {
        if(salarios[i]>(Total/nF))
            cont++;
    }
    printf("numero de pessoas que recebem acima da media %d",cont);
}
