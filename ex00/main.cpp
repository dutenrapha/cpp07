/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 01:51:29 by rdutenke          #+#    #+#             */
/*   Updated: 2022/03/18 03:37:58 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"
#include "Test.hpp"

int main( void ) {

	std::cout << "\nTest 0\n" << std::endl;
	int x = 21;
	int y = 42;
	std::cout << x << ", " << y << std::endl;
	swap(x,y);
	std::cout << x << ", " << y << std::endl;
	std::cout << "min " << ::min(x,y) << std::endl;
	std::cout << "max " << ::max(x,y) << std::endl;

	std::cout << "\nTest 1\n" << std::endl;
	std::string a = "aza";
	std::string b = "zaz";
	std::cout << a << ", " << b << std::endl;
	swap(a,b);
	std::cout << a << ", " << b << std::endl;
	std::cout << "min " << ::min(a,b) << std::endl;
	std::cout << "max " << ::max(a,b) << std::endl;

	std::cout << "\nTest 2\n" << std::endl;
	float c = 2.1;
	float d = 4.2;
	std::cout << c << ", " << d << std::endl;
	swap(c,d);
	std::cout << c << ", " << d << std::endl;
	std::cout << "min " << ::min(c,d) << std::endl;
	std::cout << "max " << ::max(c,d) << std::endl;

	std::cout << "\nTest 3\n" << std::endl;
	char e = '*';
	char f = 'T';
	std::cout << e << ", " << f << std::endl;
	swap(e,f);
	std::cout << e << ", " << f << std::endl;
	std::cout << "min " << ::min(e,f) << std::endl;
	std::cout << "max " << ::max(e,f) << std::endl;

	std::cout << "\nTest 4\n" << std::endl;
	Test t1(21);
	Test t2(42);
	std::cout << t1 << ", " << t2 << std::endl;
	swap(t1,t2);
	std::cout << t1 << "," << t2 << std::endl;
	std::cout << "min " << ::min(t1,t2) << std::endl;
	std::cout << "max " << ::max(t1,t2) << std::endl;
	return (0);
}