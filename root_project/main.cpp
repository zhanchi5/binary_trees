#include "functions.cpp"
#include <cstdlib>


int main()
{
        Binary_Search_Tree<int> b;
        Binary_Search_Tree<unsigned int> *root =0;
        int ch;
        int tmp,tmp1;
        while(1)
        {
                std::cout<< std::endl<< std::endl;
                std::cout<< "  Binary Search Tree Operations  " << std::endl;
                std::cout<< "  -----------------------------  " << std::endl;
                std::cout<< "  1. Insertion/Creation  " << std::endl;
                std::cout<< "  2. Print  " << std::endl;
                std::cout<< "  3. Removal  " << std::endl;
                std::cout<< "  4. Search  " << std::endl;
                std::cout<< "  5. Exit  " << std::endl;
                std::cout<< "  Enter your choice :  ";
                std::cin>>ch;
                switch(ch)
                {
                case 1: std::cout<< "  Enter data to be inserted :  ";
                        std::cin.ignore(1);
                        std::cin>>tmp;
                        b.insert(tmp);
                        break;
                case 2: std::cout<< std::endl;
                        std::cout<< "  Here is the tree  " << std::endl;
                        std::cout<< "  ------------------- " << std::endl;
                        b.print_tree();
                        break;
                case 3: std::cout<< "  Enter data to be deleted :  ";
                        std::cin.clear();
                        std::cin.ignore(1);
                        std::cin>>tmp1;
                        b.remove(tmp1);
                        break;
                case 4: std::cout<< "  Enter data to be searched :  ";
                        std::cin.ignore(1);
                        std::cin>>tmp;
                        b.search(tmp);
                        break;
                case 5:
                        return 0;
                        break;
                }
        }
}
