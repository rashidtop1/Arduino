#include <TaskManagerIO.h>
int ledPins[] = {3, 5, 6, 9, 10, 11};
int states[] = {LOW, LOW, LOW, LOW, LOW, LOW};

int numLedPins = 6;

void setup() {

  for (int i = 0; i < numLedPins; i++) {
    pinMode(ledPins[i], OUTPUT);
  }

  taskManager.scheduleFixedRate(700000, [] {
    if (states[0] == LOW) {
      states[0] = HIGH;
      digitalWrite(ledPins[0], HIGH); // Включаем светодиод
    }
    else {
      states[0] = LOW;
      digitalWrite(ledPins[0], LOW); // Выключаем светодиод
    }
  }, TIME_MICROS);

  taskManager.scheduleFixedRate(600000, [] {
    if (states[1] == LOW) {
      states[1] = HIGH;
      digitalWrite(ledPins[1], HIGH); 
    }
    else {
      states[1] = LOW;
      digitalWrite(ledPins[1], LOW); 
    }
  }, TIME_MICROS);

  taskManager.scheduleFixedRate(500000, [] {
    if (states[2] == LOW) {
      states[2] = HIGH;
      digitalWrite(ledPins[2], HIGH); 
    }
    else {
      states[2] = LOW;
      digitalWrite(ledPins[2], LOW); 
    }
  }, TIME_MICROS);

  taskManager.scheduleFixedRate(400000, [] {
    if (states[3] == LOW) {
      states[3] = HIGH;
      digitalWrite(ledPins[3], HIGH); 
    }
    else {
      states[3] = LOW;
      digitalWrite(ledPins[3], LOW); 
    }
  }, TIME_MICROS);

  taskManager.scheduleFixedRate(300000, [] {
    if (states[4] == LOW) {
      states[4] = HIGH;
      digitalWrite(ledPins[4], HIGH); 
    }
    else {
      states[4] = LOW;
      digitalWrite(ledPins[4], LOW);
    }
  }, TIME_MICROS);

  taskManager.scheduleFixedRate(200000, [] {
    if (states[5] == LOW) {
      states[5] = HIGH;
      digitalWrite(ledPins[5], HIGH); 
    }
    else {
      states[5] = LOW;
      digitalWrite(ledPins[5], LOW); 
    }
  }, TIME_MICROS);
}

void loop() {

  taskManager.runLoop();
}
