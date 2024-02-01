#include "treatment.h"

Surgery::Surgery() : surgeryCharge(0.0) {}

void Surgery::updateSurgeryCharge(double amount) {
    surgeryCharge += amount;
}

double Surgery::getSurgeryCharge() const {
    return surgeryCharge;
}

Pharmacy::Pharmacy() : pharmacyTotal(0.0) {}

void Pharmacy::updatePharmacyTotal(double amount) {
    pharmacyTotal += amount;
}

double Pharmacy::getPharmacyTotal() const {
    return pharmacyTotal;
}

void displaySurgeryOptions() {
    cout << "Please enter surgery type:\n";
    cout << "1 - Minor surgery $ 600\n";
    cout << "2 - Eye surgery $ 1,250\n";
    cout << "3 - Knee replacement $ 6,000\n";
    cout << "4 - Heart surgery $12,000\n";
    cout << "5 - Brain surgery $28,000\n";
}

void displayMedicationOptions() {
    cout << "Please enter medication type:\n";
    cout << "1 - Asprin $ 10\n";
    cout << "2 - Sleeping pills $ 20\n";
    cout << "3 - Pain pills $ 50\n";
    cout << "4 - Local anesthetic $ 75\n";
    cout << "5 - General anesthetic $300\n";
}

void displayCharges(const PatientAccount& patient, const Surgery& surgery, const Pharmacy& pharmacy) {
    cout << "\nPatient Charges\n";
    cout << "Hospital Stay: " << patient.getDaysCharged() << ".00" << endl;
    cout << "Surgery charge: $" << surgery.getSurgeryCharge() << ".00" << endl;
    cout << "Pharmacy charge: $" << pharmacy.getPharmacyTotal() << ".00" << endl;
    cout << "_________\n";
    cout << "Total charges : $" << patient.getDaysCharged() + surgery.getSurgeryCharge() + pharmacy.getPharmacyTotal() << ".00" << endl;
}
