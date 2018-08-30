#include<stdio.h>
#include<stdlib.h>


// define structure of a node
//structure of a node is as follows:-


struct Node
{
    date timestamp;
    string data;

    int nodeNumber;
    string nodeId;
    string referenceNodeId;
    string childReferenceNodeId;
    string genesisReferenceNodeId;
    string HashValue;
    struct node *left,*right;
    string key;
};


// A function to create a new node

struct node *newNode(int data)
{
	struct node *temp = (struct node *)malloc(sizeof(struct node));
	temp->key = data;
	temp->left = temp->right = NULL;
	childReferenceNodeId = NULL;
	return temp;
}

/* A utility function to insert a new node with given key */

struct node* insert(struct node* node, int key)
{
	/* If the tree is empty, return a new node */
	if (node == NULL) return newNode(key);

	/* Otherwise, recur down the tree */
	if (key < node->key)
		node->left = insert(node->left, key);
	else if (key > node->key)
		node->right = insert(node->right, key);

	/* return the (unchanged) node pointer */

	return node;
}

// A function to do inorder traversal
//print the values

void inorder(struct node *root)
{

	if (root != NULL)
	{
		inorder(root->left);
		printf("%d \n", root->key);
		inorder(root->right);
	}
}

// Function to encrypt and decrypt the hash value
//password is a common key that is uses for encryption and decryption


void encrypt(string password[],string hashvalue)
{
    unsigned int i;
    for(i=0;i<strlen(password);++i)
    {
        password[i] = password[i] - hashvalue;
    }
}


//function for decryption

void decrypt(char password[],int hashvalue)
{
    unsigned int i;
    for(i=0;i<strlen(password);++i)
    {
        password[i] = password[i] + hashvalue;
    }
}



//Driver program to test above functions

int main()

{

	struct node *root = NULL;
	root = insert(root, 30);
	insert(root, 17);
	insert(root, 10);
    inorder(root);

    return 0;

}

