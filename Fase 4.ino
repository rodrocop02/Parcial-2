// Función que convierte grados Celsius a grados Fahrenheit
float celsiusToFahrenheit(float celsius) {
  float fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
  return fahrenheit;
}

// Función que convierte grados Fahrenheit a grados Celsius
float fahrenheitToCelsius(float fahrenheit) {
  float celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
  return celsius;
}

void setup() {
  Serial.begin(9600); // Inicializar la comunicación serial a 9600 baudios
}

void loop() {
  Serial.println("¿Que temperatura desea convertir?");
  Serial.println("1. Celsius a Fahrenheit");
  Serial.println("2. Fahrenheit a Celsius");
  while (!Serial.available()); // Esperar a que el usuario ingrese una opción
  int opcion = Serial.parseInt(); // Leer la opción ingresada por el usuario
  Serial.println();

  if (opcion == 1) {
    Serial.println("Ingrese la temperatura en grados Celsius:");
    delay(4000);
    while (!Serial.available()); // Esperar a que el usuario ingrese la temperatura
    int temperaturaCelsius = Serial.parseInt(); // Leer la temperatura ingresada por el usuario
    int temperaturaFahrenheit = celsiusToFahrenheit(temperaturaCelsius); // Convertir a grados Fahrenheit
    Serial.println();
    Serial.print(temperaturaCelsius);
    Serial.print(" grados Celsius son ");
    Serial.print(temperaturaFahrenheit);
    Serial.println(" grados Fahrenheit.");
  }
  else if (opcion == 2) {
    Serial.println("Ingrese la temperatura en grados Fahrenheit:");
    delay(4000);
    while (!Serial.available()); // Esperar a que el usuario ingrese la temperatura
    float temperaturaFahrenheit = Serial.parseFloat(); // Leer la temperatura ingresada por el usuario
    float temperaturaCelsius = fahrenheitToCelsius(temperaturaFahrenheit); // Convertir a grados Celsius
    Serial.print(temperaturaFahrenheit);
    Serial.print(" grados Fahrenheit son ");
    Serial.print(temperaturaCelsius);
    Serial.println(" grados Celsius.");
  }
  else {
    Serial.println("Opción inválida. Por favor ingrese 1 o 2.");
  }
  
  Serial.println();
  delay(1000); // Esperar un segundo antes de repetir el ciclo
}

