#include <stdio.h>
//Desáfio Xadrez nível metre

// Recursivo da torre 
void movertorre(int torrer){

    if(torrer > 0){

        movertorre (torrer -1);
        printf("Direita \n");
      
    }
}

// Recursivo da rainha
void moverrainha(int rainhar){

    if(rainhar > 0){

        moverrainha(rainhar -1);
        printf("Esquerda \n");
      
    }
}

// Recursivo da bispo
void moverbispo(int bispor ){

    while (bispor > 0 )
{
    for ( int i = 1; i <= 1; i++)
    {
        printf("Direita \n");
    }

    bispor --;
    printf("Cima \n");
    
}

}

int main () {


// chamada do recursivo da torre 
int torre = 5;

printf("Movimento da torre \n");
movertorre(torre);



// chamada do recursivo do bispo

int bispo = 5;
printf("Movimento do bispo \n");
moverbispo(bispo);



// chamada do recursivo da rainha

int rainha = 8;
printf("Movimento da rainha \n");
moverrainha(rainha);

//Movimento do cavalo
 
printf("Movimento do cavalo \n");

int i = 1;
int j = 1;

while (i <= 1 )
{
    for ( j = 1; j <= 2; j++)
    {
        printf("Cima \n");
    }
    
    printf("Direita \n");
    i++;
    
}
return 0;

}

