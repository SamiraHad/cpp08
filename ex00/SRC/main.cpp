#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>
#include <iostream>


/*push_back est une fonction membre des containers STL, sert a creer un vector vide 
et ajouter les element un par un dans le container.
exemple:
    std::vector<int> v; 
    v.push_back(3); 
    v.push_back(4);
    v.push_back(5);

On peut aussi creer un tableau en memoire puis on copie les element du tableau dans le container.

exemple:
    int arr[] = {3, 4, 5};
    std::vector<int> v(arr, arr + 3);

*/

int main()
{
   std::cout << "\nTest avec les vecteurs " << std::endl;
   
   std::vector<int> v; 
   v.push_back(3); 
   v.push_back(4);
   v.push_back(5);

   try
   {
        std::vector<int>::iterator it = easyfind(v, 4);
        std::cout << "Found in vector: " << *it << std::endl;
   }
   catch (std::exception& e)
   {
        std::cout << "Not found in vector" << std::endl;
   }

   try
   {
        std::vector<int>::iterator it = easyfind(v, 50);
        std::cout << "Found in vector: " << *it << std::endl;
   }
   catch (std::exception& e)
   {
        std::cout << "Not found in vector" << std::endl;
   }

   std::cout << "\nTest avec les listes " << std::endl;

   std::list<int> l;
   l.push_back(30);
   l.push_back(35);
   l.push_back(20);

   try
   {
        std::list<int>::iterator it = easyfind(l, 35);
        std::cout << "Found in list: " << *it << std::endl;
   }
   catch(std::exception& e)
   {
        std::cout << "Not found in list" << std::endl;
   }

   try
   {
        std::list<int>::iterator it = easyfind(l, 60);
        std::cout << "Found in list: " << *it << std::endl;
   }
   catch (std::exception& e)
   {
    std::cout << "Not found in list" << std::endl;
   }

   std::cout << "\nTest avec les deque " << std::endl;

   std::deque<int> d;
   d.push_back(31);
   d.push_back(41);
   d.push_back(51);

   try
   {
        std::deque<int>::iterator it = easyfind(d, 31);
        std::cout << "Found in deque: " << *it << std::endl;
   }
   catch (std::exception& e)
   {
        std::cout << "Not found in deque" << std::endl;
   }

   try
   {
        std::deque<int>::iterator it = easyfind(d, 50);
        std::cout << "Found in deque: " << *it << std::endl;
   }
   catch (std::exception& e)
   {
        std::cout << "Not found in deque" << std::endl;
   }

   return 0;
}