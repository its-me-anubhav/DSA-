#include<iostream>
#include<vector>
using namespace std;
int main(){
  // vector< vector<int> >arr(5, vector<int>(10,-8));
  //rowSize -> ArraySize
  //columnSize -> array ith row size 
  // for(int i=0;i<arr.size();i++){
  //  for(int j=0;j<arr[i].size();j++){
  //   cout<<arr[i][j]<<" ";
  //  }
  //  cout<<endl;
  // }
  vector< vector<int> >brr;


  vector<int> vec1(5,1);
  vector<int> vec2(6,2);
  vector<int> vec3(7,3);

  brr.push_back(vec1);
  brr.push_back(vec2);
  brr.push_back(vec3);

  for(int i=0;i<brr.size();i++){
    for(int j=0;j<brr[i].size();j++){
      cout<<brr[i][j]<<" ";
    }
    cout<<endl;
  }
}