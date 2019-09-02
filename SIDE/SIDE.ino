#define odein 3
#define twinklein 2
#define odeout 13
#define twinkleout 12

void setup(){
  Serial.begin(9600);
  pinMode(odein, INPUT);
  pinMode(twinklein, INPUT);
  pinMode(twinkleout,OUTPUT);
  pinMode(odeout, OUTPUT);
  }
  void loop(){
    int ode = digitalRead(odein);
    int twinkle = digitalRead(twinklein);
    Serial.print("ode:");
    Serial.println(ode);
    Serial.print("twinkle:");  
    Serial.println(twinkle);
    if (ode == 0){
          digitalWrite(odeout, LOW);
      }
    if (twinkle == 0){
          digitalWrite(twinkleout, LOW);
      }
    if (ode == 1){
          digitalWrite(odeout, HIGH);
      }
    if (twinkle == 1){
          digitalWrite(twinkleout, HIGH);
      }
    }
