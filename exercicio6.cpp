#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define dadoFace 6

int main(){
int nLancamentos,i,resultado,maiorFace = 0;
int dado[dadoFace];
srand(time(NULL));
printf("digite a quantidade de lancamentos do dado: ");
scanf("%d",&nLancamentos);

for(i = 0; i <= dadoFace;i++)dado[i] = 0;
for(i = 1; i<= nLancamentos; i++){
   resultado = 1 + rand() % 6;
   dado[resultado]++;  
   if(dado[resultado] > maiorFace){
      maiorFace = dado[resultado];                   
   }
}

for(i = 1; i<= dadoFace;i++)printf("Dado[%d] = %d\n",i,dado[i]);

for(i = 1; i<= dadoFace;i++){
   if(dado[i] == maiorFace)printf("Face com maior frequencia: Dado[%d] = %d\n",i,maiorFace);
}
    system("pause");
    return 0;
}
