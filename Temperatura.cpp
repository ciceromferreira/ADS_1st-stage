/*Algoritmo Media Valor
Dado uma s�rie de 05 valores inteiros de temperatura, leia este 5 valores e calcule a m�dia
destes, e em seguida apresente esta m�dia e caso esta seja maior e igual que 30 graus
escreva �temperatura acima da m�dia, calor�, caso esta m�dia seja inferior ou igual a 15 graus
�temperatura a baixo da m�dia, frio � e se esta estiver no intervalo entre estes dois valores,
�temperatura mediana, temperatura agrad�vel�*/

//biblioteca
#include<conio.h> //inclus�o da biblioteca conio - comandos I/O - Input/Output - Entrada e sa�da
#include<stdio.h> //inclus�o da biblioteca stdio - comandos de tela I/O
#include<iostream> //inclus�o da biblioteca mais completa
#include<locale.h>

//vari�veis
float Temperatura1;
float Temperatura2;
float Temperatura3;
float Temperatura4;
float Temperatura5;
float Media;

main(){
setlocale(LC_ALL,"portuguese");
system("cls"); //clear screen - comando para limpar a tela

printf("\n Temperatura: ");
scanf("%f",&Temperatura1);

printf("\n Temperatura: ");
scanf("%f",&Temperatura2);

printf("\n Temperatura: ");
scanf("%f",&Temperatura3);

printf("\n Temperatura: ");
scanf("%f",&Temperatura4);

printf("\n Temperatura: ");
scanf("%f",&Temperatura5);

Media = (Temperatura1 + Temperatura2 + Temperatura3 + Temperatura4 + Temperatura5)/5;

printf("\n A temperatura �: %.2f",Media);

if(Media >=30){
printf("Temperatura acima da m�dia, calor");
}

if(Media <=15){
printf("Temperatura abaixo da m�dia, frio");
}

if(Media >=15 && Media <=30){
printf("Temperatura mediana, agrad�vel");
}
printf("\n\n");
system("pause");
}
