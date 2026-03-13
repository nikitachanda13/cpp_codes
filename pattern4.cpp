#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:  ";
    cin>>n;
    char ch = 'A';
    for(int i=0; i<=n-1; i++){
      
        for(int j=0; j<=n-1; j++){
            cout<<ch<<"  ";
            ch++;
            

        }
        cout<<endl;
    }
    cout<<"the pattern :"<<ch<<endl;
    return 0;
}