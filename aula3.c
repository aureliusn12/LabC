#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
FILE * arquivo; 
int i;
struct CadastroProduto
{
    long int codigo;
    int quantidade;
    float ValorUnit;
    char nome[50];
};

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
    arquivo = fopen("C:\\Users\\matheus.juca\\Desktop\\C\\CadastroProduto.txt","w+");
    struct CadastroProduto produto[5];
    for (i = 1; i < 3; i++)
    {
        printf("\n(Produto %d)\n",i);
        printf("Nome: \n");
        scanf("%s", &produto[i].nome);
        printf("Código: \n");
        scanf("%ld", &produto[i].codigo);
        printf("Quantidade: \n");
        scanf("%d", &produto[i].quantidade);
        printf("Valor Unitário: \n");
        scanf("%f", &produto[i].ValorUnit);
    
        fprintf(arquivo,"\n(Produto %d)\n",i);
        fprintf(arquivo,"Nome : %s\n",produto[i].nome);
        fprintf(arquivo,"Código : %ld\n",produto[i].codigo);
        fprintf(arquivo,"Quantidade : %d\n",produto[i].quantidade);
        fprintf(arquivo,"Valor Unitário : %.2f\n",produto[i].ValorUnit);
    }
    fclose(arquivo);
    return 0;
}