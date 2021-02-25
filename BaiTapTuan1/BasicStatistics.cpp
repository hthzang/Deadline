#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[1000];
    double tb;
    for (int i=0; i<n; i++) {
        cin >> a[i];
        tb+=a[i];
    }
    tb=tb/n;
    sort(a, a+n);
    cout << "Mean: " << tb << endl
         << "Max: " << a[n-1] << endl
         << "Min: " << a[0];
    return 0;
}
