#include <iostream>
using namespace std;


class MATRIX{
    private:
        int mat1[3][3];
        int r;
    public:
        void ask(){
            cout<<"\n";
            for(int i=0; i<3;i++){
                for (int j=0;j<3;j++){
                    cout<<"Matrix["<<i+1<<"]["<<j+1<<"] : ";
                    cin>>mat1[i][j];
                }
            }
        }
        MATRIX operator *(MATRIX md){
            MATRIX ml;
            cout<<"\nAfter multiplication : \n";
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    int m=0;
                    for (int k=0;k<3;k++){
                        r =mat1[i][k] * md.mat1[k][j];
                        m=m+r;
                    }
                    ml.mat1[i][j]=m;
                }
             }
            return ml; 
         }
    void display();
};
void MATRIX :: display(){
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<mat1[i][j]<<" ";
        }
        cout<<"\n";
    }
}

int main(){
    MATRIX ma,mb,mc;
    cout<<"\nFor First martrix : \n";
    ma.ask();
    cout<<"\nFor Second Matrix : \n";
    mb.ask();
    mc=ma*mb;
    mc.display();
}