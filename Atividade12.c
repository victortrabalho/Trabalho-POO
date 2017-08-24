#include<stdlib.h>
#include<stdio.h>
 void main()
 {
     int i,posicao=0;
     float menor,v[150];
     printf("digite um peso: ");
     scanf("%f",&v[0]);
     menor=v[0];
     for(i=1;i<150;i++)
     {
         printf("digite um peso: ");
         scanf("%f",&v[i]);
         if(menor>v[i])
         {
             menor=v[i];
             posicao=i;
         }
     }
     printf("o menor peso e %f a posicao dele no vetor e %d",menor,posicao);
 }
