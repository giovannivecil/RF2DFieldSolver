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
    double substrate_height;
    double e_r;
};

#endif // CUSTOMDIFFERENTIALMICROSTRIP_H
