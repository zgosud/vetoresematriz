/*
Preencher um vetor com 3 nomes com 20 letras no máximo cada. Imprimir os Nomes.*/
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
main()
{
 char nome[3][20],;
 int x;
 
 for(x=0;x<=2;x++)
 {
 printf("\n[%d] Digite o nome : %d ",x,(x+1));
 gets(nome[x]);
 }
 for(x=0;x<=2;x++)
 {
 printf("\n %s",nome[x],x);
 printf("\tO NOME %s tem %d letras",nome[x],strlen(nome[x]));
 }
 printf("\n\n");
 return(0);

} 