#include<bits/stdc++.h>
using namespace std;

class Stack {

int top;
public: 
  Stack(int d) {
    top = d;
  }
  void print() {
    // as this is a pointer, you have to use "->" to access other members of the function
    cout<<this->top<<endl;
    cout<<"Hey!";
  }
};



void solve(){

  // to create and object of class and use constructor to initialize it
  Stack st(10);

  // Printing top from here will give error as by default visibility of members in fucntion is private.
  // to excess it, I can print it in a public funtion
  // cout<<st.top;
  st.print();

}

int32_t main(){
  // ios_base::sync_with_stdio(false);cin.tie(NULL);
  int tt; 
  tt=1;
  // cin>>tt;
  for(int t=1;t<=tt;t++){
    solve();
  }
} 