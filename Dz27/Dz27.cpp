#include "Passport.h"
#include "Visa.h"
#include "ForeignPassport.h"
#include <iostream>

int main() {
    Passport passport("AB123456", "123456", "Ivanov", "Ivan", "Ivanovich", "1990-01-01", "Kharkiv", "2020-01-01", "Kharkiv City Council", "Kharkiv, Ukraine");

    cout << "Passport:" << endl;
    cout << "Series: " << passport.getSeries() << endl;
    cout << "Number: " << passport.getNumber() << endl;
    cout << "Surname: " << passport.getSurname() << endl;
    cout << "Name: " << passport.getName() << endl;
    cout << "Patronymic: " << passport.getPatronymic() << endl;
    cout << "Birth Date: " << passport.getBirthDate() << endl;
    cout << "Birth Place: " << passport.getBirthPlace() << endl;
    cout << "Issue Date: " << passport.getIssueDate() << endl;
    cout << "Issued By: " << passport.getIssuedBy() << endl;
    cout << "Registration: " << passport.getRegistration() << endl;

    Visa visa1("Germany", "2020-01-01", "2025-01-01");
    Visa visa2("Poland", "2022-01-01", "2027-01-01");

    ForeignPassport foreignPassport("AB123456", "123456", "Ivanov", "Ivan", "Ivanovich", "1990-01-01", "Kharkiv", "2020-01-01", "Kharkiv City Council", "Kharkiv, Ukraine");
    foreignPassport.addVisa(visa1);
    foreignPassport.addVisa(visa2);

    cout << "Foreign Passport:" << endl;
    cout << "Series: " << foreignPassport.getSeries() << endl;
    cout << "Number: " << foreignPassport.getNumber() << endl;
    cout << "Surname: " << foreignPassport.getSurname() << endl;
    cout << "Name: " << foreignPassport.getName() << endl;
    cout << "Patronymic: " << foreignPassport.getPatronymic() << endl;
    cout << "Birth Date: " << foreignPassport.getBirthDate() << endl;
    cout << "Birth Place: " << foreignPassport.getBirthPlace() << endl;
    cout << "Issue Date: " << foreignPassport.getIssueDate() << endl;
    cout << "Issued By: " << foreignPassport.getIssuedBy() << endl;
    cout << "Registration: " << foreignPassport.getRegistration() << endl;

    vector<Visa> visas = foreignPassport.getVisas();
    cout << "Visas:" << endl;
    for (const auto& visa : visas) {
        cout << "Country: " << visa.getCountry() << endl;
        cout << "Opening Date: " << visa.getOpeningDate() << endl;
        cout << "Closing Date: " << visa.getClosingDate() << endl;
    }

    return 0;
}
