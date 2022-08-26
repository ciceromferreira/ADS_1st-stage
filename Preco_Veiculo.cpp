/* Algoritmo Pre�o de Autom�vel
O pre�o de um autom�vel � calculado pela soma do pre�o de f�brica com o pre�o dos
impostos (45% do pre�o de f�brica) e a percentagem do revendedor (28% do pre�o de f�brica).
Fa�a um algoritmo que leia o nome do autom�vel e o pre�o de f�brica e imprima o nome do
autom�vel e o pre�o final.*/

//Bibliotecas
#include<conio.h> //inclus�o da biblioteca conio - comandos I/O - Input/Output - Entrada e sa�da
#include<stdio.h> //inclus�o da biblioteca stdio - comandos de tela I/O
#include<iostream> //inclus�o da biblioteca mais completa
#include<locale.h>

//vari�veis
char Veiculo[30];
float Preco_Fabrica;
float Preco_Final;

main(){
setlocale(LC_ALL,"portuguese");
system("cls"); //clear screen - comando para limpar a tela

printf("\n Ve�culo: ");
scanf("%s",&Veiculo);

printf("\n Pre�o Fabrica: ");
scanf("%f",&Preco_Fabrica);

// C�lculo do Pre�o Final
Preco_Final = ((Preco_Fabrica * 0.45) + (Preco_Fabrica * 0.28)) + Preco_Fabrica;

printf("/n O ve�culo �: %s",Veiculo);
printf("\n O pre�o de f�brica do ve�culo �: %.2f",Preco_Fabrica);
printf("\n O pre�o final do ve�culo �: %.2f",Preco_Final);

printf("\n\n");
system("pause");
}

