#include<bits/stdc++.h>
using namespace std;

#define MAX 100

class Stack {

int top;

public: 
  int a[MAX];
  Stack() {
    this->top = -1;
  }
  // bool push(int x);
  
  bool push(int d) {
    if(top == MAX-1) {
      cout<<"Overflow!"<<endl;
      return false;
    }
    else {
      a[++top] = d;
      return true;
    }
  }

  bool isEmpty() {
    return top < 0 ? true:false;
  }  

  bool pop() {
    if(top < 0) {
      cout<<"UnderFlow!"<<endl;
      return false;
    }
    else {
      cout<<a[top--]<<" deleted"<<endl;
      return true;
    }
  }

  bool peek() {
    if(this->isEmpty()) {
      cout<<"Stack is empty!"<<endl;
      return false;
    }
    else {
      cout<<"Top element is: "<<a[top]<<endl;
      return true;
    }
   }
};

void solve(){

  Stack st;
  st.push(5);
  st.push(10);
  st.push(15);
  st.peek();
  st.pop();
  st.peek();
  st.pop();
  st.pop();
  st.pop();
  st.peek();
  

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