#include <iostream>
using namespace std;
int main(){
int age;
string name;
string result;
cout<<"Enter your name:"<<endl;
cin>> name;
cout<<"Enter your age"<<endl;
cin>> age;
switch(age){
    case 3:
    case 4:
    case 5:
        cout<<name<<" is "<<age<<", assigned to Preschool";
        break;
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
        cout<<name<<" is "<<age<<", assigned to Elementary School";
        break;
    case 11:
    case 12:
    case 13:
        cout<<name<<" is "<<age<<", assigned to Middle School";
        break;
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
        cout<<name<<" is "<<age<<", assigned to High SChool";
        break;

    default: cout<<"You are not going to school"<<endl;
}
}
