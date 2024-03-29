#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d)
    {
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
node* buildTree(node* root)
{
   int data;
   cout<<"Enter data to enter: "<<endl;
   cin>>data;
   root=new node(data);
   if(data==-1)
   {
    return NULL;
   }
   cout<<"Enter data for inserting in left of: "<<data<<endl;
   root->left=buildTree(root->left);
   cout<<"Enter data for inserting in right of: "<<data<<endl;
   root->right=buildTree(root->right);
   return root;
}
//levelorder traversal also known as bfs
void levelOrderTraversal(node* root)
{
    queue<node*>q;
    q.push(root);
    q.push(NULL); //print level wise
    while(!q.empty())
    {
        node* temp=q.front();
        q.pop();
        if(temp==NULL)//previous level has been traversed 
        {
           cout<<endl;
           if(!q.empty()) //child are present
           {
            q.push(NULL);
           }
        }
        else{
        cout<<temp->data<<" ";
        if(temp->left)
        {
            q.push(temp->left);
        }
        if(temp->right)
        {
            q.push(temp->right);
        }
        }
        
    } 
}
//inorder traversal
void inorder(node* root)
{
    //FOLLOW LNR
    //Base case
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(node* root)
{
    //FOLLOW LRN
    //Base case
    if(root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
void preorder(node* root)
{
    //FOLLOW NLR
    //Base case
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
    
}
void buildTreeFromLevel(node* &root)
{
    queue<node*>q;
    cout<<"Enter data for root "<<endl;
    int data;
    cin>>data;
    root=new node(data);
    q.push(root);
    while(!q.empty())
    {
        node* temp=q.front();
        q.pop();
        cout<<"Enter left node for: "<<temp->data<<endl;
        int leftData;
        cin>>leftData;
        if(leftData!=-1)
        {
            temp->left=new node(leftData);
            q.push(temp->left);
        }
        cout<<"Enter right node for: "<<temp->data<<endl;
        int rightData;
        cin>>rightData;
        if(rightData!=-1)
        {
            temp->right=new node(rightData);
            q.push(temp->right);
        }
    }
}
int main()
{
    node* root=NULL;
    /*root=buildTree(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    //level order traversal
    cout<<"Printing level order traversal: "<<endl;
    levelOrderTraversal(root);
    cout<<"Inorder Traversal: "<<endl;
    inorder(root);
    cout<<"Postorder Traversal: "<<endl;
    postorder(root);
    cout<<"Preorder Traversal: "<<endl;
    preorder(root); */
    buildTreeFromLevel(root);
    levelOrderTraversal(root);
    return 0;
}