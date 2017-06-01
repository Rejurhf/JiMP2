//
// Created by Student on 27/04/17.
//

#ifndef JIMP_EXERCISES_PESEL_H
#define JIMP_EXERCISES_PESEL_H

#include <string>
using std::string;

namespace academia {
    class Pesel {
    public:
        Pesel(const string &pesel): pesel_(pesel){
            validatePESEL(pesel_);
        };
    private:
        string pesel_;
        void validatePESEL(const string &pesel);
    };

    class AcademiaDataValidationError: public std::runtime_error{
    public:
        AcademiaDataValidationError(const string &arg): std::runtime_error(arg){};
    };

    class InvalidPeselLength: public AcademiaDataValidationError{
    public:
        InvalidPeselLength(const string &pesel, int length):
                AcademiaDataValidationError("Invalid PESEL(" + pesel + ") length: " + std::to_string(pesel.size())){};
    };

    class InvalidPeselCharacter: public AcademiaDataValidationError{
    public:
        InvalidPeselCharacter(const string &pesel): AcademiaDataValidationError("Invalid PESEL(" + pesel +
                                                                                        ") character set"){};
    };

    class InvalidPeselChecksum: public AcademiaDataValidationError{
    public:
        InvalidPeselChecksum(const string &pesel, int sum):
                AcademiaDataValidationError("Invalid PESEL(" + pesel + ") checksum: " + std::to_string(sum)){};
    };


}

#endif //JIMP_EXERCISES_PESEL_H
