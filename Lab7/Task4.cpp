#include <iostream>
using namespace std;

class PARENT{
    public:
     virtual void show(){
        cout<<"PARENT ";
    }
};
class CHILD:public PARENT{
    public:
    void show(){
        cout<<"CHILD";
    }
};
int main(){
    PARENT *p=new CHILD();
    p->show();
}