std::string decodeMorse(std::string morseCode) {
    // ToDo: Accept dots, dashes and spaces, return human-readable message
    std::string decoded;
    std::size_t cp, ce, te;

    // Find begin of morseCode
    cp = morseCode.find_first_not_of(" ");
    // Find end of morseCode
    te = morseCode.find_last_not_of(" ");

    do {
        // Find the position of the next space
        ce = morseCode.find(" ", cp);
        if (cp == ce) {
            decoded += " ";
            ce ++;
        } else {
            decoded += MORSE_CODE[morseCode.substr(cp, ce - cp)];
        }
        cp = ce + 1;
    } while (ce < te);

    return decoded;
}
