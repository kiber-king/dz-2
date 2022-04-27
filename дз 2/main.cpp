#include "δη 2.h"

int summ(int* arr, unsigned size) {
    int sum = 0;
    for (int i = 1; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

void (*izm(int* arr, unsigned size))(int*, unsigned)
{
    int sum = summ(arr, size);
    if (sum == arr[0])
    {
        return inverse;

    }
    else if (sum > arr[0])
    {
        return sortvozr; 
    }
    else
    {
        return sortub;
    }
}


int main() {
    int arr[6] = { 46, 33, 21, 5, 67, 0 };

    //map(arr, 6, random);
    //for (int i = 0; i < 6; i++) {
    //    cout << arr[i] << " ";
    //}
    //cout << endl;

    void (*ukaz)(int* arr, unsigned size);
    ukaz = izm(arr, 6);
    ukaz(arr, 6);
    for(int i=0; i<6; i++){
        cout << arr[i]<<" ";
}
    cout << endl;

}