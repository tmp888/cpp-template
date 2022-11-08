//
// Created by tp on 8/11/22.
//

#include "server.h"
#include <iostream>
#include "server_feature/server_feature.h"

Server::Server(ServerFeature *server_feature) {
    m_server_feature = server_feature;
    std::cout << "Server constructor\n";
}

Server::~Server() {

}
