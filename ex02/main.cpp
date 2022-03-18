/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 05:22:35 by rdutenke          #+#    #+#             */
/*   Updated: 2022/03/18 18:37:46 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main(void)
{
	unsigned int i;
	Array<int> intArray = Array<int>(5);
	Array<const int> intConstArray(5);

	std::cout << "\nTest - 0\n" << std::endl;
	i = 0;
	while (i < intArray.size() + 2)
	{
		try
		{
			std::cout << intArray[i] << std::endl;
			std::cout << intConstArray[i] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		i++;
	}
	
	std::cout << "\nTest - 1\n" << std::endl;
	i = 0;
	while (i < intArray.size() + 1)
	{
		try
		{
			intArray[i] = i;
			std::cout << "intArray[" << i << "] = " << i << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		i++;
	}
	
	i = 0;
	while (i < intArray.size() + 1)
	{
		try
		{
			std::cout << intArray[i] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		i++;
	}
	
	std::cout << "\nTest - 2\n" << std::endl;
	std::cout << "intArray[2]:" << intArray[2] << std::endl;
	intArray[2] = 42;
	std::cout << "intArray[2]:" << intArray[2] << std::endl;

	std::cout << "\nTest - 3\n" << std::endl;
	std::cout << "intArray[2]:" << intArray[2] << std::endl;
	Array<int> intArrayCopy(intArray);
	std::cout << "intArrayCopy[2]:" << intArrayCopy[2] << std::endl;
	intArray[2] = 21;
	std::cout << "intArray[2]:" << intArray[2] << std::endl;
	std::cout << "intArrayCopy[2]:" << intArrayCopy[2] << std::endl;

	std::cout << "\nTest - 4\n" << std::endl;	
	Array<int> emptyArray = Array<int>();
	try
	{
		std::cout << emptyArray[0] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "emptyArray size: " << emptyArray.size() << std::endl;

	std::cout << "\nTest - 5\n" << std::endl;	
	Array<char> charArray(3);
	
	i = 0;
	while (i < charArray.size())
	{
		try
		{
			charArray[i] = 'a' + i;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		i++;
	}
	i = 0;
	while (i < charArray.size())
	{
		try
		{
			std::cout << charArray[i] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		i++;
	}
}