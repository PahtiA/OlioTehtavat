#include "AggregationA.h"

AggregationA::AggregationA(AssosiationA& assocObj) : refA(assocObj) {}

string AggregationA::getInfo() const {
    return refA.getInfo();
}

void AggregationA::setInfo(const string& value) {
    refA.setInfo(value);
}
