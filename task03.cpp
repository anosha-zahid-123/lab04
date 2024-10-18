#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter a age"<<endl;
    cin>>age;
    if(age >=18){
        cout<<"the vote is eligible"<<endl;
    }
    else if (age <=18){
        cout<<"the vote is not eligible"<<endl;
    }
 return 0;
}