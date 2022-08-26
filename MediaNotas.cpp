/*Construa um algoritmo que leia o nome do aluno, duas notas e calcule a m�dia aritm�tica*/
//Algoritmo m�dia

#include<conio.h> //inclus�o da biblioteca conio - comandos I/O - Input/Output - Entrada e sa�da
#include<stdio.h> //inclus�o da biblioteca stdio - comandos de tela I/O
#include<iostream> //inclus�o da biblioteca mais completa

//decalara��o vari�veis
char Aluno[30]; //declarando a vari�vel Aluno do tipo caracter com poss�veis 30 caracteres
float Nota1; //declarando a vari�vel Nota1 do tipo fracion�rio
float Nota2; //declarando a vari�vel Nota2 do tipo fracion�rio
float Media; //declarando a vari�vel Media do tipo fracion�rio

//In�cio
main(){ //comando da estrutura principal do programa (escopo)
printf("\n Digite o nome do Aluno:"); //escreva na tela ("Digite o nome do Aluno:")
scanf("%s",&Aluno); //leia do teclado ("operador %s tipo string-conjunto de char", & - ponteiro que localiza a posi��o na mem�ria RAM da vari�vel Aluno
printf("\n Digite a Nota1:");
scanf("%f",&Nota1);
printf("\n Digite a Nota2:");
scanf("%f",&Nota2);
Media = (Nota1 + Nota2)/2; //c�lculo da M�dia
printf("\n Nome do Aluno: %s",Aluno); //mostra na tela o valor da vari�vel Nome do Aluno
printf("\n Nota1: %.2f",Nota1); //mosra na tal o valor da vari�vel Nota1
printf("\n Nota2: %.2f",Nota2); //mosra na tal o valor da vari�vel Nota2
printf("\n Media: %.2f",Media); //mosra na tal o valor da vari�vel M�dia
printf("\n\n");
system("pause"); //aguarda acionamento da tecla enter para continuar
}//fecha escopo do programa - algoritmo

