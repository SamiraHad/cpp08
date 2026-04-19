/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 15:29:52 by hsamira           #+#    #+#             */
/*   Updated: 2026/04/19 16:14:13 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <limits.h>


int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
}

// int main()
// {
//     std::cout<< "Test avec depassement: " << std::endl;
//     try
//     {
//         Span sp = Span(4);
//         sp.addNumber(6);
//         sp.addNumber(3);
//         sp.addNumber(17);
//         sp.addNumber(9);
//         sp.addNumber(11);
//         std::cout << sp.shortestSpan() << std::endl;
//         std::cout << sp.longestSpan() << std::endl;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << std::endl;
//     }
    
//     std::cout<< "\nTest avec addRange: " << std::endl;
//     try
//     {
//         Span sp1 = Span(4);
//         std::vector<int> v;
//         v.push_back(5);
//         v.push_back(3);
//         v.push_back(12);
//         v.push_back(7);
//         sp1.addRange(v.begin(), v.end());
//         std::cout << sp1.shortestSpan() << std::endl;
//         std::cout << sp1.longestSpan() << std::endl;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }


//     std::cout<< "\nTest 10000 nombres: " << std::endl;
//     try
//     { 
//         Span sp2 = Span(10000);
//         std::vector<int> v;

//         for (int i = 0; i < 10000; i++)
//             v.push_back(i);
    
//         sp2.addRange(v.begin(), v.end());
//         std::cout << sp2.shortestSpan() << std::endl; //1 = 1 - 0 || 2 - 1 ...
//         std::cout << sp2.longestSpan() << std::endl; //9999 = 9999 - 0
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << "Error: " << e.what() << '\n';
//     }

//     std::cout<< "\nTest avec des nombres negatifs: " << std::endl;
//     try
//     {
//         Span sp3(5);
//         sp3.addNumber(-4);
//         sp3.addNumber(3);
//         sp3.addNumber(-13);
//         std::cout << sp3.shortestSpan() << std::endl;
//         std::cout << sp3.longestSpan() << std::endl;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     std::cout << "\nTest limites int: " << std::endl;
//     try
//     {
//         Span sp4(3);
//         sp4.addNumber(INT_MIN);
//         sp4.addNumber(INT_MAX);
//         std::cout << sp4.shortestSpan() << std::endl;
//         std::cout << sp4.longestSpan() << std::endl;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     return 0;
// }