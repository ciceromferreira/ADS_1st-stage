/*Algoritmo Media Valor
Dado uma série de 05 valores inteiros de temperatura, leia este 5 valores e calcule a média
destes, e em seguida apresente esta média e caso esta seja maior e igual que 30 graus
escreva “temperatura acima da média, calor”, caso esta média seja inferior ou igual a 15 graus
“temperatura a baixo da média, frio “ e se esta estiver no intervalo entre estes dois valores,
“temperatura mediana, temperatura agradável”*/

//biblioteca
#include<conio.h> //inclusão da biblioteca conio - comandos I/O - Input/Output - Entrada e saída
#include<stdio.h> //inclusão da biblioteca stdio - comandos de tela I/O
#include<iostream> //inclusão da biblioteca mais completa
#include<locale.h>

//variáveis
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

printf("\n A temperatura é: %.2f",Media);

if(Media >=30){
printf("Temperatura acima da média, calor");
}

if(Media <=15){
printf("Temperatura abaixo da média, frio");
}

if(Media >=15 && Media <=30){
printf("Temperatura mediana, agradável");
}
printf("\n\n");
system("pause");
}
