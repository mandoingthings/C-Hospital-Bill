#include "patient.h"

PatientAccount::PatientAccount() : days(0), totalCharges(0.0) {}

void PatientAccount::setDays(int hospitalDays) {
    days = hospitalDays;
    dayscharged = days * 700.0;
}

double PatientAccount::getTotalCharges() const {
    return totalCharges;
}

double PatientAccount::getDaysCharged() const {
    return dayscharged;
}

void PatientAccount::updateTotalCharges(double amount) {
    totalCharges += amount;
}
