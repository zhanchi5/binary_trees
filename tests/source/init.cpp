#include <trees.hpp>
#include <catch.hpp>
Binary_Search_Tree<unsigned int>* root;
Binary_Search_Tree<unsigned int> r;


SCENARIO("search") {
    int a = int(10);
    int rv = r.insert(a);
    int rs = r.search(10);
    
    REQUIRE( rs == true);
}

SCENARIO("remove"){
    int a = int(10);
    int rv = r.insert(a);
    r.remove(a);
    bool answer
    if (!r.search(10)){
        answer = true;
    }
    else{
        answer = false;
    }
    
    REQUIRE( answer == true);
}
