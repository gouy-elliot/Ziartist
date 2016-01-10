#ifndef                            	_IHTTPOBJECT_H
# define                            _IHTTPOBJECT_H

# include							<map>
# include							<string>

namespace							Ziartist
{

	struct							HttpBuffer
	{
		uint64						length;
		char						*data;
	};

	class 							IHttpObject
	{
	public:
		IHttpObject() = default;
		virtual ~IHttpObject() = default;

		typedef std::map<std::string, std::string> Headers;

		virtual const Headers		&getHeaders() const = 0;
		virtual const HttpBuffer	&getHttpBuffer() const = 0;
		virtual const std::string	&getHttpVersion() const = 0;
	};
}

#endif /* !_IHTTPOBJECT_H */