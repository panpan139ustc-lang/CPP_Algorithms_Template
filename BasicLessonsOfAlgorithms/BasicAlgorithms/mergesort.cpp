#include <iostream>

using namespace std;

const int N = 100010;
int n, a[N], tmp[N];


//稳定: 排序前后两个相同元素的相对位置不发生改变
void merge_sort(int l, int r)
{
    if (l >= r) return;

    int mid = l + r >> 1;
    
    merge_sort(l, mid);
    merge_sort(mid + 1, r);
    
    //将排好序的数组合并

    int i = l, j = mid + 1;
    int k = 0;
    while (i <= mid && j <= r){
        if (a[i] < a[j]) tmp[k++] = a[i++];
        else tmp[k++] = a[j++];
    }

    //处理剩余的元素
    while (i <= mid) tmp[k++] = a[i++];
    while (j <= r) tmp[k++] = a[j++];

    //赋值
    for (int p = l, q = 0; p <= r;) a[p++] = tmp[q++];
} 

int main()
{
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) scanf("%d", &a[i]);

    merge_sort(1, n);

    for (int i = 1; i <= n; i++) printf("%d ", a[i]);

    return 0;
}