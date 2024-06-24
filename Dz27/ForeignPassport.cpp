#include "ForeignPassport.h"

namespace std {
    ForeignPassport::ForeignPassport(const string& series, const string& number, const string& surname,
        const string& name, const string& patronymic, const string& birthDate,
        const string& birthPlace, const string& issueDate, const string& issuedBy,
        const string& registration)
        : Passport(series, number, surname, name, patronymic, birthDate, birthPlace, issueDate, issuedBy, registration) {}

    void ForeignPassport::addVisa(const Visa& visa) {
        visas.push_back(visa);
    }

vector<Visa> ForeignPassport::getVisas() const {
        return visas;
    }
}
