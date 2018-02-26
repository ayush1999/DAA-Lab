#include <iostream>
using namespace std;

int matchain(int ar[], int x)
{
    int n = x - 1, t;
    int k, q, i, l, j, br[n - 1][5];
    int m[n][n];
    for (i = 1; i <= n; i++)
    {m[i][i] = 0;
    }
    for (l = 2; l <= n; l++)
    {for (i = 1; i <= (n - l + 1); i++)
        {j = (i + l - 1);
        m[i][j] = 1000;
            for (k = i; k <= (j - 1); k++)
            {q = m[i][k] + m[k + 1][j] + (ar[i - 1] * ar[k] * ar[j]);
            if (q < m[i][j])
                {m[i][j] = q;
                br[i][j] = k;
                }
            }
        }
    }
    print(br, 1, n);
    t = m[i - 1][j];
    cout << endl
         << t;

    return 0;
}
int print(int br[][5], int i, int j)
{
    if (i == j)
    {cout << "A" << i;
    }
    else
    {cout << '(';
    print(br, i, br[i][j]);
    print(br, br[i][j] + 1, j);
    cout << ')';
    }

return 0;
}
int main()
{
    int i, r, j, k, q, x;
    int ar[7] = {10, 20, 50, 1, 100};
    x = 5;
    matchain(ar, x);
    return 0;
}
