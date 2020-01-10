#include <iostream>
#include <string>
using namespace std;
int main()
{
 int x , sum = 0;
    cout <<"Enter x: ";
    cin >> x;
    sum = sum + x;
while (x != 0){
    cout <<"Enter x: ";
    cin >> x;
    if(x >0){
        sum = sum+x;}
}  
 cout << "sum = "<<sum+x;
 return 0;
 
}
