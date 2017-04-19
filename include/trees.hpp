//FUnctions will be posted here later
#include <iostream>
#include <stdlib.h>


template<class T>
class Binary_Search_Tree
{
private:
    struct tree_node
    {
        tree_node* left;
        tree_node* right;
        T data;
    };
    tree_node* root;
public:
    Binary_Search_Tree()
    {
        root = NULL;
    }
    bool isEmpty() const { return root==NULL; };
    void print_tree();
    void inorder(tree_node*, unsigned int level);
    int insert(T);
    int remove(T);
    bool search(T);
};

template <class T>
int Binary_Search_Tree<T>::insert(T d)
{
    tree_node* t = new tree_node;
    tree_node* parent;
    t->data = d;
    t->left = NULL;
    t->right = NULL;
    parent = NULL;
    // is this a new tree?
    if(isEmpty()) root = t;
    else
    {
        //Note: ALL insertions are as leaf nodes
        tree_node* curr;
        curr = root;
        // Find the Node's parent
        while(curr)
        {
            parent = curr;
            if(t->data > curr->data) curr = curr->right;
            else curr = curr->left;
        }

        if(t->data < parent->data)
            parent->left = t;
        else
            parent->right = t;
    }
}
template <class T>
bool Binary_Search_Tree<T>::search(T d)
{
    //Locate the element
    bool found = false;
    if(isEmpty())
    {
        return false;
    }
    tree_node* curr;
    tree_node* parent;
    curr = root;
    parent = (tree_node*)NULL;
    while(curr != NULL)
    {
        if(curr->data == d)
        {
            found = true;
            break;
        }
        else
        {
            parent = curr;
            if(d>curr->data) curr = curr->right;
            else curr = curr->left;
        }
    }
    return found;
}

template <class T>
int Binary_Search_Tree<T>::remove(T d)
{
    bool found = false;
    if(isEmpty())
    {
      return;
    }
    tree_node* curr;
    tree_node* parent;
    curr = root;
    parent = (tree_node*)NULL;
    while(curr != NULL)
    {
        if(curr->data == d)
        {
            found = true;
            break;
        }
        else
        {
            parent = curr;
            if(d>curr->data) curr = curr->right;
            else curr = curr->left;
        }
    }
    if(!found)
    {
       return;
    }

    // Node with single child
    if((curr->left == NULL && curr->right != NULL)|| (curr->left != NULL
                                                      && curr->right == NULL))
    {
        if(curr->left == NULL && curr->right != NULL)
        {
            if(parent->left == curr)
            {
                parent->left = curr->right;
                delete curr;
            }
            else
            {
                parent->right = curr->right;
                delete curr;
            }
        }
        else // left child present, no right child
        {
            if(parent->left == curr)
            {
                parent->left = curr->left;
                delete curr;
            }
            else
            {
                parent->right = curr->left;
                delete curr;
            }
        }
        return;
    }

    //We're looking at a leaf node
    if( curr->left == NULL && curr->right == NULL)
    {
        if (parent == NULL)
        {
            delete curr;

        } else
        if(parent->left == curr) parent->left = NULL;
        else parent->right = NULL;
        delete curr;
        return;
    }


    //Node with 2 children
    // replace node with smallest value in right subtree
    if (curr->left != NULL && curr->right != NULL)
    {
        tree_node* chkr;
        chkr = curr->right;
        if((chkr->left == NULL) && (chkr->right == NULL))
        {
            curr = chkr;
            delete chkr;
            curr->right = NULL;
        }
        else // right child has children
        {
            //if the node's right child has a left child
            // Move all the way down left to locate smallest element

            if((curr->right)->left != NULL)
            {
                tree_node* lcurr;
                tree_node* lcurrp;
                lcurrp = curr->right;
                lcurr = (curr->right)->left;
                while(lcurr->left != NULL)
                {
                    lcurrp = lcurr;
                    lcurr = lcurr->left;
                }
                curr->data = lcurr->data;
                delete lcurr;
                lcurrp->left = NULL;
            }
            else
            {
                tree_node* tmp;
                tmp = curr->right;
                curr->data = tmp->data;
                curr->right = tmp->right;
                delete tmp;
            }

        }
        return;
    }
}
template<class T>
void Binary_Search_Tree<T>::print_tree()
{
    unsigned int level = 0;
    inorder(root,level);
}


