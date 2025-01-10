#include <Wifi.h>
#include "include.h"


const char* DEFAULT_SSID = "your_wifi";
const char* DEFAULT_PASSWORD = "password_for_your_wifi";


void init_wifi() {
  WiFi.mode(WIFI_STA);
  WiFi.begin(DEFAULT_SSID, DEFAULT_PASSWORD);
  if (WiFi.waitForConnectResult() != WL_CONNECTED) {
    Serial.println("WiFi Failed!");
    return;
  }

  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());

  WiFi.setAutoReconnect(true);
}
