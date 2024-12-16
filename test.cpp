/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: black <black@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 22:42:52 by Pablo Escob       #+#    #+#             */
/*   Updated: 2024/12/16 07:23:43 by black            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hdrs/bit_operations.hpp"
#include <iostream>

using namespace std;


template <typename T>
void	print_bit(T bit, int size)
{
	T i = 0;
	for (; i < size; ++i)
	{
		cout << BitOperations::read_bit(bit, i); 
	}
	cout << ": [" << i << "]" << endl;
}

int	main()
{
	int	data {0};
	uint8_t	size = sizeof(size) * 8;

	print_bit(data, size);
	for (uint8_t i = 0; i < size; ++i)
	{
		BitOperations::set_bit(data, i);
		print_bit(data, size);
	}
	cout << "start clear operations" << endl;
	print_bit(data, size);
	for (uint8_t i = 0; i < size; ++i)
	{
		BitOperations::clear_bit(data, i);
		print_bit(data, size);
	}
	return (0);
}