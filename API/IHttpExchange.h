#ifndef _IHTTPEXCHANGE_H
# define _IHTTPEXCHANGE_H

# include "IHttpRequest.h"
# include "IHttpResponse.h"
# include "IClient.h"

namespace Ziartist
{

  class IHttpExchange
  {
  public:
    IHttpExchange() = default;
    virtual ~IHttpExchange() = default;
  
    virtual void setHttpRequest(IHttpRequest *request) = 0;
    virtual void setHttpResponse(IHttpResponse *request) = 0;

    virtual const IClient &getClient() const = 0;
    virtual const IHttpRequest &getHttpRequest() const = 0;
    virtual const IHttpResponse &getHttpResponse() const = 0;
  };
}

#endif /* !_IHTTPEXCHANGE_H */
