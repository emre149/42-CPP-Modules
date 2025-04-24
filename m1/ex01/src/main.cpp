/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ededemog <ededemog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 13:33:41 by ededemog          #+#    #+#             */
/*   Updated: 2025/04/24 13:34:55 by ededemog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int	main()
{
	Zombie *horde = zombieHorde(5, "Zombie");

	for (int i = 0; i < 5; ++i)
	{
		horde[i].announce();
	}

	delete[] horde;

	return (0);
}