#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* CreateNode(int value){
    struct node* newNode= new node;
    newNode->data=value;
    newNode->left=newNode->right=NULL;
    return newNode;
}
// ___________________________________________
struct node* Search_element(struct node* root,int value)
{
    if(root==NULL)
        return NULL;
    if(root->data==value)
        return root;
    if(value<root->data)
        return Search_element(root->left,value);
    if(value>root->data)
        return Search_element(root->right,value);
}

struct node* insert(struct node *root,int data)
{
    if(root==NULL)
        return CreateNode(data);
    if(data<root->data)
        root->left=insert(root->left,data);
    else
        root->right=insert(root->right,data);
    return root;
}

void inorderTraversal(struct node* root)
{
    if(root==NULL) return;
    inorderTraversal(root->left);
    cout << " -> " << root->data;
    inorderTraversal(root->right);

}
int main()
{
    struct node* root=NULL;
    root = insert(root,8);
    root = insert(root,3);
    root = insert(root,1);
    root = insert(root,6);
    root = insert(root,7);
    root = insert(root,10);
    root = insert(root,14);
    root = insert(root,4);

    cout << "INORDER : ";
    inorderTraversal(root);
    cout << endl;
    if(Search_element(root,14))
        cout << "Search is Found..........";
    else 
        cout <<"NOT found.......!";

    return 0;
}