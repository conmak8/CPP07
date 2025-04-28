/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 19:07:31 by cmakario          #+#    #+#             */
/*   Updated: 2025/04/28 16:07:08 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>


template <class T>
class Array
{
private:
		T* _array;
		unsigned int _size;
public:
		Array();								// * Constructor (default)
		Array(unsigned int n);					// * Constructor (parameterized)
		Array(const Array &other);				// * Copy Constructor
		Array &operator=(const Array &other);	// * Copy Assignment Operator
		~Array();								// * Destructor

		T &operator[](unsigned int index);		// * Subscript Operator
		const T &operator[](unsigned int index) const; // * Const Subscript Operator

		unsigned int size() const;				// * Size Getter
};

#include "Array.tpp"  // ! SOS :  Tell me what it is, then tell me how it works. always include in the end!

#endif // ! ARRAY_HPP
