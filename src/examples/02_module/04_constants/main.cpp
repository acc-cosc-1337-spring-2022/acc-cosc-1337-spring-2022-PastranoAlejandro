#include<iostream>
#include "constants.h"
using std::cout;  using std::cin;

int main()
{
    auto radius = 0;
    cout<<"Enter Radius";
    cin>>radius;

    cout<<get_area_of_circle(radius)<<"\n";

    return 0;
}