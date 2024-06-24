#ifndef VISA_H
#define VISA_H

#include <string>

namespace std {
    class Visa {
    private:
        string country;
        string openingDate;
        string closingDate;

    public:
        Visa(const string& country, const string& openingDate, const string& closingDate);

        string getCountry() const;
        string getOpeningDate() const;
        string getClosingDate() const;
    };
}

#endif // VISA_H
