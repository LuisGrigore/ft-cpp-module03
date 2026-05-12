/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrigore <lgrigore@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 02:06:07 by lgrigore          #+#    #+#             */
/*   Updated: 2026/05/12 18:34:15 by lgrigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {

  ScavTrap a("ScavTrapA");
  ScavTrap b("ScavTrapB");

  a.attack(b.getName());
  b.takeDamage(0);
  b.beRepaired(5);
  b.attack(a.getName());
  a.takeDamage(0);
  a.beRepaired(3);
  a.guardGate();
  return 0;
}
