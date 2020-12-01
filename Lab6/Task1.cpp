#include <iostream>
using namespace std;

class STUDENT{
    protected:
    int marks,roll_no;
    string name;
    public:
        void ask(){
            cout<<"Enter your name, marks and roll number : ";
            cin>>name>>marks>>roll_no;

        }
};
class LEADER:public STUDENT{
    private:
    int position;
    string party_name;
    public:
    void ask_party(){
        cout<<"\n Enter your position and party name : ";
        cin>>position>>party_name;
    }
    void show(){
        cout<<"\n"<<name<<"\n"<<marks<<"\n"<<roll_no<<"\n"<<position<<"\n"<<party_name;
    }
}; 
int main(){
    LEADER l;
    l.ask();
    l.ask_party();
    l.show();
}