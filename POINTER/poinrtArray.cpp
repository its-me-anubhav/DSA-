#include<iostream>
using namespace std;
int main (){
    char ch='a';
    char *cptr=&ch;
    char p=ch; 
    char q=p;
    cout<<cptr<<endl;
    cout<<&cptr<<endl;

}