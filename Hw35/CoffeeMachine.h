#pragma once 
#include <vector>
#include <string>

struct OrderResult {
 std::string product;
 int change;
 bool success;
 std::string message;
};

class CoffeeMachine {
private:
  std::vector<std::string> products;
  std::vector<int> prices;

public:
  CoffeeMachine(const std::vector<std::string>& products, const std::vector<int>& prices);
  void printPriceList() const;
  OrderResult makeOrder(const std::string& name, int money);
};
