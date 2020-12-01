#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of strings. ";
    string si;
    cin>>n;
    vector<string> s{};
    for(int i=0;i<n;i++){
        cin>>si;
        s.push_back(si);
    }
    sort(s.begin(),s.end());
    cout<<"\n After sorting:\n";
        for(int i=0;i<n;i++){
        cout<<s[i]<<"\n";
    }
}