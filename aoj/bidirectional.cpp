#include <iostream>
using namespace std;

class Node {
  public:
    Node* prev;
    Node* next;
    int key;
    Node(int k = -1) : key(k) {
      prev = this;
      next = this;
    }
};

Node* nil = new Node();

void print(bool f = false) {
  Node* n = nil;
  if(f) {
    do {
      cout << n->key << "<-";
      n = n->prev;
    } while(n->key != -1);
  }
  else {
    do {
      cout << n->key << "->";
      n = n->next;
    } while(n->key != -1);
  }
  cout << endl;

}

void insert(Node* x) {
  x->next = nil->next;
  x->prev = nil;
  nil->next = x;
  x->next->prev = x;
}

int main() {
  //nil->next = nil;
  //nil->prev = nil;

  Node* x = new Node(3);
  insert(x);
  insert(new Node(9));
  insert(new Node(4));
  insert(new Node(2));
  insert(new Node(1));
  insert(new Node(5));

  print();
  print(true);

  return 0;
}
