/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 18:39:35 by cmakario          #+#    #+#             */
/*   Updated: 2025/04/22 18:47:29 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include "functions.hpp"



void separator()
{
	std::cout << "----------------------------" << std::endl;
}

int main()
{
	int array[] = {1, 2, 3, 4, 5};
	std::string strArray[] = {"Hello", "World", "!"};
	
	std::cout << "Original int array:" << std::endl;
	iter(array, 5, print);
	separator();
	
	std::cout << "Incremented int array:" << std::endl;
	iter(array, 5, increment);
	iter(array, 5, print);
	separator();

	std::cout << "Decremented int array by 2:" << std::endl;
	iter(array, 5, decrement);
	iter(array, 5, print);
	separator();

	std::cout << "Squared int array:" << std::endl;
	iter(array, 5, square);
	iter(array, 5, print);
	separator();
	
	std::cout << "Original string array:" << std::endl;
	iter(strArray, 3, print);
	
	return (0);
}
