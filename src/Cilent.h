#ifndef SEVER_H
#define SEVER_H

#include <WiFi.h>
#include <WiFiClient.h>
#include <HTTPClient.h>
#include <ArduinoJson.h>
#include <map>

class Cilent
{
public:
    void RequestGET(const char *url, String &response);
    void RequestPOST(const char *url, const std::map<String, String>& data, String &response);
    void CreateCard(const char *card_uid, String &response);
    void Action(const char *card_uid, const char *plate, String &response);

private:
    HTTPClient http;
};

#endif