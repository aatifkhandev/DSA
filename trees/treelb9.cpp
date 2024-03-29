//level order traversal
//building binary tree
#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node *right;

    //constructor
    Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }

};
Node *buildtree(Node *root){
    cout<<"enter a data : "<<endl;
    int data;
    cin>>data;
    root = new Node(data); //pegle root node me daalre
    if(data==-1){
        return NULL;
    }
    cout<<"insert data for inserting in left"<<data<<endl;
    root->left=buildtree(root->left);
    cout<<"enter data for inserting in right"<<data<<endl;
    root->right=buildtree(root->right);
    return root;

}


void levelordertraversal(Node* root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        Node*temp = q.front();
        q.pop();

        if(temp == NULL) { 
            //purana level complete traverse ho chuka hai
            cout << endl;
            if(!q.empty()) { 
                //queue still has some child ndoes
                q.push(NULL);
            }  
        }
        else{
            cout << temp -> data << " ";
            if(temp ->left) {
                q.push(temp ->left);
            }

            if(temp ->right) {
                q.push(temp ->right);
            }
        }
    }

}







int main(){
    Node *root =NULL;
    //creating a tree
    root=buildtree(root);
    cout<<"printing level order traversal"<<endl;
    levelordertraversal(root);
    return 0;
}