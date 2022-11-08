//
// Created by tp on 8/11/22.
//

#ifndef CPP_TEMPLATE_CLIENT_H
#define CPP_TEMPLATE_CLIENT_H

#include "client_feature/client_feature.h"


class Client {
    ClientFeature* m_client_feature = nullptr;

public:
    Client(ClientFeature* client_feature);

    virtual ~Client();
};


#endif //CPP_TEMPLATE_CLIENT_H
