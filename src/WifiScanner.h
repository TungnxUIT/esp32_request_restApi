#ifndef WIFI_SCANNER_H
#define WIFI_SCANNER_H

#include "WiFi.h"

class WiFiScanner
{
public:
  void init();
  void scan();
  void connectWifi(const char *ssid, const char *password);
  bool isConnected();
  void setConnected(bool connected);

private:
  bool connected;
};

#endif // WIFI_SCANNER_H
