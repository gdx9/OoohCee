#include <iostream>
#include <random>
#include <time.h>

using namespace std;

template <typename T>
void ourQuickSort(T arr, int l, int r)
{
    int i,j;
    i = l;
    j = r;
    int middle = arr[(i+j)/2];
    
    do
    {
        while(middle > arr[i]) i++;
        while(middle < arr[j]) j--;

    if(i <= j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

    }while(i < j);

    if(i < r) ourQuickSort(arr,i,r);
    if(j > l) ourQuickSort(arr,l,j);
}
/*
int main()
{
    srand(time(NULL));
    
    int n = 1000000;
    int *arr = new int[n];
    
    // fill array
    for(int i{0}; i<n; i++)
    {
        arr[i] = rand();// random value
    }
    
    double t1 = clock();
    ourQuickSort(arr, 0, n-1);// sort an array
    double funcTime = clock() - t1;
    
    cout << "time: " << funcTime/CLOCKS_PER_SEC << endl;// to find seconds
    
//    for(int i{0}; i<n; i++)
//    {
//        cout << arr[i] << endl;
//    }
    
    delete [] arr;
    
    return 0;
}
*/
