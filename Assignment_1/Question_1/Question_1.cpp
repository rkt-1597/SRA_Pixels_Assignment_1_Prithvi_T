#include<iostream>
using namespace std;

namespace array_1{
    void enter_elem(int arr[], int size_arr){
        for(int i=0; i<size_arr; i++){
            cin>>arr[i];
        }
    }

    void print_elem(int arr[], int size){
        for(int i=0; i<size; i++){
            if(i%3==0) {
                cout<<arr[i]<<" ";
            }
        }
        cout<<endl;
    }
}

namespace array_2{
    void enter_elem(int arr[][4], int rows){
        for(int i=0; i<rows; i++){
            for(int j=0; j<4; j++){
                cin>>arr[i][j];
            }
        }
    }

    void print_elem(int arr[][4], int rows){
        for(int i=0; i<rows; i++){
            for(int j=0; j<4; j++){
                if(j%3==0) {
                    cout<<arr[i][j]<<" ";
                }
            }
            cout<<endl;
        }
    }
}

int main(){
    int array_1Array[9];
    int array_2Array[3][4];

    cout<<"Enter elements of 1D array: ";
    array_1::enter_elem(array_1Array, 9);

    cout << "Enter elements of 2D array: ";
    array_2::enter_elem(array_2Array, 3);

    cout << "Elements of 1D array at index multiple of 3: ";
    array_1::print_elem(array_1Array, 9);

    cout << "Elements of 2D array at index multiple of 3: " << endl;
    array_2::print_elem(array_2Array, 3);

    return 0;
}