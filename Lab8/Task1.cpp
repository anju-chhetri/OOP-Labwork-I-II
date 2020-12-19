#include <iostream>
#include <fstream>
using namespace std;

class STUDENT{
    private:
        char name[30],address[30];
        int roll,marks;
    public:
            void get_data(){
                cout<<"\nNAME : ";
                cin>>name;
                cout<<"ROLL NUMBER : ";
                cin>>roll;
                cout<<"MARKS : ";
                cin>>marks;
                cout<<"ADDRESS : ";
                cin>>address;

            }

        void show_data(){
       
            cout<<"\nNAME: "<<name;
            cout<<"\nROLL NUMBER :"<<roll;
            cout<<"\nMARKS: "<<marks;
            cout<<"\nADDRESS :"<<address;
        }
        int search(int a){
			if(roll==a)
				return 1;
			else
				return 0;
		}
	
        void add_account(){
            fstream fi;
            STUDENT s;
            cout<<"ADD THE STUDENT ACCOUNT : ";
            fi.open("student.txt",ios::app);
            s.get_data();
            fi.write((char *)&s,sizeof(s));
            fi.close();
        }
        void search_record(){
        	int roll_no;
        	STUDENT s;
        	fstream fi;
        	cout<<"ENTER THE ROLL NUMBER : ";
        	cin>>roll_no;
        	fi.open("student.txt",ios::in);
        	while(fi.read((char *)&s,sizeof(s))){
        		if(s.search(roll_no)){
				s.show_data();
				break;
				}}
		fi.close();
		}
		void modify_record(){
        	int roll_no;
        	int count=0;
        	STUDENT s;
        	fstream fi;
        	cout<<"ENTER THE ROLL NUMBER : ";
        	cin>>roll_no;
        	fi.open("student.txt",ios::in|ios::out|ios::ate);
        	fi.seekg(0,ios::beg);
        	while(fi.read((char *)&s,sizeof(s))){
        		count++;
        		if(s.search(roll_no)){
				s.get_data();
				int pos=(count-1)*sizeof(s);
				fi.seekg(pos,ios::beg);
				fi.write((char*)&s,sizeof(s));
				break;
				}}
		fi.close();
		}

void delete_record(){
	        int roll_no;
	        int count=0;
        	STUDENT s;
        	fstream fi;
        	cout<<"ENTER THE ROLL NUMBER : ";
        	cin>>roll_no;
        	fi.open("student.txt",ios::in);
        	fi.seekg(0,ios::beg);
        	while(fi.read((char *)&s,sizeof(s))){
			count++;
				}
				fi.close();
				fi.open("student.txt",ios::out);
        	for(int i=0;i<count;i++){
        		       	
        		if(!s.search(roll_no)){
					fi.write((char*)&s,sizeof(s));
				}
			
				}
		fi.close();
}

void count_record(){
        	int roll_no;
        	int count=0;
        	STUDENT s;
        	fstream fi;
        	fi.open("student.txt",ios::in);
        	fi.seekg(0,ios::beg);
        	while(fi.read((char *)&s,sizeof(s))){
        		count++;
				}
		fi.close();	
		int j=sizeof(s);
		cout<<"\nThe total number of records are: "<<count;
		cout<<"\nTotal size of file is : "<<count*j;
}


};
int main(){
    int choose;
    fstream fi;
    STUDENT st;
    cout<<"\n1. Write records to the file."<<"\n2. Read current records stored on the file."<<"\n3. Update a record on the file."<<"\n4. Search a record on the file."<<"\n5. Modify a record on the file."<<"\n6. Delete a record on the file."<<"\n7. Compute the no. of records and total file size. ";
    cout<<"\nChoose : ";
    cin>>choose;
    int n;
    switch(choose){
case 1:
    system("cls");
    cout<<"\n Enter the number of students : ";
    cin>>n;
    fi.open("student.txt",ios::out);
    
    for(int i=0;i<n;i++){
      st.get_data();
      fi.write((char *)&st,sizeof(st));       
}
      fi.close();
    break;

case 2:
	system("cls");
    fi.open("student.txt",ios::in);
    if(!fi){
            cout<<"ERROR! FILE Student.txt NOT FOUND.";
         break;
		 }
	
	while(fi.read((char *)&st,sizeof(st))){
    st.show_data();
}
	fi.close();
	break;

case 3:
    system("cls");
    st.add_account();
	break;

case 4: 
system("cls");
st.search_record();
break;

case 5:
	system("cls");
	st.modify_record();
	break;	
case 6: 
system("cls");
st.delete_record();
break;

case 7:
	system("cls");
	st.count_record();
	break;
     }
}
