/* 
/* 
   -- New project -- 
    
   This source code of graphical user interface  
   has been generated automatically by RemoteXY editor. 
   To compile this code using RemoteXY library 2.3.3 or later version  
   download by link http://remotexy.com/en/library/ 
   To connect using RemoteXY mobile app by link http://remotexy.com/en/download/                    
     - for ANDROID 4.1.1 or later version; 
     - for iOS 1.2.1 or later version; 
     
   This source code is free software; you can redistribute it and/or 
   modify it under the terms of the GNU Lesser General Public 
   License as published by the Free Software Foundation; either 
   version 2.1 of the License, or (at your option) any later version.     
*/ 

////////////////////////////////////////////// 
//        RemoteXY include library          // 
////////////////////////////////////////////// 

// RemoteXY select connection mode and include library  
#define REMOTEXY_MODE__ESP8266_HARDSERIAL_CLOUD

#include <RemoteXY.h> 

// RemoteXY connection settings  
#define REMOTEXY_SERIAL Serial 
#define REMOTEXY_SERIAL_SPEED 115200 
#define REMOTEXY_WIFI_SSID "FIB" 
#define REMOTEXY_WIFI_PASSWORD "whatsupp" 
#define REMOTEXY_CLOUD_SERVER "cloud.remotexy.com" 
#define REMOTEXY_CLOUD_PORT 6376 
#define REMOTEXY_CLOUD_TOKEN "0cc719cffaa0be8eeca27161ceac9a6a" 


// RemoteXY configurate   
#pragma pack(push, 1) 
uint8_t RemoteXY_CONF[] = 
  { 255,2,0,0,0,101,0,8,13,0,
  3,2,9,24,8,22,2,26,129,0,
  10,15,43,6,17,72,121,100,114,111,
  72,97,114,109,111,110,121,0,2,0,
  66,13,22,11,2,26,31,31,79,78,
  0,79,70,70,0,129,0,24,27,18,
  6,17,79,100,101,32,116,111,32,106,
  111,121,0,129,0,24,37,18,6,17,
  84,119,105,110,107,108,101,32,84,119,
  105,110,107,108,101,32,76,105,116,116,
  108,101,32,83,116,97,114,0 }; 
   
// this structure defines all the variables of your control interface  
struct { 

    // input variable
  uint8_t select_1; // =0 if select position A, =1 if position B, =2 if position C, ... 
  uint8_t switch_1; // =1 if switch ON and =0 if OFF 

    // other variable
  uint8_t connect_flag;  // =1 if wire connected, else =0 

} RemoteXY; 
#pragma pack(pop) 

///////////////////////////////////////////// 
//           END RemoteXY include          // 
///////////////////////////////////////////// 

#define PIN_SWITCH_1 13
#define odemain 7
#define odeside 13
#define twinklemain 6
#define twinkleside 12
void setup()  
{ 
  RemoteXY_Init ();  
   
  pinMode (odemain, OUTPUT);
  pinMode (odeside, OUTPUT);
  pinMode (twinklemain, OUTPUT);
  pinMode (twinkleside, OUTPUT);
   
  // TODO you setup code 
   
} 

void loop()  
{  
  RemoteXY_Handler (); 
  int on = RemoteXY.switch_1;
  int song = RemoteXY.select_1;  
  if (on == 0){
   digitalWrite(odemain, LOW);
   digitalWrite(odeside, LOW);
   digitalWrite(twinklemain, LOW);
   digitalWrite(twinkleside, LOW);
    }
   if (on == 1 && song == 0){
    digitalWrite(odemain, HIGH);
    digitalWrite(odeside, HIGH);
    digitalWrite(twinklemain, LOW);
    digitalWrite(twinkleside, LOW);
   }
    if (on == 1 && song == 1){
      digitalWrite(odemain, LOW);
      digitalWrite(odeside, LOW);
      digitalWrite(twinklemain, HIGH);
      digitalWrite(twinkleside, HIGH);
    }
  // TODO you loop code 
  // use the RemoteXY structure for data transfer 


}
