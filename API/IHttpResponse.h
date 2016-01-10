#ifndef			                       _IHTTPRESPONSE_H
#define			                       _IHTTPRESPONSE_H

#include                           <string>
#include		                       "IHttpObject.h"

namespace		                       Ziartist
{

  struct                           HttpStatus
  {
    uint16                         code;
    std::string                    status;
  };

  class			                       IHttpResponse : public virtual IHttpObject
  {
    public:
      IHttpResponse() = default;
      virtual ~IHttpResponse() = default;

      virtual void	               setStatus(const HttpStatus &status) = 0;
      
      virtual const HttpStatus	   &getStatus() const = 0;
  };
}

#endif /* !_IHTTPRESPONSE_H */