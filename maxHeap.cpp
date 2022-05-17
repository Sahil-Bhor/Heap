#include<iostream>
using namespace std;


class Heap
{
    public:
    int size;
    int arr[10];

    Heap(){
        size =0;

    }

    void insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val;
        while(index > 1)
        {
            if(arr[index/2] < arr[index]){
                swap(arr[index/2], arr[index]);
                index= index/2;
            }
            else{
                return;
            }
        }
    }

    void deleteFromHeap()
    {
        if(size == 0)
        {
            return;
        }
        arr[1] =arr[size];
        size--;
        int i = 1;

        while(i < size)
        {
            int leftindex = i * 2;
            int rigthindex = (i*2)+1;
            if(leftindex < size && arr[i] < arr[leftindex])
            {
                swap(arr[i], arr[leftindex]);
            }
            else if(rigthindex < size && arr[i] < arr[rigthindex])
            {
                swap(arr[i], arr[rigthindex]);
            }
            else 
            {
                return;
            }
        }
        
    }

    void print()
    {
        cout<<"Heap: ";
        for (int i = 1; i <= size; i++)
        {
            cout<<arr[i]<<" ";
        }
        
    }

};

int main()
{
    Heap h1;
    h1.insert(23);
    h1.insert(43);
    h1.insert(12);
    h1.insert(32);
    h1.insert(19);

    h1.deleteFromHeap();

    h1.print();

    cout<<endl;
    return 0;
}