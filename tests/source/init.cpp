#include <trees.hpp>
#include <catch.hpp>

SCENARIO("insert") {
    Binary_Search_Tree<unsigned int> r;
    Binary_Search_Tree<unsigned int>* root;
    int a = int(10);
    int rv = r.insert(a);
    
    REQUIRE( rv == 10);
}

SCENARIO("search") {
    Binary_Search_Tree<unsigned int> r;
    Binary_Search_Tree<unsigned int>* root;
    int a = int(10);
    int rv = r.insert(a);
    int rs = r.search(10);
    
    REQUIRE( rs == true);
}
SCENARIO("remove") {
    Binary_Search_Tree<unsigned int> r;
    Binary_Search_Tree<unsigned int>* root;
    int rv = r.search(10);
    
    REQUIRE( rv == 0);
}
