#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    vector<int> arr(n);

    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int smallest=arr[0];
    int largest=arr[0];

    for(vector<int>::iterator it=arr.begin()+1; it!=arr.end(); ++it){
        if(*it<smallest){
            smallest=*it;
        }
        if(*it>largest){
            largest=*it;
        }
    }

    cout<<"Smallest: "<<smallest<<endl;
    cout<<"Largest: "<<largest<<endl;

    return 0;
}