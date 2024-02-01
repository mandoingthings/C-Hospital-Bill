#include <iostream>
#include <iomanip>
#include "patient.h"
#include "treatment.h"

int main() {
    PatientAccount patient;
    Surgery surgery;
    Pharmacy pharmacy;

    int hospitalDays;
    char hadSurgery, hadMedicine, hadOtherMedicine;
    string surgeryType, medicationType;

    cout << "*** Patient Release Statement ***\n\n";
    cout << "How many days was the patient in the hospital? ";
    cin >> hospitalDays;

    patient.setDays(hospitalDays);

    cout << "Did the patient have surgery (Y/N)? ";
    cin >> hadSurgery;

    if (toupper(hadSurgery) == 'Y') {
        displaySurgeryOptions();
        cout << "Enter the number corresponding to the surgery type: ";
        int surgeryChoice;
        cin >> surgeryChoice;

        switch (surgeryChoice) {
            case 1:
                surgery.updateSurgeryCharge(600.0);
                break;
            case 2:
                surgery.updateSurgeryCharge(1250.0);
                break;
            case 3:
                surgery.updateSurgeryCharge(6000.0);
                break;
            case 4:
                surgery.updateSurgeryCharge(12000.0);
                break;
            case 5:
                surgery.updateSurgeryCharge(28000.0);
                break;
            default:
                cout << "Invalid surgery choice." << endl;
        }

        patient.updateTotalCharges(surgery.getSurgeryCharge());
    }

    cout << "Did the patient receive medication (Y/N)? ";
    cin >> hadMedicine;

    if (toupper(hadMedicine) == 'Y') {
        displayMedicationOptions();
        cout << "Enter the number corresponding to the medication type: ";
        int medicationChoice;
        cin >> medicationChoice;

        switch (medicationChoice) {
            case 1:
                pharmacy.updatePharmacyTotal(10.0);
                break;
            case 2:
                pharmacy.updatePharmacyTotal(20.0);
                break;
            case 3:
                pharmacy.updatePharmacyTotal(50.0);
                break;
            case 4:
                pharmacy.updatePharmacyTotal(75.0);
                break;
            case 5:
                pharmacy.updatePharmacyTotal(300.0);
                break;
            default:
                cout << "Invalid medication choice." << endl;
        }

        patient.updateTotalCharges(pharmacy.getPharmacyTotal());

        cout << "Did the patient receive other medication (Y/N)? ";
        cin >> hadOtherMedicine;

        while (toupper(hadOtherMedicine) == 'Y') {
            displayMedicationOptions();
            cout << "Enter the number corresponding to the other medication type: ";
            cin >> medicationChoice;

            switch (medicationChoice) {
                case 1:
                    pharmacy.updatePharmacyTotal(10.0);
                    break;
                case 2:
                    pharmacy.updatePharmacyTotal(20.0);
                    break;
                case 3:
                    pharmacy.updatePharmacyTotal(50.0);
                    break;
                case 4:
                    pharmacy.updatePharmacyTotal(75.0);
                    break;
                case 5:
                    pharmacy.updatePharmacyTotal(300.0);
                    break;
                default:
                    cout << "Invalid medication choice." << endl;
            }

            patient.updateTotalCharges(pharmacy.getPharmacyTotal());

            cout << "Did the patient receive other medication (Y/N)? ";
            cin >> hadOtherMedicine;
        }
    }

    displayCharges(patient, surgery, pharmacy);

    return 0;
}
