#include <trees.hpp>
#include <catch.hpp>

SCENARIO("insert") {
    BinarySearchTree<unsigned int> r;
    BinarySearchTree<unsigned int>* root;
    int rv = r.Add(10, root);
    
    REQUIRE( rv == 10);
}
SCENARIO("print_tree") {
    BinarySearchTree<unsigned int> r;
    BinarySearchTree<unsigned int>* root;
    int rv = r.print(11, root);
    
    REQUIRE( rv == 11);
}
SCENARIO("search") {
    BinarySearchTree<unsigned int> r;
    BinarySearchTree<unsigned int>* root;
    int rv = r.Search(12, root);
    
    REQUIRE( rv == 12);
}
SCENARIO("remove") {
    BinarySearchTree<unsigned int> r;
    BinarySearchTree<unsigned int>* root;
    int rv = r.Search(13, root);
    
    REQUIRE( rv == 13);
}
