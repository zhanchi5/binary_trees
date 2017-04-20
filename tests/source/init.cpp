#include <trees.hpp>
#include <catch.hpp>

SCENARIO("isEmpty"){
    Binary_Search_Tree<unsigned int> r;
    bool answer = r.isEmpty();
    
    REQUIRE( answer == true );
}

SCENARIO("search") {
    
    Binary_Search_Tree<unsigned int> r;
    int a = int(10);
    int rv = r.insert(a);
    int get_request = r.search(10);
    
    REQUIRE( get_request == true);
}

SCENARIO("remove"){
    
    Binary_Search_Tree<unsigned int> r;
    int get_answer = r.search(10);
    
    REQUIRE( get_answer == false);
}


