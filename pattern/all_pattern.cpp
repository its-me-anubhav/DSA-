# include <iostream>
using namespace std;


// * * * * 
// * * * * 
// * * * * 
// * * * * 
// void print1(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }


// *
// **
// ***
// ****
// *****
// void print2(int n){
//      for (int i =0;i<n;i++){
//         for (int j =0;j<=i;j++){
//             cout <<"*";
//         }
//         cout << endl;
//      }
// }

// 1
// 12
// 123
// 1234
// void print3 (int n){
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<j;
//         }
//         cout <<endl;
//     }
// }


// 1
// 22
// 333
// 4444
// void print3 (int n){
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<i;
//         }
//         cout <<endl;
//     }
// }


// 1
// 22
// 333
// 4444
// void print3 (int n){
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<i;
//         }
//         cout <<endl;
//     }
// }


// * * * * * 
// * * * * 
// * * * 
// * * 
// * 
// void print3 (int n){
//     for(int i=1;i<=n;i++){
//         for(int j=0;j<n-i+1;j++){
//             cout<<"* ";
//         }
//         cout <<endl;
//     }
// }

// 12345
// 1234
// 123
// 12
// 1
// void print3 (int n){
//     for(int i=0;i<n;i++){
//         for(int j=1;j<n-i+1;j++){
//             cout<<j;
//         }
//         cout <<endl;
//     }
// }


void print3 (int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<n-i+1;j++){
            cout<<j;
        }
        cout <<endl;
    }
}

int main (){
    int n;
    cin>>n;

    // print1(n);

    print3(n);
}
