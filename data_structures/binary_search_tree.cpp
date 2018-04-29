#include<iostream>
#include<stdlib.h>
using namespace std;
//#include "binary_search_tree.cpp"

typedef struct BinarySearchTree{
	int value;
	struct BinarySearchTree* parent;
	struct BinarySearchTree* left;
	struct BinarySearchTree* right;
}BST;

typedef BST* BSTptr;
#define BSTBOX (BSTptr)malloc(sizeof(BST))

void insertNode(BSTptr, BSTptr);
int getMaxLevel(BSTptr, int level=0);
void printBST(BSTptr, int, int flag=0);

int main(){
	int num;
	cout<<"Enter the number of nodes you want to enter: "; cin>>num;
	int data[num];
	BSTptr head, temp;
	int flag = 0;
	for(int i=0; i<num; i++){
		cout<<"Enter value "<<(i+1)<<": "; cin>>data[i];
		BSTptr node = BSTBOX;
		node->value = data[i];
		node->parent = NULL;
		node->left = NULL;
		node->right = NULL;
		if(!flag){
			head = node;
			flag = 1;
		}else{
			insertNode(head, node);
		}
	}
	
	int maxLevel = getMaxLevel(head);
	//cout<<maxLevel<<endl;
	printBST(head, maxLevel);
}

void insertNode(BSTptr head, BSTptr node){
	if(node->value > head->value){
		if(head->right == NULL){
			head->right = node;
			node->parent = head;
		}else{
			insertNode(head->right, node);
		}
	}else{
		if(head->left == NULL){
			head->left = node;
			node->parent = head;
		}else{
			insertNode(head->left, node);
		}
	}
}

int getMaxLevel(BSTptr head, int level){
	if(head==NULL) return level;
	level++;
	int llevel = getMaxLevel(head->left, level);
	int rlevel = getMaxLevel(head->right, level);
	if(llevel>rlevel && llevel>level){
		return llevel;
	}else if(rlevel>llevel && rlevel>level){
		return rlevel;
	}else{
		return level;
	}
}

void printBST(BSTptr node, int level, int flag){
	cout<<"Opps!"<<endl;
}


