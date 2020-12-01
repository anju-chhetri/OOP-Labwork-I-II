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
class EMPLOYEE{
protected:
 int salary;
 string office_name;
 public:
    void ask_employee(){
        cout<<"\nEnter your salary and office name : ";
        cin>>salary>>office_name;
    }

};
class OFFICER:public EMPLOYEE,public STUDENT{
    private:
        int position;
    public:
        void ask_officer(){
            cout<<"\nEnter your position : ";
            cin>>position;
        }
        void show(){
            cout<<"\nYOUR DETAILS ARE : ";
            cout<<"\n"<<name<<"\n"<<marks<<"\n"<<roll_no<<"\n"<<salary<<"\n"<<office_name<<"\n"<<position;
        }
};
int main(){
    OFFICER o;
    o.ask();
    o.ask_employee();
    o.ask_officer();
    o.show();
}