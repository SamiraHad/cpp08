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
        unsigned int _n;
        std::vector<int> _numbers //car on peut avoir un resultat negatif : 3 - 5 = -2

    public:
        Span();
        Span(unsigned int n);
        Span(const Span& other);
        Span& operator=( const Span& other);
        ~Span();
        void addNumber(unsigned int n);
        unsigned int shortestSpan() const;
        unsigned int longestSpan() const;
        
};

#endif

