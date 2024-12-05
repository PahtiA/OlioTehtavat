#ifndef AGGREGATIONA_H
#define AGGREGATIONA_H

#include "AssosiationA.h"

class AggregationA {
private:
    AssosiationA& refA;

public:
    AggregationA(AssosiationA& assocObj);
    string getInfo() const;
    void setInfo(const string& value);
};

#endif
