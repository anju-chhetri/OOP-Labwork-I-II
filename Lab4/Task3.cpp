#include <iostream>
#include <cmath>
using namespace std;
class DESTINATION{
    private:
    float theta,r;
    public: 
        DESTINATION(){
            theta=0;
            r=0;
        }
        DESTINATION(float t,float ra){
            theta=t;
            r=ra;
        cout<<"\nThe polar co-ordinate is : ("<<theta<<" , "<<r<<")";

        }
};
class SOURCE{
    private:
        float x,y;
    public:
    SOURCE(float a,float b){
        x=a;
        y=b;
        cout<<"The co-ordinate ia : ("<<x<<" , "<<y<<")";
    }
    operator DESTINATION(){
        float t=atan(y/x);
        float r=x/cos(t);
        return DESTINATION(t,r);
    }

};
int main(){
    SOURCE s(20,30);
    DESTINATION d;
    d=s;
}