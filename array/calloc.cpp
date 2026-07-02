#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *a = (int*)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    free(a);

    return 0;
}