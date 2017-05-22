#include <stdio.h>
#include <stdlib.h>

int SomaNums(int n);

main()
{
      int A,B;
      printf("informe 1o numero inteiro: ");
      scanf("%d",&A);
      printf("informe 2o numero inteiro: ");
      scanf("%d",&B);
      printf("o resultado da soma de 1 ate %d = %d . \n",A, SomaNums(A));
      printf("o resultado da soma de 1 ate %d = %d . \n",B, SomaNums(B));
      system("pause");
}
//subprogramas

int SomaNums(int n)
{
 if(n == 1)//ponto de parada
 return 1;
 else
 return SomaNums(n-1)+n;//chama ele mesmo  
}
      
