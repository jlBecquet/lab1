#include <iostream>

using namespace std;

int main()
{
    cout << "porfavor Seleccione el ejerccicio a ejecutar"<<endl;
    int numEjercicio;
    cin>>numEjercicio;
    switch(numEjercicio)
    {
    case 1:
    {
   /*
    Ejercicio 1

    Escribe un programa que pida dos números A y B
    e imprime en pantalla el residuo de la división A/B.
    Ejemplo: si se ingresan 8 y 3 se debe imprimir:
    El residuo de la división 8/3 es: 2
    Nota: nota que la palabra división no tiene tilde,
    esto no es un error tipográfico, es debido
    a que no se puede imprimir correctamente tildes
    en la terminal.
    De ahora en adelante todos los ejemplos de salidas
    contendrán el mismo error tipográfico.
    */
    int NumA, NumB, Residuo;
    cout << "El siguiente programa muestra el residuo"
            " de la division entre 2 numeros A/B"<< endl;
    cout << "por favor ingrese A"<< endl;
    cin >> NumA;
    cout << "por favor ingrese B"<< endl;
    cin >> NumB;
    Residuo = NumA%NumB;
    cout << "El resultado es:" << Residuo <<endl;
        break;
    }
    case 2:
    {
    /*
    Ejercicio 2
    Escribe un programa que pida un número N e imprime
    en pantalla si es par o impar.
    Ejemplo: si se ingresa 5 se debe imprimir:
    5 es impar
    */
    int Num;
    cout << "por favor escriba un numero para determinar"
            " si es par o impar"<<endl;
    cin>>Num;
    if (Num%2==0){
        cout<<"El numero ingresado es par"<<endl;
    }
        else{
        cout<<"El numero ingresado es impar"<<endl;
    }
        break;
    }
    case 3:
    {
        /*
    Ejercicio 3

    Escribe un programa que pida dos números A y B
    e imprime en pantalla el mayor.
    Ejemplo: si se ingresan 7 y 3 se debe imprimir:
    El mayor es 7
         */
    int Mayor, Menor;
    cout<<"Por favor ingrese 2 numeros para calcular"
          "cual de los 2 es el mayor"<<endl;
    cout<<"Por favor ingrese el primer numero"<<endl;
    cin>>Mayor;
    cout<<"Por favor ingrese el segundo numero"<<endl;
    cin>>Menor;
    if (Mayor>Menor){
        cout <<"El numero mayor es:"<<Mayor<<endl;
    }
    else if (Mayor<Menor){
        cout<<"El numero mayor es:"<<Menor<<endl;
        }
    else
        cout<<"Ambos numeros son iguales"<<endl;
    break;
    }
    case 4:
    {
        /*
    Ejercicio 4

    Escribe un programa que pida dos números A y B
    e imprime en pantalla el menor.
    Ejemplo: si se ingresan 7 y 3 se debe imprimir:
    El menor es 3
         */

        int Mayor_A, Menor_A;
        cout<<"Por favor ingrese 2 numeros para calcular"
              "cual de los 2 es el mayor"<<endl;
        cout<<"Por favor ingrese el primer numero"<<endl;
        cin>>Mayor_A;
        cout<<"Por favor ingrese el segundo numero"<<endl;
        cin>>Menor_A;
        if (Mayor_A>Menor_A){
            cout <<"El numero mayor es:"<<Menor_A<<endl;
        }
        else if (Mayor_A<Menor_A){
            cout<<"El numero mayor es:"<<Mayor_A<<endl;
            }
        else
            cout<<"Ambos numeros son iguales"<<endl;
        break;
    }
    case 5:
    {
            /*
    Ejercicio 5

    Escribe un programa que pida dos números A y B
    e imprime en pantalla la división A/B con redondeo.
    Ejemplo: si se ingresan 8 y 3 se debe imprimir:
    8/3=3
    Si se ingresan 7 y 3 se debe imprimir:
    7/3=2
    */
        int dividendo, divisor;
        cout<<"Por favor ingrese 2 numeros para calcular"
              "la division entera"<<endl;
        cout<<"Por favor ingrese el primer numero"<<endl;
        cin>>dividendo;
        cout<<"Por favor ingrese el segundo numero"<<endl;
        cin>>divisor;

        cout<<"El resultado de la division entera es:"<<
              dividendo/divisor<<endl;

        break;
    }
    case 6:
    {
    /*
    Ejercicio 6

    Escribe un programa que pida dos números A y B
    e imprime en pantalla la potencia AB,
    sin hacer uso de librerías matemáticas.
    Ejemplo: si se ingresan 5 y 3 se debe imprimir:
    5∧3=125*/

    int base, potencia, suma=1;
    cout<<"Este programa calcula la potencia de un numero"<<endl;
    cout<<"por favor ingrese la base"<<endl;
    cin>>base;
    cout<<"por favor ingrese el exponente"<<endl;
    cin>>potencia;
    for (int i=1; i<=potencia;i++)
        {
        suma=suma*base;
        }
    cout<<"el resultado de la operacion es: "<<suma<<endl;
        break;
    }
    case 7:
    {
    /*
    Ejercicio 7

    Escribe un programa que pida un número N
    e imprime en pantalla la suma de
    todos los números entre 0 y N (incluyéndose el mismo).
    Ejemplo: si se ingresa 5: 1+2+3+4+5=15, por lo que
    se debe imprimir: La sumatoria desde 0 hasta 5 es: 15
    */
    int numero_n, suma_ej7=0,i=1;
    cout<<"por favor ingrese un numero N "<<endl;
    cin>>numero_n;
    while(i<=numero_n)
    {
        suma_ej7=suma_ej7+i;
        i++;
    }
    cout<<"La suma de los valores inferiores es:"<<suma_ej7<<endl;
        break;
    }
    case 8:
    {
    /*
    Ejercicio 8
    Escribe un programa que pida un número N
    e imprime en pantalla su factorial.
    Ejemplo: si se ingresa 5: 5! =1*2*3*4*5=120,
    por lo que se debe imprimir:
    5! =120
    */
        int numero_n, multiplicacion=1,i=1;
        cout<<"por favor ingrese un numero N "<<endl;
        cin>>numero_n;
        while(i<=numero_n)
        {
            multiplicacion=multiplicacion*i;
            i++;
        }
        cout<<"El factorial del numero es:"<<multiplicacion<<endl;
            break;
    }
    case 9:
    {
        /*
         *Ejercicio 9

        Escribe un programa que pida un número N e imprime
        el perímetro y área de un círculo con radio N.
        Nota: usa 3.1416 como una aproximación de pi.
        Ejemplo: si se ingresa 1 se debe imprimir:
        Perímetro: 6.28352
        Área: 3.1416
         */
        int numero_n;
        float area, perimetro;
        cout<<"por favor ingrese un numero N para calcular"<<endl;
        cout<<"el perimetro y area del circulo con radio N"<<endl;
        cin>>numero_n;
        area = 3.14*numero_n*numero_n;
        perimetro = 2*3.14*numero_n;
        cout<<"el perimetro del circulo con radio N es:"<<perimetro<<endl;
        cout<<"el area del circulo con radio N es:"<<area<<endl;
        break;
    }
    case 10:
    {
    /*
     * Ejercicio 10

    Escribe un programa que pida un número N
    e imprime en pantalla todos los múltiplos
    de dicho número entre 1 y 100.
    Ejemplo: si se ingresa 33 se debe imprimir:
    Múltiplos de 33 menores que 100:
    33
    66
    99
    */
        int numero_n, contador=0;
        cout<<"por favor ingrese un numero para calcular sus multiplos"<<endl;
        cin>>numero_n;
        contador=numero_n;
        while(numero_n<=100)
        {
            cout<<numero_n<<endl;
            numero_n=numero_n+contador;
        }

    }
    case 11:
    {

    }
    case 12:
    {

    }
    case 13:
    {

    }
    case 14:
    {

    }
    case 15:
    {

    }
    case 16:
    {

    }
    case 17:
    {

    }
    case 18:
    {

    }
    case 19:
    {

    }
    case 20:
    {

    }
    case 21:
    {

    }
    case 22:
    {

    }
    case 23:
    {

    }
    case 24:
    {

    }
    case 25:
    {

    }
    case 26:
    {

    }
    case 27:
    {

    }
    case 28:
    {

    }
    case 29:
    {

    }
    case 30:
    {

    }
    }


    return 0;
}
