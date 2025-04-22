/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 18:20:39 by cmakario          #+#    #+#             */
/*   Updated: 2025/04/22 18:45:38 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void iter(T* array, size_t array_length, void (*function)(T &))
{
	for (size_t i = 0; i < array_length; ++i)
	{
		function(array[i]);
	}
}

#endif // !ITER_HPP
