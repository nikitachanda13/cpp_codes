#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:  ";
    cin>>n;
   
    for(int i=0; i<n; i++){
        char ch='A'+i-1;
        for(int j=0; j<i+1; j++){
            cout<<ch<<" ";
        }
        cout<< endl;
    }
    return 0;
}