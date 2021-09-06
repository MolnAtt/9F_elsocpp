// 9F_elsocpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/* asdfélkj */


/** /
    blokk-komment
/**/

#include <iostream>
#include <string>

using namespace std;

int main() // entry point
{
    cout << "Hello World!\n" << "es ez is " << "meg ez is " << endl << "ez is sorvege\n"<< "lam.";
    int a = 5;
    int b = 7;
    cout << a + b;

    int c;
    cin >> c;

    cout << "Te most azt mondtad, hogy " << c;

    string d= "blabla";

    cout << d;

    bool e = 5<7;
    
    if (e)
    {
        cout << "öt kisebb, mint 7";
    }
    else
    {
        cout << "olyan is van, hogy else";
    }

    for (size_t i = 0; i < 5; i++)
    {
        cout << "Lepek!\n";
    }

    for (unsigned int i = 0; i < 5; i++)
    {
        cout << "Lepek!\n";
    }

    cout << "izé\n";

    unsigned int t = 1;

    cout << t - 1 << endl;
    cout << t - 2 << endl;
    cout << t - 3 << endl;
    cout << t - 4 << endl;

    int s = 0;
    while (s<5)
    {
        cout << s++ << endl;
    }

    int kapcsolo;
    cin >> kapcsolo;

    switch (kapcsolo)
    {
    case 2:
        cout << "ez egy 2-es lett" << endl;
        break;
    case 3:
        cout << "ez viszont egy 3-as lett" << endl;
        break;
    default:
        cout << "ez valami egészen  más lett" << endl;
        break;
    }


    cin >> kapcsolo;

    // fall through-effektus, esetek összevonására hagyták benne! De egyébként mindig break-elni kell.
    switch (kapcsolo)
    {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        cout << "ez egy 5 vagy annál kisebb lett" << endl;
        break;
    case 6:
        cout << "ez viszont 6 lett" << endl;
        break;
    default:
        cout << "ez valami 6-nál nagyobb lett" << endl;
        break;
    }



}
