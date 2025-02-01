#include <iostream>
#include <string>
#include <vector>
// #include "student.cpp"  //merge two cpp files with the help of class.
using namespace std;
class Student         
{ // if the class in empty then the size of class is 1.
private:
int health;

public:
int level;
int star;
// string name;
// int nos;
void print(){
    // cout<<level<<endl; 
}
void Health(){
  return health;
}
void setHealth(int h){
  health=h;
}
};
int main(){
    // cout<<sizeof(s1);
       Hero Student;
      //  Student.health(56);
      // s1.level=1;
      // s1.star=23;
      cout<<"Student health is:"<< Student.getHealth() <<endl;
      // student.setHealth(45);
    
    // Student s2;
    // cout<<"level is:"<<s1.level<<endl;
    // cout<<"star is:"<<s1.star<<endl;
    return 0;
}