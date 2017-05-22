#include <stdlib.h>
#include <stdio.h>
//funcao exercicio 1
int div7(int n);
//programa exercicio 2
int main(){
 
 int A,B,soma;
 
 printf("Digite 2 numeros inteiros: ");
 scanf("%d%d",&A,&B); 
 soma = A + B;
 div7(soma);
 printf("%d\n",div7(soma));
 system("pause");
    return 0;
}
//funçao exercicio1
int div7(int n){
 
 int verifica;
 if(n % 7 == 0)return 1;
 if(n % 7 == 1)return 0;
    
}
