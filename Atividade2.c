#include <stdio.h>
#include <stdlib.h>
int main()
{
   float salario,salarioR,Total,st,str;
   char nome[100];
        printf("digite um nome: ");
        scanf("%s",nome);
       while(strcmp(nome,"fim")!=0)
       {
          printf("digite o salario: ");
          scanf("%f",&salario);
          if(salario<=150)
             salarioR=salario*1.25;
          else if(salario<=300)
             salarioR=salario*1.20;
          else if (salario<=600)
             salarioR=salario*1.15;
          else
             salarioR=salario*1.10;

          printf("o senhor : %s  e o salario e:  %f  e o reajustado e: %f \n"
          ,nome,salario,salarioR);
          st=salario+st;
          str=salarioR+str;
          printf("digite um nome: ");
          scanf("%s",nome);
       }
       printf("salario total: %f , salario total reajustado: %f \n",st,str);
       printf("diferença enter salarios: %f",str-st);
}
