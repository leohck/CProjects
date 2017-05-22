#include <stdio.h>
#include <stdlib.h>
#define n_aluno 3//numero de alunos
#define n_prova 2//numero de provas

int main()
{
    int c;
 do{
 float Notas[n_aluno][n_prova];//matriz que armazena as notas
 float media[n_aluno],mediaProva[6];
 float alunoMedia[6];
 float soma;
 int i, j;
 
 for(i = 1; i<n_aluno; i++)
 {
  media[i] =  0;    
 }
 soma = 0;
 for(i = 1; i<=n_aluno; i++)
 {
       for(j = 1; j<= n_prova; j++)
       {                  
             printf("Informe a %da nota do %do aluno: ",j,i);
             scanf("%f",&Notas[i][j]);     
             soma += Notas[i][j];
       }  
       alunoMedia[i] = Notas[i][1]; 
       alunoMedia[i+3] = Notas[i][2];    
       media[i] = (soma / n_prova);
       soma = 0;
 }
 mediaProva[1] = (alunoMedia[1] + alunoMedia[2] + alunoMedia[3])/3;
 mediaProva[2] = (alunoMedia[4] + alunoMedia[5] + alunoMedia[6])/3;
 printf("\nMostramos as notas armazenadas na matriz Notas[]:\n");
 
 for(i = 0; i <n_aluno; i++)
 {
       for(j = 0; j < n_prova;j++)
       {
             printf("Notas[Aluno:%d][prova:%d] = %2.f ", i+1, j+1, Notas[i][j]);      
       }      
       printf("\n");
 }
 
 for(i = 1; i <=n_aluno; i++)
 {
  printf("A media do %do aluno é: %.2f \n",i, media[i]);      
 } 
 for(i = 1; i<= n_prova; i++)
 {
  printf("\nA media da %da prova foi de: %.2f\n",i, mediaProva[i]);      
 }
 printf("Deseja continuar? (1:sim / 2:nao):  ");
 scanf("%d",&c);
}while(c == 1);
}



