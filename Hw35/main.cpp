#include "CoffeeMachine.h"
#include <iostream>

int main() {
  std::vector<std::string> names = {"Espresso", "Latte", "Cappuccino"};
  std::vector<int> prices = {400, 500, 600};

 CoffeeMachine machine(names, prices);
  machine.printPriceList();

 std::cout << "\n Պատվեր 1 (Latte, 500 դրամ)\n";
  OrderResult result1 = machine.makeOrder("Latte", 500);
 std::cout << result1.message << "\n";
   if (result1.success)
 std::cout << "Ապրանք՝ " << result1.product << ", Մանր՝ " << result1.change << " դրամ\n";

 std::cout << "\n Պատվեր 2 (Cappuccino, 300 դրամ)\n";
  OrderResult result2 = machine.makeOrder("Cappuccino", 300);
  std::cout << result2.message << "\n";
   
 std::cout << "\n Պատվեր 3 (Tea, 500 դրամ)\n";  
  OrderResult result3 = machine.makeOrder("Tea", 500);
 std::cout << result3.message << "\n";

    return 0;
}

