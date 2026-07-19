Hyper Icon
1
100%
#include <DHT.h>  
#include <ESP8266WiFi.h>  
#include <ThingSpeak.h>  

#define DHTPIN D3  
#define DHTTYPE DHT11  

DHT dht(DHTPIN, DHTTYPE);  

const char* ssid = "";  
const char* password = "";  

WiFiClient client;  

unsigned long myChannelNumber = ;  
const char * myWriteAPIKey = "";  

float temperature, humidity;  

void setup()  
{  
  Serial.begin(115200);  
  dht.begin();  
  delay(10);  
  Serial.println();  
  Serial.println();  
  Serial.print("Connecting to ");  
  Serial.println(ssid);  
  WiFi.begin(ssid, password);  
  while (WiFi.status() != WL_CONNECTED)  
  {  
   delay(500);  
   Serial.print(".");  
  }  
  Serial.println("");  
  Serial.println("WiFi connected");  
  // Print the IP address  
  Serial.println(WiFi.localIP());  
  ThingSpeak.begin(client);  
}  
void loop()   
{  
  temperature = dht.readTemperature();  
  humidity = dht.readHumidity();  
  Serial.print("Temperature Value is :");  
  Serial.print(temperature);  
  Serial.println("C");  
  Serial.print("Humidity Value is :");  
  Serial.print(humidity);  
  Serial.println("%");  

  ThingSpeak.setField(1, temperature);
  ThingSpeak.setField(2, humidity); 
  
  ThingSpeak.writeFields(myChannelNumber,myWriteAPIKey);  
  
  delay(10000); // ThingSpeak will only accept updates every 15 seconds. 
} 
