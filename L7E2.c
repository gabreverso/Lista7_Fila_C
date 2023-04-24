#include <stdio.h>
#include <conio.h>

typedef struct { 
    int item[10];
    int inicio, fim;
}Fila;

void Inicia(Fila *F){
    (*F).inicio = (*F).fim=0;
}

void Insere(Fila *F1, int X){
    if((*F1).fim != 10){
        (*F1).item[(*F1).fim] = X;
        (*F1).fim++;
    }
    else{
        printf("\nFila cheia!! \n");
    }
}

void Remove(Fila *F, int *X){
    if((*F).inicio == (*F).fim)
        printf("\nFila vazia... \n");

    else{
        *X = (*F).item[(*F).inicio];
        (*F).inicio++;
    }
}

int main(){
    Fila F1, F2;
    int num, N;
    Inicia(&F1);
    Inicia(&F2);

    printf("\nQuantidade de valores a serem inseridos: ");
    scanf("%d", &N);
    
    for(int i=0; i<N; i++){
        printf("\n[%d]: ", i+1);
        scanf("%d", &num);
        if(num<100)
            Insere(&F1, num);
        else
            Insere(&F2, num);
    }
    

    printf("\nPrimeira Fila: ");
    for(int i=0; i<F1.fim; i++){
        printf("%d ", F1.item[i]);
    }

    printf("\nSegunda Fila: ");
    for(int i=0; i<F2.fim; i++){
        printf("%d ", F2.item[i]);
    }
}