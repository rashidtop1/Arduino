// Определяем пины светодиодов
#include <TaskManager.h>

int ledPins[] = {3, 5, 6, 9, 10, 11};
int delays[] = {50,100,1000,5000,10000,100000};
int states[] = {LOW,LOW,LOW,LOW,LOW,LOW};


int numLedPins = 6;
int i = 0;
void setup() {
  // Настраиваем пины светодиодов на выход
  
  for (i; i < numLedPins; i++) {
    taskManager.scheduleFixedRate(delays[i], [] {
         if (states[i] == LOW) {
             states[i] = HIGH;
      } else {
        states[i] = LOW;
      }  

       digitalWrite(ledPins[i], states[i]);
	  }, TIME_MICROS);    
    
  }
  //for (int i = 0; i < numLedPins; i++) {
 //   pinMode(ledPins[i], OUTPUT);
  //}
}

void loop() {
  // Мигаем светодиодами по очереди
    taskManager.runLoop();
}