//
// Created by tp on 8/11/22.
//

#include "client.h"
#include <iostream>
#include "client_feature/client_feature.h"

Client::Client(ClientFeature *client_feature) {
    m_client_feature = client_feature;
    std::cout << "Client constructor\n";
}

Client::~Client() {

}
