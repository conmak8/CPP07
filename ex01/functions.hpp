/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 18:37:38 by cmakario          #+#    #+#             */
/*   Updated: 2025/04/27 19:29:25 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_HPP
# define FUNCTIONS_HPP

# include <iostream>


template <typename T>
void print(T &value)
{
	std::cout << value << std::endl;
}

template <typename T>
void increment(T &value)
{
	++value;
}

template <typename T>
void decrement(T &value)
{
	value -= 2;
}

template <typename T>
void square(T &value)
{
	value *= value;
}

#endif // !FUNCTIONS_HPP
