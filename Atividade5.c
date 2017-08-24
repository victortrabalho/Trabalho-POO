#include<stdlib.h>
#include<stdio.h>
#include <locale.h>
void main()
{
    setlocale(LC_ALL,"Portuguese");
    float p,a,i ,juros,desconto,jurosP=0;
    int mes=0;
    printf("digite o valor do emprestimo: \n");
    scanf("%f",&p);
    printf("digite o valor a pagar por mês: \n");
    scanf("%f",&a);
    printf("digite o valor do juros : \n");
    scanf("%f",&i);

    while(p>0)
   {
     mes++;
    juros=p*(i/100);
    if(p+juros<a)
    {
      desconto=p;
      p=0;
    }
    else
    {
     desconto=a-juros;
     p=p-desconto;
    }
    jurosP=jurosP+juros;
    printf("mes %d \n",mes);
    printf(" valor do juros : %f \n",juros);
    printf("dinheiro aplicado no pagamento da divida: %f \n",desconto);
    printf("valor de juros ja pago ate o mes: %f \n",jurosP);
    printf("valor ainda a pagar: %f \n",p);

   }
   printf("\nnumero meses para pagar a divida %d \n",mes);
   printf("valor da ultima prestação foi %f ",desconto+juros);

}
