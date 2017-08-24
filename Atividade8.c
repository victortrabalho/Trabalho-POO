#include<stdlib.h>
#include<stdio.h>
int primo(int p)
{
    int i,cont=0;

    for(i=1;i<=p;i++)
    {
        if(p%i==0)
            cont++;
    }
    if(cont==2)
        return 1;
    else
        return 0;
}
void sequeciasdePrimos(int p)
{
    int i=1,cont=0;
    while(cont<p)
    {
        if(primo(i))
        {
            printf("%d ",i);
            cont++;
        }
        i++;
    }

}
void main()
{
    int n,i,q;
    printf("digite um numero : ");
    scanf("%d",&n);
    printf("digite quantos numeros primos quer ver :");
    scanf("%d",&q);
    i=primo(n);
    printf("Sequencia de primos\n");
    sequeciasdePrimos(q);
    if(i)
    printf("\n\n %d e primo ",n);
    else
    printf("\n\n%d nao e primo",n);
}
