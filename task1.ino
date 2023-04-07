// Определяем пины светодиодов
int ledPins[] = {3, 5, 6, 9, 10, 11};


int numLedPins = 6;

void setup() {
  // Настраиваем пины светодиодов на выход
  for (int i = 0; i < numLedPins; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // Мигаем светодиодами по очереди
  for (int i = 0; i < numLedPins; i++) {
    digitalWrite(ledPins[i], HIGH); // Включаем светодиод
    delay(100); // Ждем 100 миллисекунд
    digitalWrite(ledPins[i], LOW); // Выключаем светодиод
  }
}
