#include <DHT.h>

#define DHTPIN D2
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);

void setup() {

  Serial.begin(115200);

  dht.begin();

  Serial.println("DHT22 is running.");
}

void loop() {

  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  if (isnan(sicaklik) || isnan(nem)) {
    Serial.println("Sensor okunamadi!");
    delay(2000);
    return;
  }

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print(" C");

  Serial.print("   Humidty: ");
  Serial.print(humidity);
  Serial.println(" %");

  delay(2000);
}
