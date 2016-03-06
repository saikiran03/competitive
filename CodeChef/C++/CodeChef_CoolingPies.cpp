#include <iostream>
using namespace std;

void sort(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
    int temp;
    for(int i=0; i<size; i++)
    {
        for(int j=i; j<size; j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << endl;
    return;
}

int main()
{
    int test,size,i,j = 0;
    cin >> test;
    while(test--)
    {
        cin >> size;
        int pie[size],rack[size];
        for(i=0; i<size; i++)
        {
            cin >> pie[size];
        }
        for(i=0; i<size; i++)
        {
            cin >> rack[size];
        }
        sort(pie,size);
        sort(rack,size);
        i = 0;
        while(j<size)
        {
            if(pie[i]<rack[j])
            {
                i++;
            }
            j++;
        }
        j = 0;
        cout << i << endl;
    }
}
