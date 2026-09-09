#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &arr)
{
    int n = arr.size();

    for(int i = 0; i < n; i++)
    {
        int minIndex = i;
        int findIndex = i;

        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[findIndex])
            {
                findIndex = j;
            }
        }

        swap(arr[minIndex], arr[findIndex]);
    }

    for(auto num : arr)
    cout << num << " ";
}

int main()
{
    vector<int> arr = {13, 46, 24, 52, 20, 9};

    selectionSort(arr);

    return 0;
}