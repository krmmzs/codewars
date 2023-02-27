#include <cstdint>
#include <string>
#include <bitset>

std::string add_binary(uint64_t a, uint64_t b) {
    std::string res = std::bitset<64>(a + b).to_string();
    res.erase(0, res.find_first_not_of('0'));
    return res;
}
