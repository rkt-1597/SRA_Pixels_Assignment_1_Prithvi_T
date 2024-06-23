#include <iostream>
using namespace std;

void sortArray(int *arr, int num){
    int n=num; 
    int temp;

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(*(arr+i)>*(arr+j)){
                temp=*(arr+i);
                *(arr+i)=*(arr+j);
                *(arr+j)=temp;
            }
        }
    }
}

void printArray(int *arr, int num){
    int n=num; 

    for(int i=0; i<n; i++){
        cout<<*(arr+i)<<" ";
    }
    cout << endl;
}

int main() {
    int n;
    cout<<"Enter number of elements of array : ";
    cin>>n;
    cout<<"\nEnter elements of array : \n";
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"\nOriginal array: \n";
    printArray(arr, n);

    sortArray(arr, n);

    cout<<"Sorted array: ";
    printArray(arr, n);

    return 0;
}