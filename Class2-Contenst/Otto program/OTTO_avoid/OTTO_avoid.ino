
#include <Servo.h>
#include <Oscillator.h>
#include <US.h>
#include <Otto.h>
Otto Otto;  //This is Otto!
//---------------------------------------------------------
//-- First step: Make sure the pins for servos are in the right position
/*
         ---------------
        |     O   O     |
        |---------------|
  YR 3==> |               | <== YL 2
         ---------------
            ||     ||
  RR 5==>   -----   ------  <== RL 4
         |-----   ------|
*/
#define PIN_YL 2 //servo[2]
#define PIN_YR 3 //servo[3]
#define PIN_RL 4 //servo[4]
#define PIN_RR 5 //servo[5]

int T = 1000;            //Initial duration of movement
int moveId = 0;          //Number of movement
int moveSize = 15;       //Asociated with the height of some movements

bool obstacleDetected = false; // obje tanıma değere başlangıç olarak yanlış yani tanınmadı olarak başlat

void setup() {
  //Set the servo pins
  Otto.init(PIN_YL, PIN_YR, PIN_RL, PIN_RR, true);// tüm sanınmış servoları başlat
  Otto.sing(S_connection); // otto buzzer'ı kullanarak şarkı söyleme
  Otto.home();
  delay(50);
  //Otto.sing(S_happy);// otto buzzer'ı kullanarak şarkı söyleme
}

void loop() {
  /*
    eğer engel bulunduysa ses çıkarıp geriye adım atıp dön
  */
  if (obstacleDetected) {
    Otto.sing(S_surprise); // otto buzzer'ı kullanarak şarkı söyleme
    Otto.playGesture(OttoFretful);
    Otto.sing(S_fart3); // otto buzzer'ı kullanarak şarkı söyleme
    Otto.walk(2, 1300, -1);   // 2 adım atma sayısı, 1300 adım süresü belirlene,  -1 geriye doğru, 1 ileri doğru
    Otto.turn(2, 1000, -1); // -1 geriye doğru, 1 ileri doğru
    delay(50);
    obstacleDetector();
  }
  else {
    Otto.walk(1, 1000, 1); // ileri doğru yürü
    obstacleDetector(); // fonksiyon çağırma aşşağıdaki
  }
}

void obstacleDetector() {
  int distance = Otto.getDistance(); // obje ve otto arasındaki mesafeyi ölç
  if (distance < 15) { //mesafe eğer 15cm den küçükse ozaman  obstacleDetected değerini True yani obje tanındı doğru olarak yaz
    obstacleDetected = true;
  } else {
    obstacleDetected = false;
  }
}
