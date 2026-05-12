/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrigore <lgrigore@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 01:57:01 by lgrigore          #+#    #+#             */
/*   Updated: 2026/05/12 18:55:44 by lgrigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include <string>

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
 private:
 public:
  ScavTrap();
  ScavTrap(std::string name);
  ScavTrap(const ScavTrap& other);
  ~ScavTrap();
  ScavTrap& operator=(const ScavTrap& other);

  void attack(const std::string& target);
  void guardGate();
};

#endif
