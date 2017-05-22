#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#define max 10

int BuscaLinear(int A[],int n , int x);

int main(){
	bool controler;
	char letra;
	
while(!controler){
	int V[max], num, i;
	srand(time(NULL));
	
	for	(i = 0; i<max ;i++)
		V[i]= 1+(rand()%60);
		
	for(i=0; i<max;i++){
		printf("V[%d]= %d",i,V[i]);
		printf("\n");
	}
	
	printf("Digite um numero inteiro a ser pesquisado: ");
	scanf("%d",&num);
	if(BuscaLinear(V,max,num))
		printf("Este numero %d pertence ao vetor A.\n",num);
	else
		printf("Este numero %d nao pertence ao vetor A.\n",num);
		
	printf("Nova busca? s/n\n");
	scanf("%s",&letra);
	if(letra == 'n')
		controler = true;
}
	
	system ("pause");
	return 0;
}

int BuscaLinear(int A[],int n, int x){
	int achou=0,i=0;
	
	while((!achou)&&(i<n)){
		if(x == A[i])
			achou=1;
		i++;
	}return achou;
}
