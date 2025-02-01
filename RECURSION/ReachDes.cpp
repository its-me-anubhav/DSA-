#include<iostream>
using namespace std;

void ReachHome(int dest,int src){
    cout<<" Source "<<src<<" Destination "<<dest<<endl;
    if(src==dest){
        cout<<"Home Pahunch Gya"<<endl;
        return;
    }
    // processing
    src++;

    // Recursive call
    ReachHome(dest,src);
}
int main(){
    int dest=10;
    int src=1;
    cout<<endl;
    ReachHome(dest,src);

}