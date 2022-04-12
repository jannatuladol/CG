#include<iostream>
using namespace std;


int main()
{
    int array[80],i, j ,n, temp ;
    cout<<"Enter array size: ";
    cin>>n;
    cout<<"Enter array elements: ";
    for(i=0; i<n; i++)
        cin>>array[i];

    for(i=1; i<n; i++)
    {

        for (j=0; j<(n-i); j++)
            if (array[j]> array[j+i])


        {
            temp = array[j];
            array[j] = array[j+1];
            array[j+1]=temp;

        }
    }

     cout<<"The bubble sort array is : ";
     for(i=0; i<n; i++)
         cout<<" "<< array[i];

     return 0;

}
