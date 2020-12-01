#include <iostream>
using namespace std;

class PARENT{
    public:
        void virtual test()=0;
};

class CHILD:public PARENT{
    public:
        void test(){}
};


int main(){
PARENT *par;
CHILD c,*ch;
par=&c;
ch=dynamic_cast <CHILD *>(par);
if(ch!=NULL)
    cout<<"conversion done.";

}
 