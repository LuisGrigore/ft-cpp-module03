/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrigore <lgrigore@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 02:06:07 by lgrigore          #+#    #+#             */
/*   Updated: 2026/04/30 02:08:05 by lgrigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
  ClapTrap a("ClapTrapA");
  ClapTrap b("ClapTrapB");

  a.attack(b.getName());
  b.takeDamage(0);
  b.beRepaired(5);
  b.attack(a.getName());
  a.takeDamage(0);
  a.beRepaired(3);
  return 0;
}
