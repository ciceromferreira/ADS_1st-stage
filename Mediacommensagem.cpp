/* Construa um algortimo para ler o nome do aluno, 3 notas e calcular a m�dia.
Se m�dia >= 7,0 - Apresentar mensagem que o aluno foi "aprovado".
Se m�dia < 4,0 - Apresentar uma mensagem que o Aluno foi "reprovado".
Se m�dia >= 4,0 e < 7,0 - Apresentar uma mensagem que o aluno est� "Em exame".

Resultado final: O Aluno xxx com nota1= x, nota2= y, nota3= z, m�dia= xyz est� "Aprovado" "Reprovado" "Em Exame"*/


#include<conio.h> //inclus�o da biblioteca conio - comandos I/O - Input/Output - Entrada e sa�da
#include<stdio.h> //inclus�o da biblioteca stdio - comandos de tela I/O
#include<iostream> //inclus�o da biblioteca mais completa
#include<locale.h>

//vari�veis
char Aluno[30];
float Nota1;
float Nota2;
float Nota3;
float Media;

main(){
setlocale(LC_ALL,"portuguese");

printf("\n Digite o nome do Aluno:");
scanf("%s",&Aluno);

printf("\n Digite a Nota1:");
scanf("%f",&Nota1);

printf("\n Digite a Nota2:");
scanf("%f",&Nota2);

printf("\n Digite a Nota3:");
scanf("%f",&Nota3);

Media = (Nota1 + Nota2 + Nota3)/3;

printf("\n O aluno: %s possui as Nota1:%.2f,Nota2:%.2f,Nota3:%.2f,Media:%.2f",Aluno,Nota1,Nota2,Nota3,Media);

if(Media >=7.0){
printf("Aprovado");
}

if(Media <4.0){
printf("Reprovado");
}

if(Media >=4.0 && Media<7.0){
printf("Em Exame");
}
printf("\n\n");
system("pause");
}

