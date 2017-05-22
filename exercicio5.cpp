#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define alunoQuantidade 50
#define provaQuantidade 4


int main(){
 int prova[provaQuantidade],aluno[alunoQuantidade];
 int media,mediaMaior6,i,j;
 srand(time(NULL));
 media = 0;
 mediaMaior6 = 0;
 
 for (i = 1; i <= alunoQuantidade; i++){
     for(j = 1; j<= provaQuantidade; j++){
        prova[j] = rand() % 10;;
        media += prova[j];   
     }     
     media /= provaQuantidade;
     aluno[i] = media;
     if(media >= 6)mediaMaior6++;        
 }
 printf("alunos com a media maior que 6: %d\n",mediaMaior6);
system("pause");
    return 0;
}
