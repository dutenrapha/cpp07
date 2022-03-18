/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 05:22:48 by rdutenke          #+#    #+#             */
/*   Updated: 2022/03/18 16:38:45 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
	class IndexError : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Index out of range");
			}
	};
	public:
		Array(void): _n(0), _array(0) {};

		Array(unsigned int n): _n(n), _array(new T[n]()) {};
		
		Array(Array const &src): _n(src.size()), _array(new T[this->_n]())
		{
			*this = src;
		};
		
		~Array(void)
		{
			if(this->_array)
			{
				delete[] this->_array;
			}
		}
		
		T &operator[](unsigned int index) const
		{
			if ((index < 0) || (index >= this->_n))
			{
				throw IndexError();
			}
			return (_array[index]);
		}

		Array &operator=(Array const &rhs)
		{
			unsigned int	i;

			try
			{
				i = 0;
				while (i < rhs.size())
				{
					if (i >= this->_n)
					{
						throw IndexError();
					}
					this->_array[i] = rhs._array[i];
					i++;
				}
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
			return (*this);
		}
		
		unsigned int size(void) const 
		{
			return(_n);
		}

	private:
		unsigned int	_n;
		T				*_array;

};

#endif