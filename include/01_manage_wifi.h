IPAddress local_IP(192, 168, 0, 40);
IPAddress gateway(192, 168, 0, 1);
IPAddress subnet(255, 255, 255, 0);




void wifi_init(){
   WiFi.config(local_IP, gateway, subnet);
  // WiFi.begin("DEV_WIFI_FHR", "12345678");
   WiFi.begin("S7_TRAINER", "12345678");

  while (WiFi.status() != WL_CONNECTED) { 
    delay(500);
    Serial.print(".");



  }


  Serial.println("");
  Serial.println("WiFi connected");  
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());

}