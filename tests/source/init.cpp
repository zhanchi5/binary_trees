#include <trees.hpp>
#include <catch.hpp>

SCENARIO("insert") {
    Binary_Search_Tree<unsigned int> r;
    Binary_Search_Tree<unsigned int>* root;
    int rv = r.Add(10, root);
    
    REQUIRE( rv == 10);
}
SCENARIO("print_tree") {
    Binary_Search_Tree<unsigned int> r;
    Binary_Search_Tree<unsigned int>* root;
    int rv = r.print(11, root);
    
    REQUIRE( rv == 11);
}
SCENARIO("search") {
    Binary_Search_Tree<unsigned int> r;
    Binary_Search_Tree<unsigned int>* root;
    int rv = r.Search(12, root);
    
    REQUIRE( rv == 12);
}
SCENARIO("remove") {
    Binary_Search_Tree<unsigned int> r;
    Binary_Search_Tree<unsigned int>* root;
    int rv = r.Search(13, root);
    
    REQUIRE( rv == 13);
}
