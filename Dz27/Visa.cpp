#include "Visa.h"

namespace std {
    Visa::Visa(const string& country, const string& openingDate, const string& closingDate)
        : country(country), openingDate(openingDate), closingDate(closingDate) {}

    string Visa::getCountry() const { return country; }
string Visa::getOpeningDate() const { return openingDate; }
    string Visa::getClosingDate() const { return closingDate; }
}
