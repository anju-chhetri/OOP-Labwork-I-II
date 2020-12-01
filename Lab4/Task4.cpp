#include <iostream>
#include <cmath>
using namespace std;

class SOURCE{
    private:
        float x,y;
    public:
    SOURCE(float a,float b){
        x=a;
        y=b;
        cout<<"The co-ordinate ia : ("<<x<<" , "<<y<<")";
    }
    float xco(){
        return x;
    }
    float yco(){
        return y;
    }


};

class DESTINATION{
    private:
    float theta,r,x,y;
    public: 
        DESTINATION(){
            theta=0;
            r=0;
        }
        DESTINATION(SOURCE s){
            x=s.xco();
            y=s.yco();
            theta =atan(y/x);
            r=x/cos(theta);
            cout<<"\nThe polar co-ordinate is : ("<<theta<<" , "<<r<<")";

        }
};

int main(){
    SOURCE s(20,30);
    DESTINATION d;
    d=s;//DESTINATION(s)
}