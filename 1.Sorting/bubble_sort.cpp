#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr)
{
    /*The core idea is
    Compare adjacent element
    left > right -> swap them
    after every pass -> greatest element will move to the ednd of  t he array
    */
   int n = arr.size();

   for(int i = 0; i < n - 1; i++)
   {
    bool swapped = false;

    for(int j = 0; j < n - i - 1; j++)
    {
        if(arr[j] > arr[j + 1])
        {
            swap(arr[j], arr[j  +1]);
            swapped = true;
        }
    }
    if(!swapped)
        break;
   }

   for(auto num : arr)
   {
    cout << num << " ";
   }
}

int main()
{
    vector<int> arr = {13, 43, 54, 1, 13, 43, 65};

    bubbleSort(arr);
    return 0;
}