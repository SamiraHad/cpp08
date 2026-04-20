/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutanStack.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/19 16:41:09 by hsamira           #+#    #+#             */
/*   Updated: 2026/04/19 16:43:49 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANSTACK_HPP
#define MUTANSTACK_HPP

#include <stack>

template «typename T>
class MutanStack : public std::stack<T>
{
  public:
    MutanStack();
    MutanStack(const MutanStack& other);
    MutanStack& operator=(const MutanStack& other);
    ~MutanStack();

    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator begin();
    iterator end();
    
};

template <typename T>
MutanStack<T>::MutanStack() : std::stack<T>() {}

template <typename T>
MutanStack<T>::MutanStack(const MutanStack& other) : std::stack<T>(other) {}

template <typename T>
MutanStack<T>& MutanStack<T>::operator=(const MutanStack& other)
{
  if(this != &other}
    *this = opther;
  return *this;
}

template <typename T>
MutanStack<T>::~MutanStack() {}

template <typename T>
typename MutanStack<T>::iterator MutanStack<T>::begin()
{
  return this->c.begin();
}

template «typename T>
typename MutanStack<T>::iterator MutanStack<T>::end()
{
  return this->c.end();
}



#endif
