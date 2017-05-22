#include <stdio.h>
#include <stdlib.h>

//funçao exercicio 3
int fatorial(int n);
//programa exercicio 4
int main(){
    int A,B,soma;
    printf("digite 2 numeros inteiros: ");
    scanf("%d%d",&A,&B);
    soma = fatorial(A) + fatorial(B);
    printf("%d",soma);
    system("pause");
   return 0;
}
//funçao exercicio 3
int fatorial(int n){
 int fatorar;
 for(fatorar = 1; n > 1; n= n -1)fatorar *= n; 
}
