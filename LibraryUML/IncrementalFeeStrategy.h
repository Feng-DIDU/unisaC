#ifndef INCREMENTALFEESTRATEGY_H
#define INCREMENTALFEESTRATEGY_H

#include "BaseFeeStrategy.h"

class IncrementalFeeStrategy : public BaseFeeStrategy {
public:
    IncrementalFeeStrategy();
    virtual float popularityMultiplier() const override;
    virtual int calculateFee() const override;
private:
    static const int startingFee = 30;
};

#endif 
