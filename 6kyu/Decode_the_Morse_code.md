- [Decode the Morse code](https://www.codewars.com/kata/54b724efac3d5402db00065e/cpp)

## Solution

### First Solution

```cpp
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
```

## Summary

To solve the problem about String, It is better to use `std::string::find` and `std::string::substr` to find the position of the next space and the next word.

More: `std::string::find_first_not_of`, `std::string::find_last_not_of`
