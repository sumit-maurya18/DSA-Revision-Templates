#include<bits/stdc++.h>
using namespace std;


//Merge logic for two sorted parts
void mergePhase(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp; //temporary array to store sorted part of array

    int left = low, right = mid + 1;

    //Comparing two sorted parts of array
    while(left <= mid && right <= high)
    {
        //If left part has smallest element move it to temporary and increment left by 1
        if(arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }

        //If right part has smallest element move it to temporary and increment right by 1
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    //If right part is exhausted and left part has still elements
    while(left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    //If left part is exhausted and still right part has elements
    while(right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    //Copying into the original array
    for(int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

//Merge Sort function
void mergeSort(vector<int> &arr, int low, int high)
{
    //Divide the array into two parts
    if(low >= high)
    return;

    int mid =low + (high - low) / 2;

    mergeSort(arr, low, mid); //Call merge sort for first half

    mergeSort(arr, mid + 1, high); //Call merge sort for second half

    mergePhase(arr, low, mid, high); //Merge both the part
}

//Print the output of the sorted array
void print(vector<int> &arr)
{
    for(auto num : arr)
    {
        cout << num << " ";
    }
}
int main()
{
    vector<int> arr = {1, 5, 6, 1, 3, 8, 12, 6, 3, 2, 9};

    mergeSort(arr, 0, arr.size() - 1);

    print(arr);

    return 0;
}