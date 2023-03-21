#include <iostream>
#include <stdio.h>
#include "curl/curl.h"
int main(int argc, char** argv)
{
    CURLcode res;
    CURL *  curl_handle = curl_easy_init();
    if(curl_handle)
    {
        // задаем  url адрес
        curl_easy_setopt(curl_handle, CURLOPT_URL, "https://api.ipify.org");
        // выполняем запрос
        res = curl_easy_perform(curl_handle);
         if (res != CURLE_OK) {
                std::cerr << "Error during curl request: " << curl_easy_strerror(res) << std::endl;
         }
        // закрываем дескриптор curl
        curl_easy_cleanup(curl_handle);
    }
    else {
            std::cerr << "Error initializing curl." << std::endl;
        }
        

    curl_global_cleanup();
    return 0;
}