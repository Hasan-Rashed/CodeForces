#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n, P, V, T, counter = 0, i;

    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> P >> V >> T;
        if(P + V + T >= 2)
        {
            counter++;
        }
    }
    cout << counter << endl;

    return 0;
}
