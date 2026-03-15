#ifndef CUSTOMCOPLANARDIFFERENTIALMICROSTRIP_H
#define CUSTOMCOPLANARDIFFERENTIALMICROSTRIP_H

#include "scenario.h"

class CustomCoplanarDifferentialMicrostrip : public Scenario
{
public:
    CustomCoplanarDifferentialMicrostrip();
protected:
    virtual ElementList *createScenario() override;
    virtual QPixmap getImage() override;
private:
    double width;
    double height;
    double deltaW;
    double gapTrace;
    double gapCoplanar;
    double substrate_heightA;
    double e_rA;
    double substrate_heightB;
    double e_rB;
};

#endif // CUSTOMCOPLANARDIFFERENTIALMICROSTRIP_H
