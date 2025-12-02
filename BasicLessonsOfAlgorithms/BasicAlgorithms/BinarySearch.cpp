#include <iostream>
#include <algorithm>

using namespace std;

const int N = 100010;

int a[N], n;

int main() {

    double l = 0, r = 1000000;
    double x;
    cin >> x;
    while (r - l > 1e-6) {
        if (double mid = (l + r) / 2;  mid * mid >= x) r = mid;
        else l = mid;
    }

    cout << l << endl;

    return 0;
}

// int main(){

        //依据某种性质，将整个区间分为两半，可以二分出各半区间的分界点

//     cin >> n;
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }

//     int x;
//     cin >> x;
//     int l = 0, r = n - 1;
//     //查找的最右边的元素x
//     考虑: [0, 1]中查找0
//     若 mid = l + r >> 1 &&  l = r - 1, 则 mid = l => 会发生死循环
//     while (l < r){
//         int mid = l + r + 1 >> 1;
//         if (a[mid] <= x) l = mid;
//         else r = mid - 1;
//     }

//     if (a[l] == x) {
//         cout << "Yes\n";
//     }

//     l = 0, r = n - 1;
//     //查找最左边的元素x
//     while (l < r) {
//         int mid = l + r >> 1;
//         if (a[mid] < x) l = mid + 1;
//         else r = mid;
//     }

//     if (a[l] == x) {
//         cout << "Yes\n";
//     }


//     return 0;
// }