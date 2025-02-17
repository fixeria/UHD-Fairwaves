#ifndef INCLUDED_UMTRX_COMMON_HPP
#define INCLUDED_UMTRX_COMMON_HPP

#include <boost/version.hpp>
#include <uhd/version.hpp>

#if UHD_VERSION >= 4000000
#define UMTRX_UHD_PTR_NAMESPACE std
#else
#define UMTRX_UHD_PTR_NAMESPACE boost
#endif

#if BOOST_VERSION >= 106600
    #define PARSE_IP_V4_FROM_STRING(ip_str) boost::asio::ip::make_address_v4(ip_str)
    #define BOOST_IO_CONTEXT boost::asio::io_context
#else
    #define PARSE_IP_V4_FROM_STRING(ip_str) boost::asio::ip::address_v4::from_string(ip_str)
    #define BOOST_IO_CONTEXT boost::asio::io_service
#endif

#endif /* INCLUDED_UMTRX_COMMON_HPP */
