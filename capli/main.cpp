#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a,b;
    cout <<"Chislo A: ";
    cin >> a;
    cout <<"Chislo B: ";
    cin >> b;
    cout << "Maksimum:  "<< (max(a,b) + 1)/2 ;
    cout << "  Minimum:  "<< min(a,b);

    return 0;
}
