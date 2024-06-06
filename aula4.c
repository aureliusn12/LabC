#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
FILE * arquivo; 
int i,j;
struct NotaAluno
{ 
    float nota,media;
    char nome[50];
};

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
    arquivo = fopen("../","w+");
    struct NotaAluno aluno[4];
    for (i = 1; i < 5; i++)
    {
        printf("\n(Aluno %d)\n",i);
        printf("Nome: \n");
        scanf("%s", &aluno[i].nome);
        fprintf(arquivo,"Nome : %s\n",aluno[i].nome);
        for (j = 1; j < 5; j++){
            printf("Nota [%d]: \n",j);
            scanf("%f",&aluno[i].nota);
            fprintf(arquivo,"Nota %d: %.2f\n",j,aluno[i].nota);
            aluno[i].media = aluno[i].media + aluno[i].nota;
        }   
        fprintf(arquivo,"Média: %.2f\n",aluno[i].media/4);
    }
    fclose(arquivo);
    return 0;
}
