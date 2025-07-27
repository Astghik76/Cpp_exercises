#include "CoffeeMachine.h"
#include <iostream>

CoffeeMachine::CoffeeMachine(const std::vector<std::string>& p, const std::vector<int>& pr)
: products(p), prices(pr) {}

void CoffeeMachine::printPriceList() const {
  std::cout << "Price List:\n";
   for (int i = 0; i < products.size(); i++) {
     std::cout << products[i] << " - " << prices[i] << " coin\n";
     }
  }

OrderResult CoffeeMachine::makeOrder(const std::string& name, int money) {
  for (int i = 0; i < products.size(); i++) {
    if (products[i] == name) {
     if (money >= prices[i]) {
 return {name, money - prices[i], true, "Order successful"};
} else {
   return {"", money, false, "The money is not enough"};
           }
       }
  }
  return {"", money, false, "The product is missing"};
}

