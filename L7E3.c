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

//void RemoveTroca(Fila *F, int )


int main(){
    Fila F1;
    int num;
    Inicia(&F1);
    
    int op=0;
    
    while(op != 5){
        printf("\n         --Menu--\n");
        printf("\n1 - Inserir elementos na fila");
        printf("\n2 - Retirar elementos na fila");
        printf("\n3 - Verificar o elemento na saida fila");
        printf("\n4 - Mostrar elementos na fila");
        printf("\n5 - Sair\n");
        scanf("%d", &op);
        
        switch(op){

           case 1:
            scanf("%d", &num);
            Insere(&F1, num);
            break;

            case 2:
            Remove(&F1, &num);
            break;

            case 3:
            printf("\n%d ",(F1).item[(F1).fim-1]);
            break;


            case 4: 
            for(int i=0; i<F1.fim; i++)
                printf("%d ", F1.item[i]);

            break;
        }

    }
}