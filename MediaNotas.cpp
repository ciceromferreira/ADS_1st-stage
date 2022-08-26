/*Construa um algoritmo que leia o nome do aluno, duas notas e calcule a média aritmética*/
//Algoritmo média

#include<conio.h> //inclusão da biblioteca conio - comandos I/O - Input/Output - Entrada e saída
#include<stdio.h> //inclusão da biblioteca stdio - comandos de tela I/O
#include<iostream> //inclusão da biblioteca mais completa

//decalaração variáveis
char Aluno[30]; //declarando a variável Aluno do tipo caracter com possíveis 30 caracteres
float Nota1; //declarando a variável Nota1 do tipo fracionário
float Nota2; //declarando a variável Nota2 do tipo fracionário
float Media; //declarando a variável Media do tipo fracionário

//Início
main(){ //comando da estrutura principal do programa (escopo)
printf("\n Digite o nome do Aluno:"); //escreva na tela ("Digite o nome do Aluno:")
scanf("%s",&Aluno); //leia do teclado ("operador %s tipo string-conjunto de char", & - ponteiro que localiza a posição na memória RAM da variável Aluno
printf("\n Digite a Nota1:");
scanf("%f",&Nota1);
printf("\n Digite a Nota2:");
scanf("%f",&Nota2);
Media = (Nota1 + Nota2)/2; //cálculo da Média
printf("\n Nome do Aluno: %s",Aluno); //mostra na tela o valor da variável Nome do Aluno
printf("\n Nota1: %.2f",Nota1); //mosra na tal o valor da variável Nota1
printf("\n Nota2: %.2f",Nota2); //mosra na tal o valor da variável Nota2
printf("\n Media: %.2f",Media); //mosra na tal o valor da variável Média
printf("\n\n");
system("pause"); //aguarda acionamento da tecla enter para continuar
}//fecha escopo do programa - algoritmo

