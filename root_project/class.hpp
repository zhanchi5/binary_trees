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
        root = nullptr;
}
bool isEmpty() const {
        return root == nullptr;
};
void print_tree();
void inorder(tree_node*, unsigned int level);
void insert(T);
void remove(T);
bool search(T);

};
