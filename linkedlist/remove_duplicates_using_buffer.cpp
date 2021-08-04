#include<bits/stdc++.h>
using namespace std;

class Node {
public: 
  int data;
  Node* next = NULL;

  Node(int d){
    data = d;
  }
};

void append(Node** head_ref, int d) {
  Node* new_node = new Node(d);
  new_node->next = *head_ref;
  *head_ref = new_node;
}

void print(Node* head) {
  Node* cur = head;
  while(cur != NULL) {
    cout<<cur->data<<" ";
    cur = cur->next;
  }
  cout<<endl;
}

void remove_duplicate(Node* head) {
  auto cur = head;
  map<int,bool> mp;
  mp[cur->data] = true;

  auto prev = cur;
  cur = cur->next;
  Node* temp;
  bool flag = 0;
  while(cur != NULL) {
    if(mp[cur->data]) {
      prev->next = cur->next;
      temp = cur;
      flag = 1;
    }
    else {
      mp[cur->data] = true;
      prev = cur;
    }
    cur = cur->next;
    if(flag) {
      flag = 0;
      delete temp;
    }
  }
}

void solve(){

  Node* head = NULL;
  append(&head, 4);
  append(&head, 4);
  append(&head, 10);
  append(&head, 10);
  append(&head, 13);
  append(&head, 13);
  append(&head, 13);
  append(&head, 20);
  append(&head, 20);
  print(head);

  remove_duplicate(head);

  cout<<"List after removing duplicates: ";

  print(head);

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