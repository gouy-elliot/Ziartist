#ifndef                            _IMODULE_H
# define                           _IMODULE_H

# include                          "IXmlConfig.h"
# include                          "IHttpExchange.h"

namespace                          Ziartist
{

  class                            IModule
  {
  public:
    IModule() = default;
    virtual ~IModule() = default;
  
    virtual bool                   onLoad(const IXmlConfig &config) = 0;
    virtual bool                   onExec(IHttpExchange $exchange) = 0;
    virtual bool                   onPostExec() = 0;
  };
}

extern "C"
{
  Ziartist::IModule                *getModule();
}

#endif /* !_IMODULE_H */