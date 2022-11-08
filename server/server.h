//
// Created by tp on 8/11/22.
//

#ifndef CPP_TEMPLATE_SERVER_H
#define CPP_TEMPLATE_SERVER_H

#include "server_feature/server_feature.h"


class Server {
    ServerFeature* m_server_feature = nullptr;

public:
    Server(ServerFeature* server_feature);

    virtual ~Server();
};


#endif //CPP_TEMPLATE_SERVER_H
