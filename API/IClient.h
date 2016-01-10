#ifndef _ICLIENT_H
# define _ICLIENT_H

namespace Ziartist
{

	class IClient
	{
	public:
		IClient() = default;
		virtual ~IClient() = default;

		virtual const std::string &getIpAddr() const = 0;
	};
}

#endif /* !_ICLIENT_H */