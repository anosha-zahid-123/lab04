#include<iostream>
using namespace std;
int main(){
    int num1;
    int num2;
    cout<<"enter a number"<<endl;
    cin>>num1;
    cin>>num2;
    char letter;
    cout<<"enter a letter"<<endl;
    cin>>letter;
    if (letter == '+'){
        cout<<"the sum is"<<num1+num2<<endl;
    }
    else if (letter == '-'){
        cout<<"the sub is"<<num1+num2<<endl;
    }
    else if (letter == '*'){
        cout<<"the mult is"<<num1+num2<<endl;
    }
    else if (letter == '/'){
        cout<<"the divi is "<<num1+num2<<endl;
    }

return 0;
}