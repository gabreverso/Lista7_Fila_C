#include <stdio.h>
#include <conio.h>

typedef struct { 
    int item[20];
    int inicio, fim;
}Fila;

void Inicia(Fila *F){
    (*F).inicio = (*F).fim=0;
}

void Insere(Fila *F1, int X){
    if((*F1).fim != 20){
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
    Fila F1, F2, F3;
    int num;
    Inicia(&F1);
    Inicia(&F2);
    Inicia(&F3);
    
    for(int i=0; i<20; i++){
        printf("\n[%d]: ", i+1);
        scanf("%d", &num);
        Insere(&F1, num);
    }
    for(int i=0; i<20; i++){
        Remove(&F1, &num);
        if(num<100 ){
            Insere(&F2, num);
        }
        else
            Insere(&F3, num);
    }

    printf("\nF2: ");
    for(int i=0; i<F2.fim; i++){
        printf("%d ", F2.item[i]);
    }

    printf("\nF3: ");
    for(int i=0; i<F3.fim; i++){
        printf("%d ", F3.item[i]);
    }
}