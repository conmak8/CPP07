/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:04:18 by cmakario          #+#    #+#             */
/*   Updated: 2025/04/22 16:39:03 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>


void separator()
{
	std::cout << "----------------------------" << std::endl;
}

int main(void)
{
	int a = 2;
	int b = 3;
	float k = 12.0f;
	float m = 15.2f;
	
	::swap( a, b ); // Use :: when you want to explicitly refer to a global function or variable
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	separator();
	
	swap<float>(k,m); // Use template specialization to specify the type
	std::cout << "k = " << k << ", m = " << m << std::endl;
	std::cout << "min( k, m ) = " << ::min( k, m ) << std::endl;
	std::cout << "max( k, m ) = " << ::max( k, m ) << std::endl;
	separator();
	
	std::string c = "chaine1";
	std::string d = "chaine2";
	
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	
	return (0);
}

