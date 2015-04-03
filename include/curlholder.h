#ifndef CPR_CURL_HOLDER_H
#define CPR_CURL_HOLDER_H

#include <memory>

#include <curl/curl.h>


typedef struct {
    CURL* handle;
    struct curl_slist* chunk;
} CurlHolder;

#endif