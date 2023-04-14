#include <TaskManager.h>

const int ledPin = LED_BUILTIN;

int ledState1 = LOW;
int ledState2 = LOW;
int ledState3 = LOW;
int ledState4 = LOW;
int ledState5 = LOW;
int ledState6 = LOW;

void toggleLed1() {
  if (ledState1 == LOW) {
    ledState1 = HIGH;
  } else {
    ledState1 = LOW;
  }
  digitalWrite(11, ledState1);
}

void toggleLed2() {
  if (ledState2 == LOW) {
    ledState2 = HIGH;
  } else {
    ledState2 = LOW;
  }
  digitalWrite(10, ledState2);
}

void toggleLed3() {
  if (ledState3 == LOW) {
    ledState3 = HIGH;
  } else {
    ledState3 = LOW;
  }
  digitalWrite(9, ledState3);
}

void toggleLed4() {
  if (ledState4 == LOW) {
    ledState4 = HIGH;
  } else {
    ledState4 = LOW;
  }
  digitalWrite(6, ledState4);
}

void toggleLed5() {
  if (ledState5 == LOW) {
    ledState5 = HIGH;
  } else {
    ledState5 = LOW;
  }
  digitalWrite(5, ledState5);
}

void toggleLed6() {
  if (ledState6 == LOW) {
    ledState6 = HIGH;
  } else {
    ledState6 = LOW;
  }
  digitalWrite(3, ledState6);
}

void setup() {
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(3, OUTPUT);

  taskManager.scheduleFixedRate(100000, toggleLed1, TimerUnit::TIME_MICROS);
  taskManager.scheduleFixedRate(200000, toggleLed2, TimerUnit::TIME_MICROS);
  taskManager.scheduleFixedRate(400000, toggleLed3, TimerUnit::TIME_MICROS);
  taskManager.scheduleFixedRate(500000, toggleLed4, TimerUnit::TIME_MICROS);
  taskManager.scheduleFixedRate(600000, toggleLed5, TimerUnit::TIME_MICROS);
  taskManager.scheduleFixedRate(700000, toggleLed6, TimerUnit::TIME_MICROS);
}

void loop() {
  taskManager.runLoop();
}
