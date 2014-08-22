/*******************************************************************
 * Response.h
 *
 *  @date: 28-7-2014
 *  @author: DB
 ******************************************************************/

#ifndef RESPONSE_H_
#define RESPONSE_H_

#include <iostream>
#include <string>
#include <map>
#include <list>

#include "Message.h"

class Response: public Message
{
   public:
      enum ResultCode
      {
         OK = 200, CREATED = 201,
         //...
         INTERNAL_SERVER_ERROR = 500,
         //...
      };

      Response();
      Response(const std::string& rawMessage);
      virtual ~Response();

      static const std::string VERSION;
      static const std::string RET_CODE;
      static const std::string RET_CODE_DESC;
      static const std::string HEADER_CONTENT_LENGTH;
      static const std::string HEADER_CONTENT_TYPE;

      const std::vector<std::string>& getHeaderPreambleFields() const;

      void setResultCode(ResultCode resultCode);
      void setVersion(const std::string& version);

      std::string toString() const;

   private:
      static const std::map<ResultCode, std::string> mResultCodeDescriptions;
      static const std::vector<std::string> mHeaderPreambleFields;
};

#endif /* RESPONSE_H_ */
