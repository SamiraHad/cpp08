/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 15:29:57 by hsamira           #+#    #+#             */
/*   Updated: 2026/04/13 16:47:14 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>

//_N = 5                  (capacité max)
//_number = [6, -3]      (valeurs stockées)
//_number.size() = 2     (nombre actuel d’éléments)class Span
{
    private:
        unsigned int _N;  //Combien d’éléments je peux stocker au maximum  : taille max 
        std::vector<int> _number; //Les valeurs stockées : positifs ou negatifs

    public:
        Span();
        Span(unsigned int N);
        Span(const Span& other);
        Span& operator=( const Span& other);
        ~Span();
        void addNumber(int number);
        unsigned int shortestSpan() const; //trie + voisins
        unsigned int longestSpan() const; //max - min

        template<typename Iterator>
        void addRange(Iterator begin, Iterator end)
        {
            while (begin != end)
            {
                addNumber(*begin);
                ++begin;
            }
        }
};

#endif

