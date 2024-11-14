#include <iostream>
using namespace std;
int main() {
    int n1;
    cout<<"Enter the Day of a Week"<<endl;
    cin>>n1;
    switch(n1)
{
    case 1:
    cout<<"The day is Monday";
    break;
    case 2:
    cout<<"The day is Tuesday";
    break;
    case 3:
    cout<<"The day is Wednesday";
    break;
    case 4:
    cout<<"The day is Thursday";
    break;
    case 5:
    cout<<"The day is Friday";
    break;
    case 6:
    cout<<"The day is Saturday";
    break;
    case 7:
    cout<<"The day is Sunday";
    break;
    default:
    cout<<"Enter Valid Day";
    break;
}   
  return 0;
}