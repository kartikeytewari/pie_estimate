#include <bits/stdc++.h>
#define ld long double
using namespace std;

int main()
{
    ld n;
    cout << "Enter the number of polds: ";
    cin >> n;

    srand(time(NULL));
    ld inside_cirle=0;
    ld outside_circle=0;
    for (ld i=0;i<=n-1;i++)
    {
        // generate pold
        ld a=rand()%100;
        ld b=rand()%100;

        ld dist=sqrt(pow(a,2)+pow(b,2));
        if (dist<=100)
        {
            inside_cirle++;
        }
        else
        {
            outside_circle++;
        }
    }

    cout << 4*(inside_cirle/(inside_cirle+outside_circle)) << endl;
    return 0;
}