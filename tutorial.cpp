#include <iostream>

#ifdef USE_MYMATH
#   include "MathFunctions.h"
#endif

#include "tutorial-config.h"

using namespace std;

int main(int argc, char *argv[]) {
#ifdef USE_MYMATH
    const double outputValue = mysqrt(inputValue);
#else
    const double outputValue = sqrt(inputValue);
#endif

    if (argc < 2) {
        // report version
        std::cout << argv[0] << " Version " << Tutorial_VERSION_MAJOR << "."
                  << Tutorial_VERSION_MINOR << std::endl;
        std::cout << "Usage: " << argv[0] << " number" << std::endl;
        return 1;
    }
}