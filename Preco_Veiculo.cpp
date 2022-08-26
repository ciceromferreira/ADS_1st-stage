/* Algoritmo Preço de Automóvel
O preço de um automóvel é calculado pela soma do preço de fábrica com o preço dos
impostos (45% do preço de fábrica) e a percentagem do revendedor (28% do preço de fábrica).
Faça um algoritmo que leia o nome do automóvel e o preço de fábrica e imprima o nome do
automóvel e o preço final.*/

//Bibliotecas
#include<conio.h> //inclusão da biblioteca conio - comandos I/O - Input/Output - Entrada e saída
#include<stdio.h> //inclusão da biblioteca stdio - comandos de tela I/O
#include<iostream> //inclusão da biblioteca mais completa
#include<locale.h>

//variáveis
char Veiculo[30];
float Preco_Fabrica;
float Preco_Final;

main(){
setlocale(LC_ALL,"portuguese");
system("cls"); //clear screen - comando para limpar a tela

printf("\n Veículo: ");
scanf("%s",&Veiculo);

printf("\n Preço Fabrica: ");
scanf("%f",&Preco_Fabrica);

// Cálculo do Preço Final
Preco_Final = ((Preco_Fabrica * 0.45) + (Preco_Fabrica * 0.28)) + Preco_Fabrica;

printf("/n O veículo é: %s",Veiculo);
printf("\n O preço de fábrica do veículo é: %.2f",Preco_Fabrica);
printf("\n O preço final do veículo é: %.2f",Preco_Final);

printf("\n\n");
system("pause");
}

