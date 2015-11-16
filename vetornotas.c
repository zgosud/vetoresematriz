/*
Armazenar em Vetores, Nomes e Notas PR1 e PR2 de 6 alunos. Calcular a média de cada aluno
e imprimir aprovado se a méida for maior que 5 e reprovado se média for menor ou igual a 5.
OBS.: 2 vetores para as notas tipo float. 1 vetor para os nomes. 1 vetor para a média. 1 vetor
para situação.*/
#include<stdio.h>
#include <string.h
main()
{
 float PR1[3], PR2[3], media[3];
 char nome[3][30],nome2[3][30], situacao[3][10];
 int x,z=1;
 for(x=0;x<3;x++)
 {
 printf("Informe nome %d: ",x+1);
 gets(nome[x]);
 printf("Informe nota %d do aluno %s: ",z,nome[x]);
 scanf("%f",&PR1[x]);
 gets(nome2[x]);
 z++;
 printf("Informe nota %d do aluno %s: ",z,nome[x]);
 scanf("%f",&PR2[x]);
 gets(nome2[x]);
 z=1;
 }
 for(x=0;x<3;x++)
 {
 media[x]=(PR1[x]+PR2[x])/2;
 if(media[x]>5)
 strcpy(situacao[x],"Aprovado");
 else

 strcpy(situacao[x],"Reprovado");
 }
 printf("_________________________________________");
 printf("\n\nNome\tNota1\tNota2\tMedia\tSituacao");
 printf("\n_________________________________________");
 for(x=0;x<3;x++)
 {
 printf("\n%s\t%3.2f\t%3.2f\t%3.2f\t%s",nome[x],PR1[x],PR2[x],media[x],situacao[x]);
 }
 printf("\n_________________________________________");

 printf("\n\n");
 return(0);
} 