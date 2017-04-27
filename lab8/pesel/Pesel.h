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
        Pesel(const string pesel): pesel_(pesel){};
        void validatePESEL(const string pesel);
    private:
        string pesel_;
    };

    class AcademiaDataValidationError: public std::runtime_error{
    public:
        AcademiaDataValidationError(): std::runtime_error("error"){};
        virtual ~AcademiaDataValidationError();
    };

    class InvalidPeselChecksum: public AcademiaDataValidationError{
    };

    class InvalidPeselLength: public AcademiaDataValidationError{
    };

    class InvalidPeselCharacter: public AcademiaDataValidationError{
    };
}

#endif //JIMP_EXERCISES_PESEL_H
