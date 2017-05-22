#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int potencia(int n, int n1);
main()
{
   int base,expoente;
   printf("Informe um numero inteiro e em seguida o numero de elevacao: ");
   scanf("%d%d", &base, &expoente);
  printf("%d elevado a %d = %d\n",base , expoente, potencia(base,expoente));    
   system("pause");
}

int potencia(int nBase, int nExpoente)
{
    
    while(nExpoente>1)
    {
       nBase *= nBase;
        nExpoente--;           
    }
    return nBase;
}
