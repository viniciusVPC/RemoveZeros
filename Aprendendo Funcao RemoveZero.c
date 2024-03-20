#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

int RemoveZero (int v[], int n)
{
    int i = 0, j;
    for(j = 0; j < n; j++)
        if(v[j] != 0){
            v[i] = v[j];
            i += 1;

        printf("%d\t", v[j]);
        }
        printf("\n");
    return i;
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    printf("Olá Seja bem vindo ao novo Criador de Vetores 3000!!!\n\n");
    printf("Sem mais delongas, insira o tamanho que você quer que o seu vetor tenha:");
    int tamanhoVetor;
    scanf("%d", &tamanhoVetor);
    int *vetor;
    vetor = (int *)malloc(tamanhoVetor * sizeof(int));
    bool temZeros = false;
    for(int i = 0; i < tamanhoVetor; i++){
        printf("Insira o valor do %do elemento do seu vetor: ", i+1);
        scanf("%d", &vetor[i]);
        if(vetor[i] == 0) temZeros = true;
    }

    printf("Legal, agora vamos imprimir o seu vetor!\n\n");
    for(int i = 0; i < tamanhoVetor; i++){
        printf("%d\t", vetor[i]);
    }

    if(temZeros){
        printf("\n\nOpa, notamos que o seu vetor possui alguns zeros!\nSegundo a nova lei universal, zeros em vetores são proibidos!\n");
        printf("Vamos remover esses zeros pra você!\n\n");
        printf("Pronto! Olha como o seu vetor esta bonitinho agora: \n\n");
        int x = RemoveZero(vetor, tamanhoVetor);
    }
    else{
        printf("\n\nQue belo vetor!");
    }
    free(vetor);
    return 0;
}
