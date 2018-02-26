#include <iostream>
using namespace std;

int calculate(int x)
{   int i, j, k, l;
    i = paren((2 * x));
    j = paren(x);
    l = (i / (j * (j)));
    l = ((l) / (x + 1));
    return l;
}

int paren(int x)
{
    if (x == 1)
    {return 1;
    }
    else
        return (x * paren(x - 1));
}

int main()
{
    int y;
    cin >> y;
    cout << "Total possible ways to parenthesize is" << calculate(y) << endl;
    return 0;
}
