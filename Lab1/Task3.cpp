#include <iostream>
using namespace std;
#define PIE 3.14
class area{
    private : 
        float r, l, b;
    public :
        void ask_circle(){
            cout<<"Enter the radius of circle : ";
            cin>>r;
        }
        void ask_rectangle(){
            cout<<"Enter the length and breadth : ";
            cin>>l>>b;
        }
        void operator *(){
            cout<<"area of circle : "<<PIE * r *r;
            cout<<"\n Area of raduis : "<<l*b;

        }

};

int main(){
    area a;
    a.ask_circle();
    a.ask_rectangle();
    *a;
}