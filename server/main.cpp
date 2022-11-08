#include <iostream>
#include <sys/utsname.h>
#include "server.h"
#include "server_feature/server_feature.h"

int main() {
    utsname u{};
    if (uname(&u) != 0)
        return 1;
    std::cout << "Hello from " << u.nodename << '!' << std::endl;

    ServerFeature client_feature;
    Server server(&client_feature);
    return 0;
}
