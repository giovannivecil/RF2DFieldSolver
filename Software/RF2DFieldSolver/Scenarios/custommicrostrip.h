#ifndef CUSTOMMICROSTRIP_H
#define CUSTOMMICROSTRIP_H

#include "scenario.h"

class CustomMicrostrip : public Scenario
{
public:
    CustomMicrostrip();
protected:
    virtual ElementList *createScenario() override;
    virtual QPixmap getImage() override;
private:
    double width;
    double deltaW;
    double height;
    double substrate_heightA;
    double e_rA;
    double substrate_heightB;
    double e_rB;
};

#endif // CUSTOMMICROSTRIP_H
