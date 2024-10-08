#include<bits/stdc++.h>
using namespace std;

class TreeNode{
public: 
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val){
        this->val = val;
        left=nullptr;
        right=nullptr;
    }
};

int main(){
    TreeNode* temp = new TreeNode(5);
    temp->left = new TreeNode(7);
    temp->right = new TreeNode(9);
    cout<<temp->val<<endl;
    cout<<temp->left->val<<endl;
    cout<<temp->right->val<<endl;
}