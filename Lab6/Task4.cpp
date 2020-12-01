#include<iostream>
using namespace std;
class PARENT{
    public:
    PARENT(){
        cout<<"\nconstructor in parent .";
    }
    ~PARENT(){
        cout<<"\ndestructor in parent .";
    }
};
class CHILD:public PARENT{
    public:
        CHILD(){
            cout<<"\nconstructor in child.";
        }
        ~CHILD(){
            cout<<"\ndestructor in child.";
        }
};

int main(){
CHILD c;

}