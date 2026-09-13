#include <iostream>
#include <vector>
using namespace std;

void bubble_sort(vector<int>& arr)
{
    int n = arr.size();
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - 1 - i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main()
{
    vector<int> a = {5, 3, 8, 4, 2};
    bubble_sort(a);
    cout << "排序结果：";
    for(int num : a)
    {
        cout << num << " ";
    }
    return 0;
}
