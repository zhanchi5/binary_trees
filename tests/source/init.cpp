//Scenarios for tests will be posted here later

#include <trees.hpp>
#include <catch.hpp>

  Binary_Search_Tree<int>b;
  Binary_Search_Tree<unsigned int>* root =0;

SCENARIO("insert", "[Binary_Search_Tree<T>::insert]"){
  
   unsigned int rv = b.insert(100);
  
    REQUARE (rv == 100);
}

SCENARIO("remove", "[Binary_Search_Tree<T>::remove]"){
  Binary_Search_Tree<int>b;
  Binary_Search_Tree<unsigned int>* root;
  
  int rv.insert(100);
  int rv = b.remove(100);
  bool answer;
  if (!rv){
    REQUARE( answer = true);
  }
  else{
    REQUARE (answer = false);
  }
  
