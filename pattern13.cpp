#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int i=1; i<=n; i++){

        // spaces
        for(int j=1; j<i; j++){
            cout<<"  ";
        }

        // numbers
        for(int j=1; j<=n-i+1; j++){
            cout<<i<<" ";
        }

        cout<<endl;
    }

    return 0;
}