#include <iostream>
#include "IntArray.cpp"
using namespace std;

int main() {

    setlocale(LC_ALL, "");

    Array<int> a(10);

    for (auto i = 0; i < a.getSize(); i++)
        a.set(i, i*i );

    cout << "Исходный массив a:" << endl;
    for (auto i = 0; i < a.getSize(); i++)
        cout << "a[ " << i << " ] = " << a.get(i) << endl;


    Array<int> b(a);
    cout << "Массив b:" << endl;
    for (auto i = 0; i < b.getSize(); i++)
        cout << "b[ " << i << " ] = " << b.get(i) << endl;


    Array<int> c(200);
    c = b;
    cout << "Массив c:" << endl;
    for (auto i = 0; i < c.getSize(); i++)
        cout << "c[ " << i << " ] = " << c.get(i) << endl;
}