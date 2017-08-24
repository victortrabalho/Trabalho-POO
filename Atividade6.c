#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<locale.h>
void main()
{
    setlocale(LC_ALL,"Portuguese");
    char nome[100],inverso[100]="null",i;
    int tamanho;
    printf("digite o nome: ");
    gets(nome);
    tamanho=strlen(nome);
    for(i=0;i<tamanho;i++)
       inverso[(tamanho-1)-i]=nome[i];
    if(strcmp(nome,inverso)==0)
         printf("E Um PALÍNDROMO");
    else
         printf("NÃO E UM PALÍNDROMO");
}
