#include <iostream>
#include <sys/utsname.h>
#include "client.h"
#include "client_feature/client_feature.h"

int main() {
    utsname u{};
    if (uname(&u) != 0)
        return 1;
    std::cout << "Hello from " << u.nodename << '!' << std::endl;

    ClientFeature client_feature;
    Client client(&client_feature);
    return 0;
}
