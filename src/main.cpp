#include <Arduino.h>

#define EN        8       //步进电机使能端，低电平有效

#define X_DIR     5       //X轴 步进电机方向控制

#define Y_DIR     6       //y轴 步进电机方向控制

#define Z_DIR     7       //z轴 步进电机方向控制

#define X_STP     2       //x轴 步进控制

#define Y_STP     3       //y轴 步进控制

#define Z_STP     4       //z轴 步进控制



void setup(){//将步进电机用到的IO管脚设置成输出

  pinMode(X_DIR, OUTPUT); pinMode(X_STP, OUTPUT);

  pinMode(Y_DIR, OUTPUT); pinMode(Y_STP, OUTPUT);

  pinMode(Z_DIR, OUTPUT); pinMode(Z_STP, OUTPUT);

  pinMode(EN, OUTPUT);

  digitalWrite(EN, LOW);

}

void loop(){

  digitalWrite(X_DIR,HIGH);
  digitalWrite(Y_DIR,HIGH);
  digitalWrite(Z_DIR,HIGH);
  digitalWrite(X_STP,HIGH);
  digitalWrite(Y_STP,HIGH);
  digitalWrite(Z_STP,HIGH);

}

 