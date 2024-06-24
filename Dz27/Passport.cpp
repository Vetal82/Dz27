#include "Passport.h"

namespace std {
    Passport::Passport(const string& series, const string& number, const string& surname,
        const string& name, const string& patronymic, const string& birthDate,
        const string& birthPlace, const string& issueDate, const string& issuedBy,
        const std::string& registration)
        : series(series), number(number), surname(surname), name(name), patronymic(patronymic),
        birthDate(birthDate), birthPlace(birthPlace), issueDate(issueDate), issuedBy(issuedBy),
        registration(registration) {}

    string Passport::getSeries() const { return series; }
    string Passport::getNumber() const { return number; }
    string Passport::getSurname() const { return surname; }
    string Passport::getName() const { return name; }
    string Passport::getPatronymic() const { return patronymic; }
    string Passport::getBirthDate() const { return birthDate; }
    string Passport::getBirthPlace() const { return birthPlace; }
    string Passport::getIssueDate() const { return issueDate; }
    string Passport::getIssuedBy() const { return issuedBy; }
    string Passport::getRegistration() const { return registration; }
}
