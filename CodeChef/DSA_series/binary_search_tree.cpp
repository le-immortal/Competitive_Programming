#include<bits/stdc++.h>
using namespace std;

class node{
	int data;
	public:
	node* right;
	node* left;
	node(int x){
		data = x;
		right = NULL;
		left = NULL;
	}
	node* insert(node* head, int x);
	void inorder(node* head);
	void lefttree(node* head);
};

node* node::insert(node* head, int x){
	if(head == NULL){
		head = new node(x);
		return head;
	}
	else{
		node* n = new node(x);
		node* temp = head;
		while(temp != NULL){
			if(x > temp->data){
				if(temp->right)
					temp = temp->right;
				else{
					temp->right = n;
					break;
				} 

			}
			else{
				if(temp->left)
					temp = temp->left;
				else{
					temp->left = n;
					break;
				} 
			}
		}
	}
	return head;
}

void node::inorder(node* head){
	if(head == NULL){
		return;
	}
	inorder(head->left);
	cout << head->data << " ";
	inorder(head->right);

}

void node::lefttree(node*head){
	if(head == NULL){
		return;
	}
	else{
		cout << head->data<< " ";
		lefttree(head->left);

	}
}
int main(){

	int a = 0;
	node* head = NULL;
	while(a !=-1){
		cin >> a;
		head = head->insert(head, a);
	}
	head->inorder(head);
	cout << endl;
	head->lefttree(head);	
}