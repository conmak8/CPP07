/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 10:44:22 by cmakario          #+#    #+#             */
/*   Updated: 2025/04/26 11:06:51 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"


int main() {
	try {
		Array<int> a(5);  // Create an array of 5 ints

		for (unsigned int i = 0; i < a.size(); ++i)
			a[i] = i * 2;  // Fill array with even numbers

		for (unsigned int i = 0; i < a.size(); ++i)
			std::cout << "a[" << i << "] = " << a[i] << std::endl;

		Array<int> b = a;  // Copy array
		b[0] = 42;	 // Modify copy

		std::cout << "\nOriginal array after copy-modify:" << std::endl;
		for (unsigned int i = 0; i < a.size(); ++i)
			std::cout << "a[" << i << "] = " << a[i] << std::endl;

		std::cout << "\nCopied array:" << std::endl;
		for (unsigned int i = 0; i < b.size(); ++i)
			std::cout << "b[" << i << "] = " << b[i] << std::endl;

		// Try out of bounds
		std::cout << "Trying out of bounds:" << std::endl;
		std::cout << a[100] << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << "Caught exception: " << e.what() << std::endl;
	}
}