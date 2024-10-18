#include<iostream>
using namespace std;
int main(){
    string light;
    cout<<"enter a string"<<endl;
    cin>>light;
    if (light == "red"){
        cout<<"stop your vehicle"<<endl;
    }
    else if (light =="yellow"){
        cout<<"get ready to move"<<endl;
    }
    else if (light =="green"){
        cout<<"you can go"<<endl;
    }
    return 0;
}