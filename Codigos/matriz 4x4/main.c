#include <stdio.h>
#include <conio.h>

int Numeros[3][3];
int i,j;

void Mostrar_Matriz(){
printf("\nMostrar datos desordenados almacenados dentro de la matriz: \n");
for (i=0; i<3; i++){
    for (j=0; j<3; j++){
        printf("\t%d",Numeros[i][j]);
    }
    printf("\n");
}
getch();
}

void Mostrar_Matriz2(){
printf("\nMostrar datos ordenados almacenados dentro de la matriz: \n");
for (i=0; i<3; i++){
    for (j=0; j<3; j++){
        printf("\t%d",Numeros[i][j]);
    }
    printf("\n");
}
getch();
}

void Ordenar(){
int i, j,a,k,aux;
for (i=0; i<3; i++){//Magnitud de la primera dimension del cuadro de locacion//
    for (j=0; j<3; j++){//Magnitud de la segunda dimension del cuadro de locacion//
        for (a=0; a<3; a++){//Magnitud de la primera dimension del cuadro de comparacion//
            for (k=0; k<3; k++){//Magnitud de la primera dimension del cuadro de comparacion//
                if (Numeros[i][j]> Numeros[a][k]){
                    aux = Numeros[i][j];
                    Numeros[i][j] = Numeros[a][k];
                    Numeros[a][k] = aux;
                }
            }
        }
    }
}
}
int main()
{
    int columnas,filas;
    printf("\n\n\tAgregue 9 numeros: ");
    for (filas=0; filas<3; filas++){
        for (columnas=0; columnas<3; columnas++){
            printf("\n\n\tIngrese numero en fila %d y en columna %d:  ",filas,columnas);
            scanf("%d",&Numeros[filas][columnas]);
        }
    }
    Mostrar_Matriz();
    printf("\t");
    printf("\t");
    Ordenar();
    printf("\t");
    Mostrar_Matriz2();
    getch();
    system("pause");
}

