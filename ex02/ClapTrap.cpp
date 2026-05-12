/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrigore <lgrigore@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 01:58:31 by lgrigore          #+#    #+#             */
/*   Updated: 2026/05/12 18:13:01 by lgrigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#include <iostream>

ClapTrap::ClapTrap(std::string name)
    : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
		  std::cout << "ClapTrap " << name << " created!" << std::endl;
	}
ClapTrap::ClapTrap(const ClapTrap& other)
    : name(other.name),
      hitPoints(other.hitPoints),
      energyPoints(other.energyPoints),
      attackDamage(other.attackDamage) {
		  std::cout << "ClapTrap " << name << " copied!" << std::endl;
	  }
ClapTrap::~ClapTrap() {
		  std::cout << "ClapTrap " << name << " destroyed!" << std::endl;
	  }
ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	std::cout << "ClapTrap " << name << " assigned from " << other.name << "!" << std::endl;
  if (this != &other) {
    name = other.name;
    hitPoints = other.hitPoints;
    energyPoints = other.energyPoints;
    attackDamage = other.attackDamage;
  }
  return *this;
}

const std::string& ClapTrap::getName() const { return name; }

void ClapTrap::attack(const std::string& target) {
  if (energyPoints > 0 && hitPoints > 0) {
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing "
              << attackDamage << " points of damage!" << std::endl;
    energyPoints--;
  } else {
    std::cout << "ClapTrap " << name
              << " cannot attack due to insufficient energy or hit points."
              << std::endl;
  }
}

void ClapTrap::takeDamage(unsigned int amount) {
  if (hitPoints > 0) {
    hitPoints -= amount;
    if (hitPoints < 0) hitPoints = 0;
    std::cout << "ClapTrap " << name << " takes " << amount
              << " points of damage! Remaining hit points: " << hitPoints
              << std::endl;
  } else {
    std::cout << "ClapTrap " << name
              << " is already destroyed and cannot take more damage."
              << std::endl;
  }
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (energyPoints > 0 && hitPoints > 0) {
    hitPoints += amount;
    energyPoints--;
    std::cout << "ClapTrap " << name << " repairs itself for " << amount
              << " points! Current hit points: " << hitPoints << std::endl;
  } else {
    std::cout << "ClapTrap " << name
              << " cannot repair due to insufficient energy or hit points."
              << std::endl;
  }
}
