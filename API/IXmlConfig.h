#ifndef                            _IXMLCONFIG_H
# define                           _IXMLCONFIG_H

namespace                          Ziartist
{

  class                            IXmlConfig
  {
  public:
    IXmlConfig() = default;
    virtual ~IXmlConfig() = default;
  
    virtual bool					hasValue(const std::string &key) const = 0;
    virtual std::string				getValue(const std::string &key) const = 0;
  };
}

#endif /* !_IXMLCONFIG_H */