#include<iostream>
using namespace std;



    
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int main(){
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
    	char startingch= 'A' + n - i;
        int j = 1;
        while(j<=i){
            char ch = startingch + j - 1;
            cout<<ch;
            j++;
            ch++;
        }
        
        cout<<endl;
        i++;
    }

}

