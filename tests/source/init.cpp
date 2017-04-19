#include <trees.hpp>
#include <catch.hpp>
Binary_Search_Tree<unsigned int>* root;
Binary_Search_Tree<unsigned int> r;


SCENARIO("insert") {    
    int a = int(10);
    int rv = r.insert(a);
    
    REQUIRE( rv == 10);
}

SCENARIO("search") {
    int a = int(10);
    int rv = r.insert(a);
    int rs = r.search(10);
    
    REQUIRE( rs == true);
}
SCENARIO("remove") {
    int rv = r.search(10);
    
    REQUIRE( rv == false);
}
