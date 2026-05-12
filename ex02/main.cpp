/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrigore <lgrigore@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 02:06:07 by lgrigore          #+#    #+#             */
/*   Updated: 2026/05/12 18:34:10 by lgrigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main(void) {

  FragTrap a("FragTrapA");
  FragTrap b("FragTrapB");

  a.attack(b.getName());
  b.takeDamage(30);
  b.beRepaired(5);
  b.attack(a.getName());
  a.takeDamage(30);
  a.beRepaired(3);
  a.highFivesGuys();
  return 0;
}
