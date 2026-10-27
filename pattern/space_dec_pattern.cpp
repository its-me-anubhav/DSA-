	
		#include <iostream>
using namespace std;
int main() {
    int n;
    cin >>n;
    int i = 1;
    while (i <= n) {
        int space = 1;
        while( space <= n - i) {
            cout << ' ';
            space = space + 1;
         } 
         int j = 1;
         	int m = i;
            while ( j <= i ) {
            
            cout << m;
            m = m + 1;
            j = j + 1;
        }
        int k = i;
        int p = k ;
        while(k > 1) {
        	cout <<k;
        	k = k - 1;
		}
		 p--;
              cout << endl;
        i = i + 1;
    }
   

         cout << endl;
        i = i + 1;
}
    