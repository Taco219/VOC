#include "GetallenChecker.h"

bool GetallenChecker::IsValidGetal(const std::string &TokenString) {
    int getal = ConvertGetalToInt(TokenString);
    return getal >= 0;
}

int GetallenChecker::ConvertGetalToInt(const std::string &getalString) {
    int getal = -1;

    if(getalString == "EEN")            { getal = 1; }
    else if (getalString == "TWEE")     { getal = 2; }
    else if (getalString == "DRIE")     { getal = 3; }
    else if (getalString == "VIER")     { getal = 4; }
    else if (getalString == "VIJF")     { getal = 5; }
    else if (getalString == "ZES")      { getal = 6; }
    else if (getalString == "ZEVEN")    { getal = 7; }
    else if (getalString == "ACHT")     { getal = 8; }
    else if (getalString == "NEGEN")    { getal = 9; }
    else if (getalString == "NUL")      { getal = 0; }

    return getal;
}
