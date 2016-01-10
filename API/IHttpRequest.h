#ifndef _IHTTPREQUEST_H
# define _IHTTPREQUEST_H

# include <string>
# include "IHttpObject.h"

namespace Ziartist
{

  enum eMethod : uint8
  {
    METHOD_UNKNOWN = 0x00,
    METHOD_OPTIONS = 0x01,
    METHOD_GET = 0x02,
    METHOD_HEAD = 0x04,
    METHOD_POST = 0x08,
    METHOD_PUT = 0x10,
    METHOD_DELETE = 0x20,
    METHOD_TRACE = 0x40,
    METHOD_CONNECT = 0x80,
    METHOD_ALL = 0xFF
  };

  class IHttpRequest : public virtual IHttpObject
  {
    public:
      IHttpRequest() = default;
      virtual ~IHttpRequest() = default;

      virtual eMethod getMethod() const = 0;
  };
}

#endif /* !_IHTTPREQUEST_H */