#ifndef PATIENT_H
#define PATIENT_H

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class PatientAccount {
private:
    int days, dayscharged;
    double totalCharges;

public:
    PatientAccount();
    void setDays(int hospitalDays);
    double getTotalCharges() const;
    double getDaysCharged() const;
    void updateTotalCharges(double amount);
};

#endif
