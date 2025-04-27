/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:57:47 by cmakario          #+#    #+#             */
/*   Updated: 2025/04/22 16:38:20 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <class T> // can use also <typename T>
void swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template <class T>
const T &min(const T &a, const T &b)
{
	return (a < b ? a : b);
}

template <class T>
const T &max(const T &a, const T &b)
{
	return (a > b ? a : b);
}

#endif // ! WHATEVER_HPP
