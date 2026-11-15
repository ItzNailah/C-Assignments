#include <iostream>
#include <cmath>

using namespace std;

void roots(float a, float b, float c)
{
    float d = b*b - 4*a*c;
    float x1, x2;

    if (d>0)
    {
        x1 = (-b + sqrt(d))/ (2*a);
        x2 = (-b - sqrt(d))/ (2*a);
        cout << "x1 = " << x1 << "\n";
        cout << "x2 = " << x2 << "\n";
    }
    else if (d==0)
    {
        x1 = -b/(2*a);
        cout << "x = " << x1 << "\n";
    }
    else
    {
        cout << "no real root" << "\n";
    }
}

int main()
{
    float a, b, c;
    cout <<"Enter a: ";
    cin >> a;
    cout <<"Enter b: ";
    cin >> b;
    cout <<"Enter c: ";
    cin >> c;

    roots(a, b, c);

    return 0;
}


