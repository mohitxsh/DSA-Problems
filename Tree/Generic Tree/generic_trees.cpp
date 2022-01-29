#include<bits/stdc++.h>
using namespace std;
template<typename T>
class TreeNode{
    public:
    T data;
    vector<TreeNode<T>*> children;
    TreeNode(T data){
        this->data = data;
    }
};
//print at level k
void printAtLevelK(TreeNode<int>* root, int k){
    if(root==NULL) return;
    if(k==0){
        cout<<root->data<<", ";
        return;
    }
    for(int i=0;i<root->children.size();i++){
        printAtLevelK(root->children[i], k-1);
    }
}

//print tree recursively
void printTree(TreeNode<int>* root){
    cout<<root->data<<": ";
    for(int i=0;i<root->children.size();i++){
        cout<<root->children[i]->data<<", ";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++){
        printTree(root->children[i]);
    }
}

//taking input recursively
TreeNode<int>* takeInput(){
    int rootData;
    cout<<"Enter data: "<<endl;
    cin>>rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);
    int n;
    cout<<"Enter no. of children: "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        TreeNode<int>* child = takeInput();
        root->children.push_back(child);
    }
    return root;
}

//taking input level wise
TreeNode<int>* takeInputLevelWise(){
    int rootData;
    cout<<"Enter data: "<<endl;
    cin>>rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);
    queue<TreeNode<int>*> q;
    q.push(root);
    while(!q.empty()){
        TreeNode<int>* f = q.front();
        q.pop();
        int n;
        cout<<"Enter the no. of children for "<<f->data<<endl;
        cin>>n;
        for(int i=1;i<=n;i++){
            int childData;
            cout<<"Enter "<<i<<"th child data:"<<endl;
            cin>>childData;
            TreeNode<int>* child = new TreeNode<int>(childData);
            q.push(child);
            f->children.push_back(child);
        }
    }
    return root;
}

//printing tree level wise
void printLevelWise(TreeNode<int>* root){
    queue<TreeNode<int>*> q;
    q.push(root);
    while(!q.empty()){
        TreeNode<int>* f = q.front();
        cout<<f->data<<": ";
        q.pop();
        for(int i=0;i<f->children.size();i++){
           cout<<f->children[i]->data<<", ";
           q.push(f->children[i]);
        }
        cout<<endl;
    }
}

int countNodes(TreeNode<int>* root){
    if(root==NULL) return 0;
    int ans = 1;
    for(int i=0;i<root->children.size();i++){
        ans+=countNodes(root->children[i]);
    }
    return ans;
}

int main() {
    /*TreeNode<int>* root = new TreeNode<int>(0);
    TreeNode<int>* n1 = new TreeNode<int>(1);
    TreeNode<int>* n2 = new TreeNode<int>(2);

    root->children.push_back(n1);
    root->children.push_back(n2);*/
    //here i am taking input and printing level wise which produces better output than recursive approach
    TreeNode<int>* root = takeInputLevelWise();
    printLevelWise(root);
    cout<<countNodes(root);
}
