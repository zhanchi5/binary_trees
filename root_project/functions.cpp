#include "class.hpp"
#include <iostream>
template <class T>
void Binary_Search_Tree<T>::insert(T d)
{
        tree_node* t = new tree_node;
        tree_node* parent;
        t->data = d;
        t->left = nullptr;
        t->right = nullptr;
        parent = nullptr;
        // Это новое дерево?
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
                std::cout << "  This Tree is empty!  " << std::endl;
                return false;
        }
        tree_node* curr;
        tree_node* parent;
        curr = root;
        parent = (tree_node*)nullptr;
        while(curr != nullptr)
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
                std::cout<< "  Data not found!  " << std::endl;
        }
        else
        {
                std::cout<< "  Data found!  " << std::endl;
        }

        return found;
}




template <class T>
void Binary_Search_Tree<T>::remove(T d)
{
        bool found = false;
        if(isEmpty())
        {
                std::cout<< "  This Tree is empty!  " << std::endl;
                return;
        }
        tree_node* curr;
        tree_node* parent;
        curr = root;
        parent = (tree_node*)nullptr;
        while(curr != nullptr)
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
                std::cout<< "  Data not found!  " << std::endl;
                return;
        }

        // Node with single child
        if((curr->left == nullptr && curr->right != nullptr)|| (curr->left != nullptr
                                                          && curr->right == nullptr))
        {
                if(curr->left == nullptr && curr->right != nullptr)
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
        if( curr->left == nullptr && curr->right == nullptr)
        {
                if (parent == nullptr)
                {
                        delete curr;

                } else
                if(parent->left == curr) parent->left = nullptr;
                else parent->right = nullptr;
                delete curr;
                return;
        }


        //Node with 2 children
        // replace node with smallest value in right subtree
        if (curr->left != nullptr && curr->right != nullptr)
        {
                tree_node* chkr;
                chkr = curr->right;
                if((chkr->left == nullptr) && (chkr->right == nullptr))
                {
                        curr = chkr;
                        delete chkr;
                        curr->right = nullptr;
                }
                else // right child has children
                {
                        //if the node's right child has a left child
                        // Move all the way down left to locate smallest element

                        if((curr->right)->left != nullptr)
                        {
                                tree_node* lcurr;
                                tree_node* lcurrp;
                                lcurrp = curr->right;
                                lcurr = (curr->right)->left;
                                while(lcurr->left != nullptr)
                                {
                                        lcurrp = lcurr;
                                        lcurr = lcurr->left;
                                }
                                curr->data = lcurr->data;
                                delete lcurr;
                                lcurrp->left = nullptr;
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

template<class T>
void Binary_Search_Tree<T>::inorder(tree_node* p, unsigned int level) {
        if (!p) return;

        level++;
        inorder(p->right, level);

        for (unsigned int i = 0; i < level; ++i) {
                std::cout <<  " -  ";
        }
        std::cout << p->data <<  std::endl;

        inorder(p->left, level);
        level--;

}
