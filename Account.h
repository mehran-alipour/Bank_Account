#pragma once
#include <string>
class Account
{
  std::string m_AccountName;
  int m_AccNum;
  static int s_AccNumGenerator;
protected:
  float m_Balance;
public:
  Account(const std::string &AccountName, float balance);
  ~Account();
  // Getters
  const std::string GetName() const;
  float GetBalance()const;
  int GetAccountNo()const;
  float GetInterestRate()const;
  // Other
  void AccumulateInterest();
  void Withdraw(float amount);
  void Deposit(float amount);
};

