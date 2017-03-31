#include <iostream>

using namespace std;

int main()
{
    /*
//Crear un array en el que se puedan ingresar las variables para despues intercambiarlas por posicion
    int score[4];
    int temp1,temp2;

    cout<<"Ingrese el valor de la primera posicion: "<<endl;
    cin >> score[0];
    cout<<"Ingrese el valor de la segunda posicion: "<<endl;
    cin >> score[1];
    cout<<"Ingrese el valor de la tercera posicion: "<<endl;
    cin >> score[2];
    cout<<"Ingrese el valor de la cuarta posicion: "<<endl;
    cin >> score[3];

    temp1=score[0];
    score[0]=score[3];
    score[3]=temp1;

    temp2=score[1];
    score[1]=score[2];
    score[2]=temp2;

    cout<<score[0]<<endl;
    cout<<score[1]<<endl;
    cout<<score[2]<<endl;
    cout<<score[3]<<endl;
    */
//
    int i,x,c;
    cout<<"Ingresa el valor del indice del array: "<<endl;
    cin >> x;
    int score[x];
    int temp1;
    for (i=0;i<x;i++){
        cout<<"Ingrese los valores para el arreglo :"<<endl;
        cin >> score[i];
    }
    for (i=0;i<(x/2);i++){
        temp1=score[i];
        score[i]=score[x-1-i];
        score[x-1-i]=temp1;
    }
    for(i=0;i<x;i++){
        cout<<score[i]<<endl;
    }
    //c = score[0];
    //for(i=1;i<x;i++){
    //    if(c>score[i])
    //        c = score[i];
    }
    cout<<c<<endl;
    return 0;
}
