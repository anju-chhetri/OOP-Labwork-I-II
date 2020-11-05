#include <iostream>
using namespace std;
#define CF 39.3700787

class CONVERSION{
     private:
         float inch, foot, meter;
     public:
         CONVERSION(float m){
             meter = m;
         }
         CONVERSION (){
             meter=0;
             }
         void convert(){
             int r=meter*CF;
             foot=r/12;
             inch=r%12;
         }
         void display(){
             cout<<"The result is : "<<foot<<" Foot "<< inch<<" inch";
         }
 };

 int main(){
     CONVERSION c;
     float n;
     cout<<"Enter the distance in meter : ";
     cin>>n;
     c=n; //c(n)
     c.convert();
     c.display();
 }



