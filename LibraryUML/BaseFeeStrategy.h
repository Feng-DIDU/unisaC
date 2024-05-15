#ifndef BASEFEESTRATEGY_H
#define BASEFEESTRATEGY_H

class BaseFeeStrategy {
public:
    virtual float popularityMultiplier() const = 0;
    virtual int calculateFee() const = 0;
};

#endif 
