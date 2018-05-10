#ifndef PAY_OFF_FORWARD_H
#define PAY_OFF_FORWARD_H
#include <PayOff3.h>

class PayOffForward : public PayOff
{
    public:
        PayOffForward(double Strike_);

        virtual double operator()(double Spot) const;
        virtual ~PayOffForward(){}
        virtual PayOff* clone() const;

    private:
    double Strike;
};

#endif