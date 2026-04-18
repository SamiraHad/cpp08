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

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>

class Span
{
    private:
        unsigned int _n;  //Le nombre total (capacité)  : taille max 
        std::vector<int> _numbers; //Les valeurs stockées : positifs ou negatifs

    public:
        Span();
        Span(unsigned int n);
        Span(const Span& other);
        Span& operator=( const Span& other);
        ~Span();
        void addNumber(int n);
        unsigned int shortestSpan() const;
        unsigned int longestSpan() const;

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

