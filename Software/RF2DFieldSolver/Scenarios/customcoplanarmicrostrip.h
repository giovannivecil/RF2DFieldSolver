#ifndef CUSTOMCOPLANARMICROSTRIP_H
#define CUSTOMCOPLANARMICROSTRIP_H

#include "scenario.h"

class CustomCoplanarMicrostrip : public Scenario
{
public:
    CustomCoplanarMicrostrip();
protected:
    virtual ElementList *createScenario() override;
    virtual QPixmap getImage() override;
    virtual void setupParameters() override;
private:
    double width;
    double height;
    double deltaW;
    double gap;
    double substrate_heightA;
    double e_rA;
    double substrate_heightB;
    double e_rB;
    bool bottomGnd;
};

#endif // CUSTOMCOPLANARMICROSTRIP_H
