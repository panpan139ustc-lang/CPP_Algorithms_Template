#include <iostream>

using namespace std;

const int N = 100010;

int a[N], n, k;

int findk(int l, int r, int k)
{
    if (l == r) return a[l];

    int t = a[l + r >> 1];
    int i = l - 1, j = r + 1;

    while (i < j)
    {
        do i++; while (a[i] < t);
        do j--; while (a[j] > t);
        
        if (i < j) swap(a[i], a[j]);
    }

    if (j - l + 1 >= k) return findk(l, j, k);
    else return findk(j + 1, r, k - j + l - 1);
}

int main()
{
    cin >> n >> k;

    for (int i = 1; i <= n; i++) cin >> a[i];

    cout << findk(1, n, k) << endl;


    return 0;
}