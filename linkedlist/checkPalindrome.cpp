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


// I could have also reverse the linkedlist and checked if the both are clone of each other

bool checkPalindrome(Node* head) {
  Node* slow = head;
  Node* fast = head;

  stack<int> s;
  while(fast->next != NULL  and fast->next->next != NULL) {
    s.push(slow->data);
    fast = fast->next->next;
    slow = slow->next;
  }

  if(fast != NULL) {
    slow = slow->next;
  }

  while(slow != NULL and s.size() > 0) {
    if(slow->data != s.top()) {
      return false;
    }
    else {
      slow = slow->next;
      s.pop();
    }
  }

  return slow == NULL and s.empty();

}

void solve(){

  Node* head = NULL;
  // append(&head, 4);
  // append(&head, 9);
  // append(&head, 1);
  // append(&head, 9);
  // append(&head, 4);

  append(&head, 4);
  append(&head, 9);
  append(&head, 1);
  append(&head, 9);
  append(&head, 5);
  
  cout<<"LinkedList 1: ";
  print(head);

  cout<<checkPalindrome(head);

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