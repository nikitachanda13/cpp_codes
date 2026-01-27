#include <iostream>
using namespace std;
int main(){
    int ch;
    cout<<"enter a character:"<<"\n";
    cin>>ch;
    if(ch>=65 && ch<=90){
        cout<<"it is a uppercase"<<"\n";
    }
    else{
        cout<<"it is lowercase"<<"\n";
    }
    return 0;
}