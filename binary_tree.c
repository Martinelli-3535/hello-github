#include <stdio.h>
#include <stdlib.h>
#include <string,h>
#include <memory.h>

#define MAX_WORD_SIZE 100 
#define MAX_MEANING_SIZE 200

// data type
typedef struct {
	char name[MAX_WORD_SIZE];
	char phone_number[MAX_MEANING_SIZE];
}element;

// structure of node

typedef struct { 
	element key; 
	struct TreeNode *left, *right; //self-referential structures, move to left or right
}TreeNode;

/* if e1<e2, return -1
   if e1==e2, return 0
   if e1>e2, return 1  */

int compare(element e1, element e2)
{
	return strcmp(e1.name, e2.name);
}

//printf method in binary search tree
void display(TreeNode* p)
{
	if (p != NULL) {
		display(p->left); //recursive method
		printf("%s:%s\n", p->key.name, p->key.phone_number); //LVR search
		display(p->right);
	}
}

// search(), insert_node(), min_value_node(), delete_node(), inorder() 

TreeNode* search(TreeNode* root, element key)
{
    TreeNode* p = root;
    while (p != NULL) {
        if (compare(key,p->key) == 0)
            return p;

        else if (compare(key,p->key) > 0)
            p = p->right;

        else if (compare(key,p->key) < 0)
            p = p -> left;
    }
    return p;
}

TreeNode* insert_node(TreeNode* node, element key)
{
    TreeNode* temp = (TreeNode*)malloc(sizeof(TreeNode));
    
}