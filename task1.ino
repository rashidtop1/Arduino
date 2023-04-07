//Переменные ledPin1, ledPin2, ledPin3, ledPin4, ledPin5, ledPin6 
//определяют пины, на которые подключены светодиоды.


const int ledPin1 = 3;  // белая
const int ledPin2 = 5;  // синия
const int ledPin3 = 6;
const int ledPin4 = 9;
const int ledPin5 = 10;
const int ledPin6 = 11;

// еременные ledState1, ledState2, ledState3, ledState4, ledState5, ledState6 хранят текущее состояние светодиода (включен или выключен). 
int ledState1 = LOW;  // ledState used to set the LED //
int ledState2 = LOW;
int ledState3 = LOW;
int ledState4 = LOW;
int ledState5 = LOW;
int ledState6 = LOW;

// Переменные previousMillis1, previousMillis2, previousMillis3,
// previousMillis4, previousMillis5, previousMillis6 хранят время последнего изменения состояния каждого светодиода.


unsigned long previousMillis1 = 0;
unsigned long previousMillis2 = 0;
unsigned long previousMillis3 = 0;
unsigned long previousMillis4 = 0;
unsigned long previousMillis5 = 0;
unsigned long previousMillis6 = 0;
  // will store last time LED was updated

// constants won't change:
const long interval1 = 30;
const long interval2 = 400;
const long interval3 = 5000;
const long interval4 = 10000;
const long interval5 = 40000;
const long interval6 = 100000;  // interval at which to blink (milliseconds)

void setup() {
  // set the digital pin as output:
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin6, OUTPUT);
}

void loop() {
  // here is where you'd put code that needs to be running all the time.

  // check to see if it's time to blink the LED; that is, if the difference
  // between the current time and last time you blinked the LED is bigger than
  // the interval at which you want to blink the LED.
  unsigned long currentMillis = micros();

  if (currentMillis - previousMillis1 >= interval1) {
    // save the last time you blinked the LED
    previousMillis1 = currentMillis;

    // if the LED is off turn it on and vice-versa:
    if (ledState1 == LOW) {
      ledState1 = HIGH;
    } else {
      ledState1 = LOW;
    }

    // set the LED with the ledState of the variable:
    digitalWrite(ledPin1, ledState1);
  }

  if (currentMillis - previousMillis2 >= interval2) {
    // save the last time you blinked the LED
    previousMillis2 = currentMillis;

    // if the LED is off turn it on and vice-versa:
    if (ledState2 == LOW) {
      ledState2 = HIGH;
    } else {
      ledState2 = LOW;
    }

    // set the LED with the ledState of the variable:
    digitalWrite(ledPin2, ledState2);
  }
  
    if (currentMillis - previousMillis3 >= interval3) {
    // save the last time you blinked the LED
    previousMillis3 = currentMillis;

    // if the LED is off turn it on and vice-versa:
    if (ledState3 == LOW) {
      ledState3 = HIGH;
    } else {
      ledState3 = LOW;
    }

    // set the LED with the ledState of the variable:
    digitalWrite(ledPin3, ledState3);
  }

  if (currentMillis - previousMillis4 >= interval4) {
    // save the last time you blinked the LED
    previousMillis4 = currentMillis;

    // if the LED is off turn it on and vice-versa:
    if (ledState4 == LOW) {
      ledState4 = HIGH;
    } else {
      ledState4 = LOW;
    }

    // set the LED with the ledState of the variable:
    digitalWrite(ledPin4, ledState4);
  }

  if (currentMillis - previousMillis5 >= interval5) {
    // save the last time you blinked the LED
    previousMillis5 = currentMillis;

    // if the LED is off turn it on and vice-versa:
    if (ledState5 == LOW) {
      ledState5 = HIGH;
    } else {
      ledState5 = LOW;
    }

    // set the LED with the ledState of the variable:
    digitalWrite(ledPin5, ledState5);
  }

  if (currentMillis - previousMillis6 >= interval6) {
    // save the last time you blinked the LED
    previousMillis6 = currentMillis;

    // if the LED is off turn it on and vice-versa:
    if (ledState6 == LOW) {
      ledState6 = HIGH;
    } else {
      ledState6 = LOW;
    }

    // set the LED with the ledState of the variable:
    digitalWrite(ledPin6, ledState6);
  }
}
