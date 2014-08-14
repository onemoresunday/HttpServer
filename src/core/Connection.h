/*
 * Dispatcher.h
 *
 *  Created on: 06/04/2014
 *      Author: DB
 */

#ifndef DISPATCHER_H_
#define DISPATCHER_H_

#include "protocol/Request.h"
#include "protocol/Response.h"

namespace HTTP
{

class Connection
{
   public:
      Connection();
      virtual ~Connection();

      void startListening();
      void disconnect();
      Request readRequest();
      bool writeResponse(Response response, int sessionId) const;
      void setPort(unsigned int port);
      int getSessionId() const;

   private:
      bool mbStarted;
      int mSocketDesc;
      int mSessionId;
      unsigned int mPort;
};

}
#endif /* DISPATCHER_H_ */