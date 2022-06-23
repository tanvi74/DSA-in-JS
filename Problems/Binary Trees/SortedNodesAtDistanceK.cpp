
/**
 * @file SortedNodesAtDistanceK.cpp
 * @author Tanvi (tanvi.agrawal@byjus.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <bits/stdc++.h>
using namespace std;

class node
{
    public: 
            int data;
            node* left;
            node* right;

            node(int d)
            {
                data = d;
                left = null; 
                right = null;
            }
};

node* preOrderBuildTree()
{
    int d;
    cin>>d;
    
    if(d==-1)
        return NULL;

    node* n = new node(d);
    n->left = preOrderBuildTree();
    n->right = preOrderBuildTree();

    return n;
}

void levelOrderPrint(Node* root)
{
    queue<Node*> q;

    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        node* temp = q.front();
        if(temp==NULL)
        {
            cout<<endl;
            q.pop();

            // INSERT a new null for a new level
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            q.pop();
            cout<<temo->data<<" ";

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

int main()
{
    node* root = preOrderBuildTree();
    levelOrderPrint(root);
    return 0;
}

/**
 * @brief EXAMPLE
 * 
 * INPUT
 * 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
 *
 * OUTPUT
 * 
 * 
 */