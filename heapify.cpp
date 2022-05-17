#include<iostream>
using namespace std;


void heapify(int arr[], int size, int i)
{
    int index = i;
    int leftnode = index * 2;
    int rightnode = (index * 2) + 1;

    if(leftnode < size && arr[index] < arr[leftnode])
    {
        index = leftnode;
    }
    if(rightnode < size && arr[index] < arr[rightnode])
    {
        index = rightnode;
    }

    if(index != i)
    {
        swap(arr[index], arr[i]);
        heapify(arr, size, index);
    }
}


int main()
{

    int arr[] = {-1,54,53,55,52,50};
    int size = sizeof(arr) / sizeof(int);

    cout<<"\nHeap before Heapify: ";
    for (int i = 1; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }

    for (int i = size/2; i > 0; i--)
    {

        heapify(arr, size, i);
    }

    cout<<"\nHeap after Heapify: ";
    for (int i = 1; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    

    cout<<endl;
    return 0;
}