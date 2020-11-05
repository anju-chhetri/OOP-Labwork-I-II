#include <iostream>
using namespace std;
#define CF 3.2808399

 class CONVERSION{
     private:
         float meter, inch, foot;
     public:
         CONVERSION(float f,float i){
             foot =f;
             inch=i;
         }
         operator float(){
            meter=foot+(inch/12);
             meter =meter/ CF;
             return meter;
         }
 };

 int main(){
int a,b;
cout<<"Enter the distance in foot and inch : ";
cin>>a>>b;
 CONVERSION c1(a,b); //c1=12,3
 float n=float(c1); //c1.operator float()
 cout<<"The result is : "<<n;
 }

