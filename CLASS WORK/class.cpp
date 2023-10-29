#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student         
{ // if the class in empty then the size of class is 1.
int id;
int age;
bool present;
// string name;
// int nos; 
void study(){
    cout<<"studying"<<endl; 
}
void sleep (){
    cout<<"sleeping"<<endl;
}
void bunk (){
    cout<<"rest"<<endl;
 }
};
int main(){
    cout<<sizeof(Student);
    // Student s1;
    // Student s2;
    return 0;
}