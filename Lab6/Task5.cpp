#include<iostream>
using namespace std;
class PARENT1{
    public:
    PARENT1(){
        cout<<"\nconstructor in parent1 .";
    }
    ~PARENT1(){
        cout<<"\ndestructor in parent1 .";
    }
};
class PARENT2{
    public:
        PARENT2(){
            cout<<"\nconstructor in parent2.";
        }
        ~PARENT2(){
            cout<<"\ndestructor in parent2.";
        }
};
class CHILD:public PARENT1,public PARENT2{
    public:
    CHILD(){
        cout<<"\nconstructor in child.";
    }
    ~CHILD(){
        cout<<"\ndestructor in child";
    }
};

int main(){
CHILD c;

}