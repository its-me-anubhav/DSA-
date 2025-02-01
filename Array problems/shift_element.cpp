#include<iostream>
using namespace std;
int main(){
  int arr[]={1,2,3,4,5};
  // jitne se shift krna ho utna ititialise kr lena
  int n =sizeof(arr)/sizeof(arr[0]); 

  // shifting the array element form left to right and put start element to the last element of the array
  int i;
  int temp=arr[n-1];
for(i=n-1; i>=1;i--) {
  arr[i]=arr[i-1];
}
    arr[0]=temp;
// Shift the element from  Right to left and put start element in the last 
//     int i;
//   int temp=arr[0];
// for(i=0;i<n;i++) {
//   arr[i]=arr[i+1];
// }
//     arr[n-1]=temp;
  
  
  // output after shifting
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  
}
cout <<endl;
return 0;

}