#include "Checking.h"
#include <iostream>

void Checking::Withdraw(float amount)
{
  if ( m_Balance - amount > 50) {
    Account::Withdraw(amount);
  }
  else {
    std::cout << "Invalid amount in yout Checking Account" << std::endl;
  }
}

Checking::~Checking()
{
}

