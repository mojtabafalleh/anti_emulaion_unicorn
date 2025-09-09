#include <iostream>
extern "C" unsigned __int64 MulAndGetFlags(unsigned __int64 input);
int main() {
    unsigned __int64 input = 0x12345678;
    unsigned __int64 flags = MulAndGetFlags(input);


    std::cout << "Flags: 0x" << std::hex << flags << std::endl;

    if(flags != 0x46)
        std::cout << "real PC !";
    else
        std::cout << "YOU ARE IN THE MATRIX !";
    return 0;
}
