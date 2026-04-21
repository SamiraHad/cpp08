/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 14:36:06 by hsamira           #+#    #+#             */
/*   Updated: 2026/04/21 17:14:24 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <exception>

/* std::find retourne la première occurrence de la valeur recherchée.

template <typename InputIt, typename T>
InputIt find(InputIt first, InputIt last, const T& value)
{
    while (first != last)
    {
        if (*first == value)
            return first;
        ++first;
    }
    return last; //pas trouve
}*/

template <typename T>
typename T::iterator easyfind (T& container, int value)
{
    typename T::iterator it = std::find(container.begin(), container.end(), value);

    if(it == container.end())
        throw std::exception();
    return it;
}

#endif