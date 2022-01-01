#include<stdio.h>
#include<stdlib.h>
struct node{
	int info;
	struct node* llink;
	struct node* rlink;
};
typedef struct node* NODE;
NODE insert_node(NODE root, int data){
	root=(NODE)malloc(sizeof(struct node));
	root->info=data;
	root->llink=NULL;
	root->rlink=NULL;
	if(root==NULL){
		printf("insufficient memory");
	}
	return root;
}
int main()
{
	NODE root;
	root=insert_node(root,1);
	root->llink=insert_node(root,2);
	root->rlink=insert_node(root,3);
	int level;
	display(root, level);

}