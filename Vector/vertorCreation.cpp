#include<iostream>
#include<vector>
using namespace std;

void print(vector<char>v){
  int size=v.size();
  cout<<"Printing vector:";
  // for(int i=0;i<size;i++){
  //   // cout<<v[i]<<" ";  Used to cout statement to print the vector
  //    cout<<v.at(i)<<" "; Another way to used the cout statement to print the vector 
  // }

  // another way to print vector for loop 
  // for(auto it:v){
  //   cout<<it;
  // }
  cout<<endl;
}
 int main (){

    vector<char>v2;
    v2.push_back('a');
    v2.push_back('b');
    v2.push_back('c');
    v2.push_back('d');
    print(v2);
    cout<<"First Element of vector is :"<<v2[0]<<endl;
    cout<<"First Element of vector is :"<<v2.front()<<endl;;
    cout<<"Last Element of vector is :"<<v2[v2.size()-1]<<endl;;
    cout<<"Last Element of vector is :"<<v2.back();
     
      // vector initialisation types and when ever we want we can push data in the vector because vector is dynamic.
    // vector<int>v;  // default type with no specific data , 0 size

    // vector<int>v2(5,-1); // initialise with n size and the specific data 
    // print(v2);

    // // vector<int>v3={1,2,3,4,5};
    // vector<int>v3{1,2,3,4,5};
    // v3.push_back(56);
    // print(v3);

    // // how to copyy vector
    //  vector<int>v4(v3);
    //  print(v4);


  // v.push_back(1);
  // v.push_back(2);
  // v.push_back(3);
  // print(v);
  // cout<<"size:"<<v.size()<<endl;
  // cout<<"Capacity:"<<v.capacity()<<endl;;

  // // delete item from the vector
  // v.pop_back();
  // cout<<"vector after the pop instruction :";
  // print(v); 


  // taking input of the vector
  //  int n;cin>>n;
  //  for(int i=0;i<n;i++){
  //   int d;cin>>d;
  //   v.push_back(d);
  //  }
  //    print(v); 
  //  // push element in the vector after the declare the vector 
  //  for(int i=0;i<10;i++){
  //   v.push_back(80);
  //  }
  //  v.clear(); // use to clear the vector
  //  v.push_back(5);  
  //  print(v); 
 }