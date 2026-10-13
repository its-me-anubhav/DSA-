#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    // for (int i = 0; i < n; i++) {
         
    //      // prit space
    //     for (int j = 0; j < n ; j--) {
    //         cout << "*";
    //     }
        
    //     cout << endl;
    // }


  for(int i=0; i<n; i++){

    // spaces
    for(int j=0; j<i; j++){
        cout<<" ";
    }

    // stars
    for(int j=0; j<2*(n-i)-1; j++){
        cout<<"*";
    }

    cout<<endl;
} 
}