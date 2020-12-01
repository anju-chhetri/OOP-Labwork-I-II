#include <iostream>
using namespace std;

class STUDENT{
    protected:
    int roll_no;
    string name;
    public:
        void ask(){
            cout<<"Enter your name and roll number : ";
            cin>>name>>roll_no;

        }
};
class INTERNAL:public virtual STUDENT{
    protected:
    int i_marks;
    public:
        void ask_internal(){
        cout<<"\nInternal marks : ";
        cin>>i_marks;}

};
class EXTERNAL:public virtual STUDENT{
protected:
int e_marks;
public:
void ask_external(){
    cout<<"\nExternal marks : ";
    cin>>e_marks;
}};
class RESULT:public EXTERNAL,public INTERNAL{
    private:
    int total;
    public:
     void show(){
         cout<<"THE DETAILS ARE : ";
         cout<<"\n"<<name<<"\n"<<roll_no<<"\n"<<(e_marks+i_marks);
     }
};
int main(){
    RESULT r;
    r.ask();
    r.ask_internal();
    r.ask_external();
    r.show();
}