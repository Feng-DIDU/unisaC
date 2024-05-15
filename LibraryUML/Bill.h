#ifndef BILL_H
#define BILL_H

#include <iostream> 

class Bill {
public:
    Bill(float amount, const std::string& dueBy);
private:
    float _amount;
    std::string _dueBy;
};

#endif 
