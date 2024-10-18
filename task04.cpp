#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter marks"<<endl;
    cin>>marks;
    if (marks>=90){
        cout<<"grade A"<<endl;
    }
    else if (marks >=75 && marks <=89){
        cout<<"grade B"<<endl;
    }
    else if (marks>=50 && marks <=74){
        cout<<"grade C"<<endl;
    }
    else if (marks <50){
        cout<<"grade F"<<endl;
    }
return 0;
}