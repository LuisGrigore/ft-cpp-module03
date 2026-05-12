/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrigore <lgrigore@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 01:58:31 by lgrigore          #+#    #+#             */
/*   Updated: 2026/05/12 18:30:40 by lgrigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#include <iostream>

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
  hitPoints = 100;
  energyPoints = 100;
  attackDamage = 30;
  std::cout << "FragTrap " << name << " created!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {}
FragTrap::~FragTrap() {
  std::cout << "FragTrap " << name << " destroyed!" << std::endl;
}
FragTrap& FragTrap::operator=(const FragTrap& other) {
  std::cout << "FragTrap " << name << " assigned from " << other.name << "!"
            << std::endl;
  if (this != &other) {
    name = other.name;
    hitPoints = other.hitPoints;
    energyPoints = other.energyPoints;
    attackDamage = other.attackDamage;
  }
  return *this;
}

void FragTrap::attack(const std::string& target) {
  if (energyPoints > 0 && hitPoints > 0) {
    std::cout << "FragTrap " << name << " attacks " << target << ", causing "
              << attackDamage << " points of damage!" << std::endl;
    energyPoints--;
  } else {
    std::cout << "FragTrap " << name
              << " cannot attack due to insufficient energy or hit points."
              << std::endl;
  }
}

void FragTrap::highFivesGuys() {
  std::cout << "FragTrap " << name << " requests a high five!" << std::endl;
}