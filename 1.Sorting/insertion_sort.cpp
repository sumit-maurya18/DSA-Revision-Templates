#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &arr)
{
    int n = arr.size();

    for(int i = 0; i < n; i++)
    {
        int j = i;

        while(j > 0 && (arr[j - 1] > arr[j]))
        {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }

    for(auto num : arr)
    cout << num << " ";
}

int main()
{
    vector<int> arr = {14, 9, 15, 12, 6, 8, 13};

    insertionSort(arr);
    return 0;
}