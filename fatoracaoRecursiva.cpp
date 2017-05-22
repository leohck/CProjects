#include <stdio.h>
#include <stdlib.h>

int fatorar(int n);
main()
{
      int A;
      printf("informe um numero inteiro: ");
      scanf("%d",&A);
      printf("O fatorial de %d = %d . ",A,fatorar(A));   
      system("pause");   
}

int fatorar(int n)
{
    if(n == 1)
    return 1;
    else 
    return fatorar(n-1)*n;       
}
