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
    int rv = r.search(12);
    
    REQUIRE( rv == 12);
}
SCENARIO("remove") {
    Binary_Search_Tree<unsigned int> r;
    Binary_Search_Tree<unsigned int>* root;
    int rv = r.search(13);
    
    REQUIRE( rv == 13);
}
