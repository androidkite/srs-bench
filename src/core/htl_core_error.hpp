#ifndef _htl_core_error_hpp
#define _htl_core_error_hpp

/*
#include <htl_core_error.hpp>
*/

#define ERROR_SUCCESS 0

#define ERROR_SOCKET 100
#define ERROR_OPEN_SOCKET 101
#define ERROR_CONNECT 102
#define ERROR_SEND 103
#define ERROR_READ 104
#define ERROR_CLOSE 105
#define ERROR_DNS_RESOLVE 106

#define ERROR_URL_INVALID 200
#define ERROR_HTTP_RESPONSE 201

#define ERROR_NOT_SUPPORT 300

#define ERROR_ST_INITIALIZE 400
#define ERROR_ST_THREAD_CREATE 401

#define ERROR_HP_PARSE_URL 500
#define ERROR_HP_EP_CHNAGED 501
#define ERROR_HP_PARSE_RESPONSE 502

#define ProductName "Bravo HttpLoad/1.0"

#define HTTP_HEADER_BUFFER 40
#define HTTP_BODY_BUFFER 4096

#endif
