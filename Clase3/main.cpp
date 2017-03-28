#include <iostream>
using namespace std;
//|| significa or logico
//&& significa and logico
//c=c+1 == c++;
//c=c-1 == c--;
//x=a++ primero se le asigna el valor de la variable a x y luego incrementa la variable
//x=++a primero incrementa a la variable y luego asigna el numero a x
//x=x+1 == x+=1
int main()
{
//Diferencia entre colocar antes el operador y despues
    int x,a=5;
    cout<<"Antes resultado de a es: "<< a <<endl;
    x = a++;
    cout<<"El resultado de a++ es: "<< a <<endl;
    x = ++a;
    cout<<"El resultado de ++a es: "<< a <<endl;
//Probar diferencias
    int a=2,b=4,c=6;
    c+=2;
    cout<<"El valor nuevo de c es: "<< c <<endl;
    b-=2;
    cout<<"El valor nuevo de b es: "<< b <<endl;
    a*=2;
    cout<<"El valor nuevo de a es: "<< a <<endl;
    c/=3;
    cout<<"El valor nuevo de c es: "<< c <<endl;
//Pedir dos numeros enteros y buscar el mayor de los numeros
    //Primera forma
    int x,y,z;
    cout<<"Introduzca el valor de y: "<<endl;
    cin >> x;
    cout<<"Introduzca el valor de y: "<<endl;
    cin >> y;
    if (x>y)
        z=x;
    else
        z=y;
    cout<<"El numero mayor es: "<< z <<endl;
    //Segunda forma
    cout<<"Introduzca el valor de y: "<<endl;
    cin >> x;
    cout<<"Introduzca el valor de y: "<<endl;
    cin >> y;
    z =(x>y)? x:y;
    cout<<"El numero mayor es: "<< z <<endl;
//Arrays  en este caso (arreglo de enteros de 6 elementos)
    int array[5];
    int a,b,c,d,e;
    cout<<"Introduzca valores: "<<endl;
    cin >> a;
    cout<<"Introduzca valores: "<<endl;
    cin >> b;
    cout<<"Introduzca valores: "<<endl;
    cin >> c;
    cout<<"Introduzca valores: "<<endl;
    cin >> d;
    cout<<"Introduzca valores: "<<endl;
    cin >> e;
    array[0]=a;
    array[1]=b;
    array[2]=c;
    array[3]=d;
    array[4]=e;
    cout<<"El valor de la primera posicion es: "<< array[0] <<endl;
    cout<<"El valor de la segunda posicion es: "<< array[1] <<endl;
    cout<<"El valor de la tercera posicion es: "<< array[2] <<endl;
    cout<<"El valor de la cuarta posicion es: "<< array[3] <<endl;
    cout<<"El valor de la quinta posicion es: "<< array[4] <<endl;
    //Ejercicio del Profe
    int score[6];
    int c=5;
    score[0]=c++;
    score[1]=c++;
    score[2]=c++;
    score[3]=c++;
    score[4]=c++;
    score[5]=c++;
    cout<<"El valor de la posicion cero es: "<< score[0] <<endl;
    cout<<"El valor de la primera posicion es: "<< score[1] <<endl;
    cout<<"El valor de la segunda posicion es: "<< score[2] <<endl;
    cout<<"El valor de la tercera posicion es: "<< score[3] <<endl;
    cout<<"El valor de la cuarta posicion es: "<< score[4] <<endl;
    cout<<"El valor de la quinta posicion es: "<< score[5] <<endl;
    return 0;
}
