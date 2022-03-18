/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 04:20:38 by rdutenke          #+#    #+#             */
/*   Updated: 2022/03/18 05:15:51 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib> 
#include "Iter.hpp"
#include "Test.hpp"

void add100(int &x)
{
	x += 100;
}

void add1(char &x)
{
	x += 1;
}

void reverse(std::string &x)
{
	int len = x.length();
	int n=len-1;
	for(int i=0;i<(len/2);i++)
	{
    	std::swap(x[i],x[n]);
    	n = n-1;
	}
}

void doubleValue(Test &x)
{
	x *= 2;
}

int main(void)
{
	int i;

	std::cout << "\nTest - 0\n" << std::endl;
	int numbers[10];
	i = 0;
	while(i < 10)
	{
		numbers[i] = i;
		i++;
	}
	i = 0;
	std::cout << "\nArray before call\n" << std::endl;
	while(i < 10)
	{
		std::cout << numbers[i] << std::endl;
		i++;
	}
	iter(numbers, 10, add100);
	i = 0;
	std::cout << "\nArray after call\n" << std::endl;
	while(i < 10)
	{
		std::cout << numbers[i] << std::endl;
		i++;
	}

	std::cout << "\nTest - 1\n" << std::endl;
	char characters[10];
	i = 0;
	while(i < 10)
	{
		characters[i] = 'a' + i;
		i++;
	}
	i = 0;
	std::cout << "\nArray before call\n" << std::endl;
	while(i < 10)
	{
		std::cout << characters[i] << std::endl;
		i++;
	}
	iter(characters, 10, add1);
	i = 0;
	std::cout << "\nArray after call\n" << std::endl;
	while(i < 10)
	{
		std::cout << characters[i] << std::endl;
		i++;
	}


	std::cout << "\nTest - 2\n" << std::endl;
	std::string str[10];
	str[0] = "a";
	str[1] = "ab";
	str[2] = "abc";
	str[3] = "abcd";
	str[4] = "abcde";
	str[5] = "abcdef";
	str[6] = "abcdefg";
	str[7] = "abcdefgh";
	str[8] = "abcdefghi";
	str[9] = "abcdefghij";
	i = 0;
	std::cout << "\nArray before call\n" << std::endl;
	while(i < 10)
	{
		std::cout << str[i] << std::endl;
		i++;
	}
	iter(str, 10, reverse);
	i = 0;
	std::cout << "\nArray after call\n" << std::endl;
	while(i < 10)
	{
		std::cout << str[i] << std::endl;
		i++;
	}

	std::cout << "\nTest - 3\n" << std::endl;
	Test tests[3];

	tests[0].test = 2;
	tests[1].test = 4;
	tests[2].test = 8;
	i = 0;
	std::cout << "\nArray before call\n" << std::endl;
	while(i < 3)
	{
		std::cout << tests[i] << std::endl;
		i++;
	}
	iter(tests, 3, doubleValue);
	i = 0;
	std::cout << "\nArray after call\n" << std::endl;
	while(i < 3)
	{
		std::cout << tests[i] << std::endl;
		i++;
	}

	return(0);
}
