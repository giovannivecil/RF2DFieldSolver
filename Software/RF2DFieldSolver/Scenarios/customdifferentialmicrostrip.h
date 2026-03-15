#ifndef CUSTOMDIFFERENTIALMICROSTRIP_H
#define CUSTOMDIFFERENTIALMICROSTRIP_H

#include "scenario.h"

class CustomDifferentialMicrostrip : public Scenario
{
public:
    CustomDifferentialMicrostrip();
protected:
    virtual ElementList *createScenario() override;
    virtual QPixmap getImage() override;
private:
    double width;
    double deltaW;
    double height;
    double gap;
    double substrate_heightA;
    double e_rA;
    double substrate_heightB;
    double e_rB;
};

#endif // CUSTOMDIFFERENTIALMICROSTRIP_H
