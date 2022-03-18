/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 02:55:52 by rdutenke          #+#    #+#             */
/*   Updated: 2022/03/18 05:15:08 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Test.hpp"

Test::Test(void) : test(0)
{
	return ;
}

Test::Test(Test const &src)
{
	*this = src;
	return ;
}

Test::~Test(void)
{
	return ;
}

Test & Test::operator=(Test const &rhs)
{
	this->test = rhs.getTest();
	return (*this);
}


Test::Test(int test) : test(test)
{
	return ;
}

float Test::operator*=(int rhs)
{
	return (this->test *= rhs);
}

bool	Test::operator>(Test const &rhs) const
{
	return (this->getTest() > rhs.getTest());	
}

bool	Test::operator>=(Test const &rhs) const
{
	return (this->getTest() >= rhs.getTest());
}

bool	Test::operator<(Test const &rhs) const
{
	return (this->getTest() < rhs.getTest());
}

bool	Test::operator<=(Test const &rhs) const
{
	return (this->getTest() <= rhs.getTest());
}

bool	Test::operator==(Test const &rhs) const
{
	return (this->getTest() == rhs.getTest());
}

bool	Test::operator!=(Test const &rhs) const
{
	return (this->getTest() != rhs.getTest());
}

int		Test::getTest(void)const
{
	return (this->test);
}

std::ostream & operator<<(std::ostream & o, Test const & src)
{
	o << "Test value: " << src.getTest();
	return (o);
}
