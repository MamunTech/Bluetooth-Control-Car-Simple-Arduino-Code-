/*
 * Demo code for "Bluetooth_Remote.apk · version 1"
 * developed by Abdullah Al Mamun,EEE(EWU),Bangladesh,Dhaka
 * for app go to this link
 * https://www.facebook.com/groups/roboeeeewu/files/
 * 
 */

void setup()
{
  //Initialize the pin you use to control your car
   Serial.begin(9600);// use if you want to see anything in serial monitor

}

void loop() {
 while(Serial.available()){
  switch(Serial.read()){
    
  case 'U':
  up();  // function for going upward 
  break;
  
  case 'D':
  down(); //function for going downward 
  break;

  case 'L':
  left(); //function for going left 
  break;

  case 'R':
  right(); //function for going right
  break;

  case 'S':
  Stop(); //function for stop the car
  break;
  
 }
 }
}
void up(){
  //write ur command for going upward
  }
void down(){
   // write ur command for going downward
  }
  void left(){
  //write ur command for going left
  }
void right(){
    //write ur command for going right
  }
 void Stop(){
  //write ur command for stop
  }


