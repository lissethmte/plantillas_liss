// plantillas_liss.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
template <typename T>

T promedio( T valores[], int num)
{
    T acum = 0;
    for (int i = 0; i < num; i++)
    {
        acum += valores[i];
    }
    return acum / num;
}

template <typename T>
bool lessthan(T& a, T& b)
{
    if (a < b) return true;
    else return false;
}

int main()
{
    float flotantes[5] = { 23.3, 56.3, 45.6, 34.4, 32.67 };
    int enteros[5] = { 5,4,3,7,5 };

    float prom = promedio(flotantes, 5);
    int prom2 = promedio(enteros, 5);

    std::cout << "promedio de floats: " << prom << std::endl;
    std::cout << "promedio de doubles: " << prom2 << std::endl;

    int a = 6;
    int b = 4;
    std::cout << "6 < 4? " << lessthan(a, b) << std::endl;
    double i = 6.857487;
    double j = 4.794759;
    std::cout << "6. < 4.?" << lessthan(i, j) << std::endl;

    // metodo burbuja
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j < 5; j++)
        {
            if (lessthan(flotantes[i], flotantes[j]))
            {
                int temp = flotantes[i];
                flotantes[i] = flotantes[j];
                flotantes[j] = temp;
            }

        }
    }
    for (int i = 0; j < 5; i++)
        printf("%f \n", flotantes[i]);

    char* s1 = (char*)"hola";
    char* s2 = (char*)"mundo";

    if (lessthan(s1, s2))
    {
        std::cout << "menor que";
    }
    else
    {
        std::cout << "mayor que";
    }




}
