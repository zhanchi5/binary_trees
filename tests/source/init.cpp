#include <trees.hpp>
#include <catch.hpp>

SCENARIO("insert") {
    Binary_Search_Tree<unsigned int> r;
    Binary_Search_Tree<unsigned int>* root;
    int rv = r.insert(10);
    
    REQUIRE( rv == 10);
}

SCENARIO("search") {
    Binary_Search_Tree<unsigned int> r;
    Binary_Search_Tree<unsigned int>* root;
    int rv = r.search(10);
    
    REQUIRE( rv == 10);
}
SCENARIO("remove") {
    Binary_Search_Tree<unsigned int> r;
    Binary_Search_Tree<unsigned int>* root;
    int rv = r.search(13);
    
    REQUIRE( rv == 0);
}
