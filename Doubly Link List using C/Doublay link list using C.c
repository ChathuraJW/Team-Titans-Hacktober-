#include<stdio.h>
#include<stdlib.h>

//create linklist node  structure using struct
struct linkListNode{
	struct linkListNode *previous;
	int data;
	struct linkListNode *next;
};
typedef struct linkListNode *node;

node head=NULL;
node start=NULL;

//code for create node
node createNode(){
	node newNode;
	newNode=(node)malloc(sizeof(node));
	return newNode;
}

//code for add a node into the list
addNode(int data){
	node myNode=createNode();
	myNode->previous=head;
	myNode->data=data;
	myNode->next=NULL;
	if(head==NULL)
		start=myNode;
	else
		head->next=myNode;
	head=myNode;
}

int main(){
	
	return 0;
}
