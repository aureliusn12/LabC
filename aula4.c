#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
FILE * arquivo; 
int i;
struct NotaAluno
{ 
    float nota1,nota2,nota3,nota4,media;
    char nome[50];
};

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
    arquivo = fopen("C:\\Users\\matheus.juca\\Desktop\\C\\NotaAluno.txt","w+");
    struct NotaAluno aluno[4];
    for (i = 1; i < 5; i++)
    {
        printf("\n(Aluno %d)\n",i);
        printf("Nome: \n");
        scanf("%s", &aluno[i].nome);
        printf("Nota 1: \n");
        scanf("%f", &aluno[i].nota1);
        printf("Nota 2: \n");
        scanf("%f", &aluno[i].nota2);
        printf("Nota 3: \n");
        scanf("%f", &aluno[i].nota3);
        printf("Nota 4: \n");
        scanf("%f", &aluno[i].nota4);
    
        fprintf(arquivo,"\n(Aluno %d)\n",i);
        fprintf(arquivo,"Nome : %s\n",aluno[i].nome);
        fprintf(arquivo,"Nota 1: %.2f\n",aluno[i].nota1);
        fprintf(arquivo,"Nota 2: %.2f\n",aluno[i].nota2);
        fprintf(arquivo,"Nota 3 : %.2f\n",aluno[i].nota3);
        fprintf(arquivo,"Nota 4 : %.2f\n",aluno[i].nota4);
        fprintf(arquivo,"Média: %.2f\n",(aluno[i].nota1 + aluno[i].nota2 + aluno[i].nota3 + aluno[i].nota4) / 4);
    }
    fclose(arquivo);
    return 0;
}