#include <iostream>

using namespace std;

int main()
{
    int tab[10],i;
    cout<<"Wypełnianie tablicy.\n";
    for (i=0;i<10;i=i+1)
    {
        cout<<"Podaj element "<<i+1<<": ";
        cin>>tab[i];
    }
    cout<<"\nWypisywanie elementow tablicy.\n";
    for (i=0;i<10;i=i+1)
        cout<<tab[i]<<"  \n";
    system ("pause");
    return 0;
}
