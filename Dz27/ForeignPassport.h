#ifndef FOREIGNPASSPORT_H
#define FOREIGNPASSPORT_H

#include "Passport.h"
#include "Visa.h"
#include <vector>

namespace std {
    class ForeignPassport : public Passport {
    private:
        vector<Visa> visas;

    public:
        ForeignPassport(const string& series, const string& number, const string& surname,
            const string& name, const string& patronymic, const string& birthDate,
            const string& birthPlace, const string& issueDate, const string& issuedBy,
            const string& registration);

        void addVisa(const Visa& visa);
        vector<Visa> getVisas() const;
    };

}
#endif 
