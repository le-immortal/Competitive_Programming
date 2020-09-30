#include<bits/stdc++.h>
using namespace std;

class node{
public:
	int data;
	node* left;
	node* right;
	node(int data){
		this->data = data;
		left = NULL;
		right = NULL;
	}
	node* findLCA(node*, int, int);
	void print(node* head){
		if(head == NULL)
			return;
		else{
			print(head->left);
			cout << head->data;
			print(head->right);
		}
	}
	bool ancestor(node*, int);
	int level(node* , int, int);
};
node* node::findLCA(node* head, int k1, int k2){
	if(head == NULL)
		return NULL;
	else{
		if(head->data == k1 || head->data == k2)
			return head;
		node* left = findLCA(head->left, k1, k2);
		node* right = findLCA(head->right, k1, k2);

		if(left && right)
			return head;
		else
			return left !=NULL ? left:right;
	}
}

bool node::ancestor(node* head, int k){
	if(head == NULL){
		return false;
	}
	else{
		if(head->data == k)
			return true;
	
	if(ancestor(head->left, k) || ancestor(head->right, k)){
		cout << head->data<< " ";
		return true;
	}
	return false;
}
}

int node::level(node* head, int k, int l){
	if(head == NULL)
		return 0;
	else{
		if(head->data == k)
			return l;
		int n = level(head->left, k , l+1);

		if(n != 0){
			return n;
		}
		n = level(head->right, k, l+1);
		return n;

	}
}
int main(){
	node* head = new node(1);
	head->left = new node(2);
	head->right = new node(3);
	head->left->left = new node(4);
	head->left->right = new node(5);
	head->right->left = new node(6);
	head->right->right = new node(7);	

	head->print(head);
	cout << endl;

	cout << (head->findLCA(head, 1,3))->data << endl;
	cout << (head->findLCA(head, 7,6))->data << endl;
	cout << (head->findLCA(head, 4,7))->data << endl;
	cout << (head->findLCA(head, 2,3))->data << endl;
	head->ancestor(head, 7);
	cout << endl;
	head->ancestor(head, 3);
	cout << endl;
	cout << head->level(head, 2, 1);
	cout << head->level(head, 7, 1);

}