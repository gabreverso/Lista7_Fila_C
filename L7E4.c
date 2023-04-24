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
    int num, aux=0, cont=0;
    Inicia(&F1);

    
    for(int i=0; i<10; i++){
        printf("\n[%d]: ", i+1);
        scanf("%d", &num);
        Insere(&F1, num);
    }
    for(int i=0; i<10 && cont <=4; i++){
        Remove(&F1, &num);
            
        if(num>0){
            cont++;
            if(cont<=4){
                aux = aux+num;
            }
        }

    }

   printf("\nSoma = %d", aux);
}