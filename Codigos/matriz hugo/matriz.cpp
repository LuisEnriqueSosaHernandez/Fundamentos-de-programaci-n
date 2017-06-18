#include <iostream>

using namespace std;

int main(){
    int matriz[3][3], i, j, x, y, aux;

    //Introducimos valores
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            cout << "\tIntroduce elemento "<<i+1<<" "<<j+1<<": ";
            cin >> matriz[i][j];
        }
    }
    cout<<"===================================================================================================";

    //Mostramos la matriz
    cout << "\n\nLa Matriz Introducida: \n";
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            cout << "\t"<<matriz[i][j];
        }
        cout<<"\n";
    }
    cout<<"===================================================================================================";
    //Ordenamos la Matriz
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(x=0;x<3;x++){
                for(y=0;y<3;y++){
                            if(matriz[x][y]>matriz[i][j]){
                                swap(matriz[x][y],matriz[i][j]);
                            }
                }
            }
        }
    }




    //Mostramos la matriz ordenada
    cout << "\n\nLa Matriz Ordenada: \n";
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            cout << "\t"<<matriz[i][j];
        }
        cout<<"\n";
    }

    return 0;
}
