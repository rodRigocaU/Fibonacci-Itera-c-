
#include <iostream>
using namespace std;


int fibo(int n)
{
    int *arrre = new int[n];
    arrre[0] = 1;
    arrre[1] = 1;
    for (int i = 2; i < n; i++)
    {
        arrre[i] = arrre[i - 1] + arrre[i - 2];
    }
    return arrre[n - 1];
}


int main()
{
    cout << "Ingrese el numero para el fibonacci " << '\n';
    int number;
    cin >> number;
    cout << "El resultado de la sucesion de fibonacci en " << number << " es : " << fibo(number) << '\n';
}

