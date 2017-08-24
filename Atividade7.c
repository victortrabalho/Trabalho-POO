#include<stdlib.h>
 #include<stdio.h>
 #include<math.h>
 struct variavel
 {
     int status;
     float r1,r2;
 };

 struct variavel equacao(int a,int b,int c)
 {  struct variavel R;
    float delta;
     delta=pow(b,2)-4*a*c;
     if(delta>0)
     {
         R.status=2;
         R.r1=(-b+sqrt(delta))/2*a;
         R.r2=(-b-sqrt(delta))/2*a;
     }
     else if(delta==0)
    {
         R.status=1;
         R.r1=(-b+sqrt(delta))/2*a;
         R.r2=0;
    }
     else
     {
         R.status=0;
         R.r1=0;
         R.r2=0;
     }
     return R;
 }
void main()
{
    int a,b,c;
     printf("digite A: ");
     scanf("%d",&a);

     printf("digite B: ");
     scanf("%d",&b);

     printf("digite C: ");
     scanf("%d",&c);
     struct variavel resposta;
     resposta=equacao(a,b,c);
     printf("STATUS:%d --> Raiz1: %f , Raiz2: %f"
     ,resposta.status,resposta.r1,resposta.r2);
}
