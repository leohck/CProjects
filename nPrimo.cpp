#include <stdio.h>
#include <stdlib.h>


int nPrimo(int inteiro);


int main()
{
    int inteiro, cont;
    
    printf("Digite um numero inteiro:\n");
    scanf("%d",&inteiro); 
    nPrimo(inteiro);
    
    if( nPrimo(inteiro) == 1)
        printf("O numero %d e um numero primo\n",inteiro);    
    else
         printf(" O numero %d nao e primo\n",inteiro);  
   
    system("pause");
    return 0;  
    
}


int nPrimo(int inteiro)
{  
     int primo = 0;
    int x,verifica;
    verifica = 0;
    
         for( x = 1; x <= inteiro; x++)
        {
              if((inteiro%x) == 0)
                 verifica++;  
                  
        }   
    if(verifica <= 2)
     {  primo = 1;  }    
   return primo;   
}
