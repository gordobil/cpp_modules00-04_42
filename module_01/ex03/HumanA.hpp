/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:49:50 by ngordobi          #+#    #+#             */
/*   Updated: 2025/02/24 12:49:50 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

# define YELLOW	"\033[1;93m"
# define CYAN	"\033[1;96m"
# define RED	"\033[1;31m"
# define WHITE	"\033[0m"

class HumanA
{
	private:
		std::string	name;
		Weapon		weapon;
	public:
		HumanA();
		~HumanA();
		void	attack();
};

#endif
