#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
char* mesS (int m)
{
  switch ( m )
  {
    case 1:
      return"Janeiro";
    break;
    case 2:
      return"Fevereiro";
    break;
    case 3:
      return"Marco";
    break;
    case 4:
      return"Abril";
    break;
    case 5:
      return"Maio";
    break;
    case 6:
      return"Junho";
    break;
    case 7:
      return"Julho";
    break;
    case 8:
      return"Agosto";
    break;
    case 9:
      return"Setembro";
    break;
    case 10:
      return"Outubro";
    break;
    case 11:
      return"Novembro";
    break;
    case 12:
      return"Dezembro";
    break;
    default :
      return "Valor invalido!";
  }
}

char meses[12][10]={"janeiro","fevereiro","marco","abril","maio"
,"junho","julho","agosto","setembro","outubor","novembro","dezembro"};
char* mesCV(int m)
{   m=m-1;
    return meses[m];
}
void main()
{
    int m;
    printf("digite um numero: ");
    scanf("%d",&m);
    printf("%s\n",mesCV(m));
    printf("%s",mesS(m));

}
