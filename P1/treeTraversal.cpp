#include<iostream>
using namespace std;
struct node
{
    int value;
    struct node* left;
    struct node* right;
};
void preordertravarsal(struct node* root){
    if(root==NULL)
        return;
    cout << "->"<< root ->value;
    preordertravarsal(root->left);
    preordertravarsal(root->right);
}

void Inordertravarsal(struct node* root){
    if(root==NULL)
        return;
    Inordertravarsal(root->left);
    cout << "->"<< root ->value;
    Inordertravarsal(root->right);
}

void POsrordertravarsal(struct node* root){
    if(root==NULL)
        return;
    POsrordertravarsal(root->left);
    POsrordertravarsal(root->right);
    cout << "->"<< root ->value;
}


struct node* CreatNode(int val){
    struct node* newNode = new node;
    newNode ->value= val;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}
struct node* LeftNode(struct node* root , int val){
    root->left= CreatNode(val);
    return root -> left;
}
struct node* ReftNode(struct node* root , int val){
    root->right= CreatNode(val);
    return root->right;
}
int main()
{
    struct node* root = CreatNode(1);
    LeftNode(root,12);
    ReftNode(root,9);

    LeftNode(root->left,5);
    ReftNode(root->left,6);
    
    cout << "PREorder : " << endl;
    preordertravarsal(root);
    cout << endl;
    cout << "Inorder : " << endl;
    Inordertravarsal(root);
    cout << endl;

    cout << "POSTorder : " << endl;
    POsrordertravarsal(root);

    return 0;
}