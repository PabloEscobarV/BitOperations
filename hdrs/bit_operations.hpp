/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bit_operations.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: black <black@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 22:28:05 by Pablo Escob       #+#    #+#             */
/*   Updated: 2024/12/16 07:24:21 by black            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

using uint8_t = unsigned char;

class BitOperations
{
	enum e_bit_data_t
	{
		BIT_CLEAR,
		BIT_SET,
		BYTE_SIZE = 8
	};
	public:
		template <typename t_own>
		static void	set_bit(t_own &data, uint8_t bit_position)
		{
			if (bit_position >= sizeof(t_own) * BYTE_SIZE)
				bit_position = sizeof(t_own);
			data |= static_cast<t_own>(BIT_SET) << bit_position;
		}
		template <typename t_own>
		static t_own	read_bit(t_own &data, uint8_t bit_position)
		{
			if (bit_position >= sizeof(t_own) * BYTE_SIZE)
				bit_position = sizeof(t_own);
			return (data & static_cast<t_own>(BIT_SET) << bit_position) >> bit_position;
		}
		template <typename t_own>
		static void	clear_bit(t_own &data, uint8_t bit_position)
		{
			if (bit_position >= sizeof(t_own) * BYTE_SIZE)
				bit_position = sizeof(t_own);
			data &= ~(static_cast<t_own>(BIT_SET) << bit_position);
		}
};
