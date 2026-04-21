/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/19 16:41:38 by hsamira           #+#    #+#             */
/*   Updated: 2026/04/21 15:03:07 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>
#include <vector>
#include <string>

int main()
{
    
    std::cout << "Test avec MutantStack (int)" << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {     
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);

    std::cout << "\nTest avec std::list" << std::endl;
    
    std::list<int> lstack;
    lstack.push_back(5);
    lstack.push_back(17);
    std::cout << lstack.back() << std::endl;
    lstack.pop_back();
    std::cout << lstack.size() << std::endl;
    lstack.push_back(3);
    lstack.push_back(5);
    lstack.push_back(737);
    lstack.push_back(0);
    std::list<int>::iterator it1 = lstack.begin();
    std::list<int>::iterator ite1 = lstack.end();
    ++it1;
    --it1;
    while (it1 != ite1)
    {     
        std::cout << *it1 << std::endl;
        ++it1;
    }
    std::stack<int, std::list<int> > s1(lstack);
    

    std::cout << "\nTest avec std::vector" << std::endl;
    
    std::vector<int> vstack;
    vstack.push_back(5);
    vstack.push_back(17);
    std::cout << vstack.back() << std::endl;
    vstack.pop_back();
    std::cout << vstack.size() << std::endl;
    vstack.push_back(3);
    vstack.push_back(5);
    vstack.push_back(737);
    vstack.push_back(0);
    std::vector<int>::iterator it2 = vstack.begin();
    std::vector<int>::iterator ite2 = vstack.end();
    ++it2;
    --it2;
    while (it2 != ite2)
    {     
        std::cout << *it2 << std::endl;
        ++it2;
    }
    std::stack<int, std::vector<int> > s2(vstack);

    std::cout << "\nTest avec MutantStack (string)" << std::endl;
    MutantStack<std::string> sstack;
    sstack.push("toi meme");
    sstack.push("sois");
    std::cout << sstack.top() << std::endl;
    sstack.pop();
    std::cout << sstack.size() << std::endl;
    sstack.push("pas celui ");
    sstack.push("que le monde essaie ");
    sstack.push("de te faire ");
    sstack.push("devenir");
    MutantStack<std::string>::iterator its = sstack.begin();
    MutantStack<std::string>::iterator ites = sstack.end();
    ++its;
    --its;
    while (its != ites)
    {     
        std::cout << *its << std::endl;
        ++its;
    }
    std::stack<std::string> ss(sstack);
    
    return 0;
}



