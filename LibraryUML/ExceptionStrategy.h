#ifndef EXCEPTIONSTRATEGY_H
#define EXCEPTIONSTRATEGY_H

#include "BaseFeeStrategy.h"

class ExceptionStrategy : public BaseFeeStrategy {
public:
    ExceptionStrategy();
    virtual float popularityMultiplier() const override;
    virtual int calculateFee() const override;
private:
    static const int startingFee = 30;
};

#endif 
