/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 14:35:44 by hsamira           #+#    #+#             */
/*   Updated: 2026/04/21 17:11:48 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
   v.push_back(4); 
   v.push_back(4);
   v.push_back(6);

   try
   {
        std::vector<int>::iterator it = easyfind(v, 4);
        int index = std::distance(v.begin(), it);
        std::cout << "Found in vector: " << *it << " in index: " << index << std::endl;
   }
   catch (std::exception& e)
   {
        std::cout << "Not found in vector" << std::endl;
   }

   try
   {
        std::vector<int>::iterator it = easyfind(v, 50);
        int index1 = std::distance(v.begin(), it);
        std::cout << "Found in vector: " << *it << " in index: " << index1 << std::endl;
        
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
        int index2 = std::distance(l.begin(), it);
        std::cout << "Found in list: " << *it << " in index " << index2 << std::endl;
   }
   catch(std::exception& e)
   {
        std::cout << "Not found in list" << std::endl;
   }

   try
   {
        std::list<int>::iterator it = easyfind(l, 60);
         int index3 = std::distance(l.begin(), it);
        std::cout << "Found in list: " << *it << " in index" << index3 <<std::endl;
   }
   catch (std::exception& e)
   {
    std::cout << "Not found in list" << std::endl;
   }

   std::cout << "\nTest avec les deque " << std::endl;

   std::deque<int> d;
   d.push_back(61);
   d.push_back(41);
   d.push_back(31);

   try
   {
        std::deque<int>::iterator it = easyfind(d, 31);
        int index4 = std::distance(d.begin(), it);
        std::cout << "Found in deque: " << *it << " in index " << index4 <<  std::endl;
   }
   catch (std::exception& e)
   {
        std::cout << "Not found in deque" << std::endl;
   }

   try
   {
        std::deque<int>::iterator it = easyfind(d, 50);
        int index5 = std::distance(d.begin(), it);
        std::cout << "Found in deque: " << *it << " in index " << index5 <<  std::endl;
   }
   catch (std::exception& e)
   {
        std::cout << "Not found in deque" << std::endl;
   }

   return 0;
}