/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 15:30:57 by hsamira           #+#    #+#             */
/*   Updated: 2026/04/19 16:04:00 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _N(0) {}

Span::Span(unsigned int N) : _N(N) {}

Span::Span(const Span& other)
{
    *this = other;
}
Span& Span::operator=( const Span& other )
{
    if(this != &other)
    {
        _N = other._N;
        _numbers = other._numbers;
    }
    return *this; 
}

Span::~Span() {}


/* addNumber: 1. Vérifier si le tableau est plein
              2. Si oui → lancer une exception
              3. Sinon → ajouter le nombre avec push_back*/
void Span::addNumber(int number)
{
    if(_numbers.size() >= _N)
        throw std::exception();
    _numbers.push_back(number);
}

/* shortestSpan : 1. Vérifie qu’il y a au moins 2 éléments
                  2. Copie le vector : std::sort modifie les données ❗ et la fonction est const ❗
                  3. Trie les éléments
                  4. Compare chaque élément avec son voisin
                  5. Garde la plus petite différence
                  6. Retourne cette différence*/
unsigned int Span::shortestSpan() const
{
    if(_numbers.size() < 2) //Si le tableau est plein → erreur
        throw std::exception();
    std::vector<int> tmp = _numbers;
    std::sort(tmp.begin(), tmp.end());
    long diffMin = (long)tmp[1] - (long)tmp[0];
    for(size_t i = 1; i < tmp.size(); i++)
    {
       long diff = (long)tmp[i] - (long)tmp[i - 1];
       if(diff < diffMin)
            diffMin = diff;
    }
    return (unsigned int)diffMin;
}

/*Le sujet impose des int pour le stockage, mais les calculs peuvent dépasser la capacité de int, 
donc j’utilise un type plus grand pour sécuriser les opérations.”
*/
unsigned int Span::longestSpan() const
{
    if(_numbers.size() < 2)
        throw std::exception();
    long min = *std::min_element(_numbers.begin(), _numbers.end());
    long max = *std::max_element(_numbers.begin(), _numbers.end());
    return (unsigned int)(max - min);
}

