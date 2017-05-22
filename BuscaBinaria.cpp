#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#define max 10

int BuscaBinaria(int A[],int n , int x);

int main(){
	bool controler;
	char letra;
	
while(!controler){
	int A[max],num,i;
	printf("Entra com os dados ordenados:\n");
	for(i=0;i<max;i++)
		scanf("%d",&A[i]);
	
	printf("Os dados ordenados digitados: \n");
	for(i=0;i<max;i++)
		printf("A[%d] = %d\n",i,A[i]);
	
	printf("Digite um numero inteiro a ser pesquisado: \n");
	scanf("%d",&num);
	
		if(BuscaBinaria(A,max,num))
		printf("Este numero %d pertence ao vetor A.\n",num);
	else
		printf("Este numero %d nao pertence ao vetor A.\n",num);
		
	printf("Nova busca? s/n\n");
	scanf("%s",&letra);
	if(letra == 'n')
		controler = true;
}
	system("pause");
	return 0;
}

int BuscaBinaria(int A[],int n,int x){
	int achou = 0, L = 0, R = n-1,m;
	
	while((!achou)&&(L<=R)){
		m = (L+R)/2;
		if(x==A[m])
			achou=1;
		else if(x<A[m])
			R = m-1;
		else
			L = m+1;
	}
	return achou;
}
