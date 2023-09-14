#include<iostream>
#include<iomanip>
using namespace std;
int main(){
int a;
   cout<<"Enter A number For The Table :";
   cin>>a;
   
  for (int i=1;i<11;i++){
  	cout<<a<<setw(4)<<"*"<<setw(4)<<i<<setw(2)<<"="<<setw(3)<<a*i<<endl;
  	
  }
  }