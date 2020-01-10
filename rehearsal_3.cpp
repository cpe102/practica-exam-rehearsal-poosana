#include <iostream>
#include <string>
#include <cmath>
using namespace std;

double sumSqrt(int x){
    int i=1;
   double sum =0 ,y;
   if(x>0){
       while(i>0){
       if(i>x){return sum;}else{
           y=1/pow(i,0.5);
           sum=sum+y;
           i++;
       }
   }}else{return 0;}
   }
    

    

int main()
{
    double a = sumSqrt(-5);
    double b = sumSqrt(3);
    double c = sumSqrt(5);
    double d = sumSqrt(2);
    double e = sumSqrt(1);
    double f = sumSqrt(0);
    double g = sumSqrt(-1);
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n";

}
