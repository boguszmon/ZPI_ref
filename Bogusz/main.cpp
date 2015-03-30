#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int suma_cyfr (int n)
   {
    int cyfra=0, suma=0;
    while(n!=0)
        {
            cyfra=n%10;
            suma+=pow(cyfra,5);
            n/=10;
        }
    return suma;
   }


int main()
{
    int wynik=0;
    for (int i=10; i<1000000 ;i++)
    {
        if(suma_cyfr(i)==i) wynik+=i;
    }
    cout << wynik;
    
    getchar();
    return 0;
}
