#include <iostream>
using namespace std;

int main(){
    int arr[2];
    int *ptr=arr;

    ptr=ptr+1;
    int size = (char*)ptr - (char*)arr;

    cout<<"Size of int data type: "<<size<<" bytes"<<endl;
    return 0;
}