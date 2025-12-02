#pragma once
#include <iostream>
#include <vector>
#include <algorithm>


template<class T>
void quicksort(T a[], int left, int right)
{
    if (left >= right) return;
    const T pivot = a[left + right >> 1];
    int i = left - 1, j = right + 1;
    while (i < j){
        do i++; while (a[i] < pivot);
        do j--; while (a[j] > pivot);
        if (i < j) std::swap(a[i], a[j]);
    }
    quicksort(a, left, j);
    quicksort(a, j + 1, right);
}

template<class T>
void quicksort(std::vector<T>& a, int left, int right)
{
    if (left >= right) return;
    const T pivot = a[left + right >> 1];
    int i = left - 1, j = right + 1;
    while (i < j){
        do i++; while (a[i] < pivot);
        do j--; while (a[j] > pivot);
        if (i < j) std::swap(a[i], a[j]);
    }
    quicksort(a, left, j);
    quicksort(a, j + 1, right);
}