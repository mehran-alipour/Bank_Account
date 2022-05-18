#include "Account.h"
#include <iostream>

int Account::s_AccNumGenerator = 1000;
Account::Account(const std::string& AccountName, float Balance):
m_AccountName(AccountName), m_Balance(Balance) {
  m_AccNum = ++s_AccNumGenerator;
}

Account::~Account()
{
}

const std::string Account::GetName() const
{
  return m_AccountName;
}

float Account::GetBalance() const
{
  return m_Balance;
}

int Account::GetAccountNo() const
{
  return m_AccNum;
}

float Account::GetInterestRate() const
{
  return 0.0f;
}

void Account::AccumulateInterest()
{
}

void Account::Withdraw(float amount)
{
  if (amount < m_Balance) {
    m_Balance = m_Balance - amount;
  }
  else {
    std::cout << "Insufficient balance" << std::endl;
  }
}

void Account::Deposit(float amount)
{
  m_Balance += amount;
}
