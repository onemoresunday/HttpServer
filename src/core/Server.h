/*******************************************************************
 * Server.h
 *
 *  @date: 18 ���. 2014
 *  @author: DB
 ******************************************************************/

#ifndef SERVER_H_
#define SERVER_H_

#include "core/Connector.h"
#include "common/Config.h"

class Server
{
   public:
      Server();
      virtual ~Server();

      void setConnector(const Connector& connector);

      void start();

   private:
      Connector mConnector;
};

#endif /* SERVER_H_ */
