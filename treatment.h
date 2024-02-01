#ifndef TREATMENT_H
#define TREATMENT_H

#include <iostream>
#include <iomanip>
#include <string>
#include "patient.h"

class Surgery {
private:
    double surgeryCharge;

public:
    Surgery();
    void updateSurgeryCharge(double amount);
    double getSurgeryCharge() const;
};

class Pharmacy {
private:
    double pharmacyTotal;

public:
    Pharmacy();
    void updatePharmacyTotal(double amount);
    double getPharmacyTotal() const;
};

void displaySurgeryOptions();
void displayMedicationOptions();
void displayCharges(const PatientAccount& patient, const Surgery& surgery, const Pharmacy& pharmacy);

#endif

