#include "WifiScanner.h"
#include "Cilent.h"
#include <cstring>

WiFiScanner wifi;
Cilent cilent;

const char *ssid = "Wokwi-GUEST";                         // Tên Wifi
const char *password = "";                                // Mật khẩu wifi
const char *severUrl = "https://ce224.azurewebsites.net"; // sever url
String response;                                          // reponse từ sever

void setup()
{
  wifi.init();                         // Khởi tạo wifi
  wifi.connectWifi("Wokwi-GUEST", ""); // Kết nối wifi

  if (wifi.isConnected())
  {
    const char *endpoint = "/welcome";
    char url[256];

    strcpy(url, severUrl);
    strcat(url, endpoint);

    cilent.RequestGET(url, response);
    Serial.println(response);       //Sẽ in ra message: welcome.
  }
}

void loop() {}