#include <trees.hpp>
#include <catch.hpp>
Binary_Search_Tree<unsigned int>* root;
Binary_Search_Tree<unsigned int> r;


SCENARIO("search") {
    int a = int(10);
    int rv = r.insert(a);
    int get_request = r.search(10);
    
    REQUIRE( get_request == true);
}

SCENARIO("remove"){
    r.remove(a);
    bool answer = r.search(10);
    
    REQUIRE( answer == false);
}
