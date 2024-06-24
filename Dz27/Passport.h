#ifndef PASSPORT_H
#define PASSPORT_H

#include <string>
using namespace std;
namespace std {
    class Passport {
    private:
        string series;
        string number;
        string surname;
        string name;
        string patronymic;
        string birthDate;
        string birthPlace;
        string issueDate;
        string issuedBy;
        string registration;

    public:
        Passport(const string& series, const string& number, const string& surname,
            const string& name, const string& patronymic, const string& birthDate,
            const string& birthPlace, const string& issueDate, const string& issuedBy,
            const string& registration);

        string getSeries() const;
        string getNumber() const;
        string getSurname() const;
        string getName() const;
        string getPatronymic() const;
        string getBirthDate() const;
        string getBirthPlace() const;
        string getIssueDate() const;
        string getIssuedBy() const;
        string getRegistration() const;

    };
}
#endif // PASSPORT_H
