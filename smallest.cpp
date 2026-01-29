//find smallest in array

#include <iostream>
using namespace std;
int main()
{
    int nums[]={5,22,15,1,-15,24};
    int size=6;
    int smallest = INT_MAX;
    for(int i=0; i<size; i++)
{
    if(nums[i]<smallest)
    {
        smallest=nums[i];

    }
}
cout<<"smallest=  "<<smallest<<"\n";
return 0;
}
