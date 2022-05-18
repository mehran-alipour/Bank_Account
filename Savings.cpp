#include "Savings.h"

Savings::Savings(const std::string& name, float balance, float rate):Account(name, balance), m_Rate(rate) {
}
Savings::~Savings(){}
float Savings::GetInterestRate()const {
  return 0.0f;
}
void Savings::AccumulateInterest() {
  m_Balance += (m_Balance * m_Rate);
}