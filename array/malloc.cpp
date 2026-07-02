#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *a = (int*)malloc(n*sizeof(int));
    cout << "enter elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Array elements : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    free(a);
    return 0;
}
