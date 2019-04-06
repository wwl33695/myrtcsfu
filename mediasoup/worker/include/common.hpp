#ifndef MS_COMMON_HPP
#define MS_COMMON_HPP

#include <algorithm>    // std::transform(), std::find(), std::min(), std::max()

#ifdef _WIN32
	#include <winsock2.h>
#else
	#include <arpa/inet.h>  // htonl(), htons(), ntohl(), ntohs()
	#include <netinet/in.h> // sockaddr_in, sockaddr_in6
	#include <sys/socket.h> // struct sockaddr, struct sockaddr_storage, AF_INET, AF_INET6
#endif

#include <cinttypes>    // PRIu64, etc
#include <cstddef>      // size_t
#include <cstdint>      // uint8_t, etc
#include <memory>       // std::addressof()

#endif
