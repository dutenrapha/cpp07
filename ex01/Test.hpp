/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Test.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 02:45:21 by rdutenke          #+#    #+#             */
/*   Updated: 2022/03/18 05:13:42 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef TEST_HPP
#define TEST_HPP

#include <iostream>

class Test
{
	public:
		Test(void);
		Test(Test const &src);
		~Test(void);
		Test	&operator=(Test const &rhs);
		
		Test(int test);
		float   operator*=(int rhs);
		bool	operator>(Test const &rhs) const;
		bool	operator>=(Test const &rhs) const;
		bool	operator<(Test const &rhs) const;
		bool	operator<=(Test const &rhs) const;
		bool	operator==(Test const &rhs) const;
		bool	operator!=(Test const &rhs) const;

		int		getTest(void)const;
		int		test;
};

std::ostream & operator<<(std::ostream & o, Test const & src);

#endif