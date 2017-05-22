#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "listarVetor.h"
#define tamanhoVetor 10


//				vetor	tamanhoVetor
void insercaoDireta(int V[],int n);

int main(){
	
	int vetor[tamanhoVetor];
	int i;
	int j;
	
	srand(time(NULL));
	
	for(i = 0;i<tamanhoVetor;i++)
		vetor[i] = rand()%100;
	
	printf("\nLista vetor: \n\n");
	listarVetor(vetor,tamanhoVetor);
	
	printf("\nVetor ordenado: \n\n");
	insercaoDireta(vetor,tamanhoVetor);
		
	 system("pause");
	return 0;	
}


void insercaoDireta(int V[], int tV){
	int auxiliar, i, j;
	
	for(i = tV-1; i > 0; i--){
		
		auxiliar = V[i-1];
		j = i;
		
		while ((j < tV)&&(auxiliar > V[j])){
			V[j-1] = V[j];
			j++;
		}
		V[j-1]= auxiliar;
	}
	listarVetor(V,tV);
}
