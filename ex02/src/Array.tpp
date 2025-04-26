/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 10:26:49 by cmakario          #+#    #+#             */
/*   Updated: 2025/04/26 10:42:30 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <class T>									 //Constructor (default)
Array<T>::Array() : _array(nullptr), _size(0) {}

template <class T>									 //Constructor (parameterized)
Array<T>::Array(unsigned int n) : _array(new T[n]()), _size(n) {}

template <class T>									 //Copy Constructor
Array<T>::Array(const Array<T> &other) : _array(new T[other._size]), _size(other._size)
{
	for (unsigned int i = 0; i < _size; ++i)
	{
		_array[i] = other._array[i];
	}
}

template <class T>									 //Copy Assignment Operator
Array<T> &Array<T>::operator= (const Array<T> &other)
{
	if (this != &other)
	{
		delete[] _array;
		_size = other._size;
		_array = new T[_size];
		for (unsigned int i = 0; i < _size; ++i)
		{
			_array[i] = other._array[i];
		}
	}
	return *this;
}

template <class T>									 //Destructor
Array<T>::~Array()
{
	delete[] _array;
}

template <class T>									 //Subscript Operator
T &Array<T>::operator[](unsigned int index)
{
	if (index >= _size)
	{
		throw std::out_of_range("Index out of range");
	}
	return _array[index];
}

template <class T>
const T &Array<T>::operator[](unsigned int index) const
{
	if (index >= _size)
	{
		throw std::out_of_range("Index out of range");
	}
	return _array[index];
}

template <class T>									 //Size Getter
unsigned int Array<T>::size() const
{
	return _size;
}
