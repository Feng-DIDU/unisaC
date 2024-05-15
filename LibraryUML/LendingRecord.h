#ifndef LENDINGRECORD_H
#define LENDINGRECORD_H

#include <string>

class LendingRecord {
public:
    virtual int daysOverdue() const = 0;
    virtual std::string determineType() const = 0;
    virtual std::string generateOverdueStatus() const = 0;
};

#endif 
