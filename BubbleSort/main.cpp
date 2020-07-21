#include <iostream>
using namespace std;

void swapfunc(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void bubblesort(int arr[],int n)
{
    bool swapped;
    for(int i=0;i<n-1;i++)
    {
        swapped=false;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swapfunc(&arr[j],&arr[j+1]);
                swapped=true;
            }
        }
        if(swapped == false)
        {
            break;
        }
    }
}

int main()
{
    int arr[100],n;
    cout << "Enter your number of elements in the array: " << endl;
    cin>>n;
    cout << "Enter your array: " << endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bubblesort(arr,n);
    cout<<"The sorted array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
