/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 10:44:22 by cmakario          #+#    #+#             */
/*   Updated: 2025/04/26 19:53:01 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <string>
#include <iostream>
#include <cstdlib> // For std::cin.get()


void separator()
{
	std::cout << "\n-----------------------------\n" << std::endl;
}

void pressEnter()
{
	std::cout << "\nPress ENTER to continue..." << std::endl;
	std::cin.get();
}

void testIntArray()
{
	separator();
	std::cout << "🔶 Test 1: Basic Integer Array" << std::endl;
	Array<int> a(5);

	for (unsigned int i = 0; i < a.size(); ++i)
		a[i] = i * 2;

	for (unsigned int i = 0; i < a.size(); ++i)
		std::cout << "a[" << i << "] = " << a[i] << std::endl;

	pressEnter();
}

void testCopyModify()
{
	separator();
	std::cout << "🔶 Test 2: Copy and Modify Array" << std::endl;
	Array<int> a(5);
	for (unsigned int i = 0; i < a.size(); ++i)
		a[i] = i;

	Array<int> b = a;
	b[0] = 42;

	std::cout << "\nOriginal array:" << std::endl;
	for (unsigned int i = 0; i < a.size(); ++i)
		std::cout << "a[" << i << "] = " << a[i] << std::endl;

	std::cout << "\nCopied array:" << std::endl;
	for (unsigned int i = 0; i < b.size(); ++i)
		std::cout << "b[" << i << "] = " << b[i] << std::endl;

	pressEnter();
}

void testConstArray()
{
	separator();
	std::cout << "🔶 Test 3: Const Array Access" << std::endl;
	const Array<int> arrConst(3);

	for (unsigned int i = 0; i < arrConst.size(); ++i)
		std::cout << "arrConst[" << i << "] = " << arrConst[i] << std::endl;

	pressEnter();
}

void testStringArray()
{
	separator();
	std::cout << "🔶 Test 4: Array of Strings" << std::endl;
	Array<std::string> stringArr(3);

	stringArr[0] = "Hello";
	stringArr[1] = "C++";
	stringArr[2] = "Templates";

	for (unsigned int i = 0; i < stringArr.size(); ++i)
		std::cout << "stringArr[" << i << "] = " << stringArr[i] << std::endl;

	pressEnter();
}

void testCharArray()
{
	separator();
	std::cout << "🔶 Test 5: Array of Chars" << std::endl;
	Array<char> charArr(4);

	charArr[0] = 'A';
	charArr[1] = 'B';
	charArr[2] = 'C';
	charArr[3] = 'D';

	for (unsigned int i = 0; i < charArr.size(); ++i)
		std::cout << "charArr[" << i << "] = " << charArr[i] << std::endl;

	pressEnter();
}

void testPointerArray()
{
	separator();
	std::cout << "🔶 Test 6: Array of Pointers" << std::endl;
	Array<int*> ptrArr(3);

	for (unsigned int i = 0; i < ptrArr.size(); ++i)
		ptrArr[i] = new int(i * 10);

	for (unsigned int i = 0; i < ptrArr.size(); ++i)
		std::cout << "ptrArr[" << i << "] points to value: " << *(ptrArr[i]) << std::endl;

	for (unsigned int i = 0; i < ptrArr.size(); ++i)
		delete ptrArr[i];

	pressEnter();
}

void testOutOfBounds()
{
	separator();
	std::cout << "🔶 Test 7: Out of Bounds Access (Expected Exception)" << std::endl;
	Array<int> a(2);
	a[0] = 1;
	a[1] = 2;

	std::cout << "Trying to access element at index 10:" << std::endl;
	std::cout << a[10] << std::endl;  // Will throw
}


int main()
{
	try {
		testIntArray();
		testCopyModify();
		testConstArray();
		testStringArray();
		testCharArray();
		testPointerArray();
		testOutOfBounds();
	}
	catch (std::exception &e)
	{
		std::cerr << "💥 Caught Exception: " << e.what() << std::endl;
	}
}
