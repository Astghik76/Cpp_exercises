#ifndef CALCULATOR_H
#define CALCULATOR_H 

struct Calculator {
private:
    double memory;  
public:
 Calculator();
 double add(double a, double b, bool bMemorize = false);
 double subtract(double a, double b, bool bMemorize = false);
 double multiply(double a, double b, bool bMemorize = false);
 double divide(double a, double b, bool bMemorize = false);

  void printMemory() const;
   };

#endif 

