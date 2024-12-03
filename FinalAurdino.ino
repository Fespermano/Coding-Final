//Otto Fesperman
#include <Adafruit_CircuitPlayground.h>

bool leftButtonPressed;
bool rightButtonPressed; 

void setup() {
  Serial.begin(9600);
  CircuitPlayground.begin();
}

void loop() {
  leftButtonPressed = CircuitPlayground.leftButton();
  rightButtonPressed = CircuitPlayground.rightButton();
  CircuitPlayground.clearPixels();
  delay(500);

  // Left Button Halloween lights
  Serial.print("Left Button: ");
  if (leftButtonPressed) {
    //P1 SET A  purple
    CircuitPlayground.setPixelColor(0, 0x800080); 
    CircuitPlayground.setPixelColor(1, 0x800080); 
    CircuitPlayground.setPixelColor(2, 0x800080); 
    CircuitPlayground.setPixelColor(3, 0x800080); 
    CircuitPlayground.setPixelColor(4, 0x800080); 
    CircuitPlayground.setPixelColor(5, 0x800080);  
    CircuitPlayground.setPixelColor(6, 0x800080); 
    CircuitPlayground.setPixelColor(7, 0x800080); 
    CircuitPlayground.setPixelColor(8, 0x800080);  
    CircuitPlayground.setPixelColor(9, 0x800080); 
    delay(400);
    //P2 SET C green
     CircuitPlayground.setPixelColor(0, 0x06f127); 
    CircuitPlayground.setPixelColor(1, 0x06f127); 
    CircuitPlayground.setPixelColor(2, 0x06f127); 
    CircuitPlayground.setPixelColor(3, 0x06f127); 
    CircuitPlayground.setPixelColor(4, 0x06f127); 
    CircuitPlayground.setPixelColor(5, 0x06f127);    
    CircuitPlayground.setPixelColor(6, 0x06f127); 
    CircuitPlayground.setPixelColor(7, 0x06f127); 
    CircuitPlayground.setPixelColor(8, 0x06f127);  
    CircuitPlayground.setPixelColor(9, 0x06f127); 
    delay(800);
    // P3 SET B yellow
    CircuitPlayground.setPixelColor(0, 0xff8f0c); 
    CircuitPlayground.setPixelColor(1, 0xff8f0c); 
    CircuitPlayground.setPixelColor(2, 0xff8f0c); 
    CircuitPlayground.setPixelColor(3, 0xff8f0c); 
    CircuitPlayground.setPixelColor(4, 0xff8f0c); 
    CircuitPlayground.setPixelColor(5, 0xff8f0c);    
    CircuitPlayground.setPixelColor(6, 0xff8f0c); 
    CircuitPlayground.setPixelColor(7, 0xff8f0c); 
    CircuitPlayground.setPixelColor(8, 0xff8f0c);  
    CircuitPlayground.setPixelColor(9, 0xff8f0c);
    delay(400);
    //SET D blue
    CircuitPlayground.setPixelColor(0, 0x149cff); 
    CircuitPlayground.setPixelColor(1, 0x149cff); 
    CircuitPlayground.setPixelColor(2, 0x149cff); 
    CircuitPlayground.setPixelColor(3, 0x149cff); 
    CircuitPlayground.setPixelColor(4, 0x149cff); 
    CircuitPlayground.setPixelColor(5, 0x149cff);    
    CircuitPlayground.setPixelColor(6, 0x149cff); 
    CircuitPlayground.setPixelColor(7, 0x149cff); 
    CircuitPlayground.setPixelColor(8, 0x149cff);  
    CircuitPlayground.setPixelColor(9, 0x149cff);
    delay(800);
    //P4 SET A White
    CircuitPlayground.setPixelColor(0, 0xFFFFFF); 
    CircuitPlayground.setPixelColor(1, 0xFFFFFF); 
    CircuitPlayground.setPixelColor(2, 0xFFFFFF); 
    CircuitPlayground.setPixelColor(3, 0xFFFFFF); 
    CircuitPlayground.setPixelColor(4, 0xFFFFFF); 
    CircuitPlayground.setPixelColor(5, 0xFFFFFF);    
    CircuitPlayground.setPixelColor(6, 0xFFFFFF); 
    CircuitPlayground.setPixelColor(7, 0xFFFFFF); 
    CircuitPlayground.setPixelColor(8, 0xFFFFFF);  
    CircuitPlayground.setPixelColor(9, 0xFFFFFF);
    delay(400);
    //P2 SET C green
     CircuitPlayground.setPixelColor(0, 0x06f127); 
    CircuitPlayground.setPixelColor(1, 0x06f127); 
    CircuitPlayground.setPixelColor(2, 0x06f127); 
    CircuitPlayground.setPixelColor(3, 0x06f127); 
    CircuitPlayground.setPixelColor(4, 0x06f127); 
    CircuitPlayground.setPixelColor(5, 0x06f127);    
    CircuitPlayground.setPixelColor(6, 0x06f127); 
    CircuitPlayground.setPixelColor(7, 0x06f127); 
    CircuitPlayground.setPixelColor(8, 0x06f127);  
    CircuitPlayground.setPixelColor(9, 0x06f127); 
   
    delay(800); //P1 SET A  purple
    CircuitPlayground.setPixelColor(0, 0x800080); 
    CircuitPlayground.setPixelColor(1, 0x800080); 
    CircuitPlayground.setPixelColor(2, 0x800080); 
    CircuitPlayground.setPixelColor(3, 0x800080); 
    CircuitPlayground.setPixelColor(4, 0x800080); 
    CircuitPlayground.setPixelColor(5, 0x800080);  
    CircuitPlayground.setPixelColor(6, 0x800080); 
    CircuitPlayground.setPixelColor(7, 0x800080); 
    CircuitPlayground.setPixelColor(8, 0x800080);  
    CircuitPlayground.setPixelColor(9, 0x800080);
    
    delay(400); //SET D blue
    CircuitPlayground.setPixelColor(0, 0x149cff); 
    CircuitPlayground.setPixelColor(1, 0x149cff); 
    CircuitPlayground.setPixelColor(2, 0x149cff); 
    CircuitPlayground.setPixelColor(3, 0x149cff); 
    CircuitPlayground.setPixelColor(4, 0x149cff); 
    CircuitPlayground.setPixelColor(5, 0x149cff);    
    CircuitPlayground.setPixelColor(6, 0x149cff); 
    CircuitPlayground.setPixelColor(7, 0x149cff); 
    CircuitPlayground.setPixelColor(8, 0x149cff);  
    CircuitPlayground.setPixelColor(9, 0x149cff);
    delay(800);
    //P4 SET A White
    CircuitPlayground.setPixelColor(0, 0xFFFFFF); 
    CircuitPlayground.setPixelColor(1, 0xFFFFFF); 
    CircuitPlayground.setPixelColor(2, 0xFFFFFF); 
    CircuitPlayground.setPixelColor(3, 0xFFFFFF); 
    CircuitPlayground.setPixelColor(4, 0xFFFFFF); 
    CircuitPlayground.setPixelColor(5, 0xFFFFFF);    
    CircuitPlayground.setPixelColor(6, 0xFFFFFF); 
    CircuitPlayground.setPixelColor(7, 0xFFFFFF); 
    CircuitPlayground.setPixelColor(8, 0xFFFFFF);  
    CircuitPlayground.setPixelColor(9, 0xFFFFFF);
     delay(400);
    // P3 SET B yellow
    CircuitPlayground.setPixelColor(0, 0xff8f0c); 
    CircuitPlayground.setPixelColor(1, 0xff8f0c); 
    CircuitPlayground.setPixelColor(2, 0xff8f0c); 
    CircuitPlayground.setPixelColor(3, 0xff8f0c); 
    CircuitPlayground.setPixelColor(4, 0xff8f0c); 
    CircuitPlayground.setPixelColor(5, 0xff8f0c);    
    CircuitPlayground.setPixelColor(6, 0xff8f0c); 
    CircuitPlayground.setPixelColor(7, 0xff8f0c); 
    CircuitPlayground.setPixelColor(8, 0xff8f0c);  
    CircuitPlayground.setPixelColor(9, 0xff8f0c);
    delay(800); 
     //P1 SET A  purple
    CircuitPlayground.setPixelColor(0, 0x800080); 
    CircuitPlayground.setPixelColor(1, 0x800080); 
    CircuitPlayground.setPixelColor(2, 0x800080); 
    CircuitPlayground.setPixelColor(3, 0x800080); 
    CircuitPlayground.setPixelColor(4, 0x800080); 
    CircuitPlayground.setPixelColor(5, 0x800080);  
    CircuitPlayground.setPixelColor(6, 0x800080); 
    CircuitPlayground.setPixelColor(7, 0x800080); 
    CircuitPlayground.setPixelColor(8, 0x800080);  
    CircuitPlayground.setPixelColor(9, 0x800080);
    delay(400);
    //P2 SET C green
     CircuitPlayground.setPixelColor(0, 0x06f127); 
    CircuitPlayground.setPixelColor(1, 0x06f127); 
    CircuitPlayground.setPixelColor(2, 0x06f127); 
    CircuitPlayground.setPixelColor(3, 0x06f127); 
    CircuitPlayground.setPixelColor(4, 0x06f127); 
    CircuitPlayground.setPixelColor(5, 0x06f127);    
    CircuitPlayground.setPixelColor(6, 0x06f127); 
    CircuitPlayground.setPixelColor(7, 0x06f127); 
    CircuitPlayground.setPixelColor(8, 0x06f127);  
    CircuitPlayground.setPixelColor(9, 0x06f127); 
    delay(800);
   //SET D blue
    CircuitPlayground.setPixelColor(0, 0x149cff); 
    CircuitPlayground.setPixelColor(1, 0x149cff); 
    CircuitPlayground.setPixelColor(2, 0x149cff); 
    CircuitPlayground.setPixelColor(3, 0x149cff); 
    CircuitPlayground.setPixelColor(4, 0x149cff); 
    CircuitPlayground.setPixelColor(5, 0x149cff);    
    CircuitPlayground.setPixelColor(6, 0x149cff); 
    CircuitPlayground.setPixelColor(7, 0x149cff); 
    CircuitPlayground.setPixelColor(8, 0x149cff);  
    CircuitPlayground.setPixelColor(9, 0x149cff);
    delay(400);
//SET 2
    //P1 SET A  purple
    CircuitPlayground.setPixelColor(0, 0x800080); 
    CircuitPlayground.setPixelColor(1, 0x800080); 
    CircuitPlayground.setPixelColor(2, 0x800080); 
    CircuitPlayground.setPixelColor(3, 0x800080); 
    CircuitPlayground.setPixelColor(4, 0x800080); 
    CircuitPlayground.setPixelColor(5, 0x800080);  
    CircuitPlayground.setPixelColor(6, 0x800080); 
    CircuitPlayground.setPixelColor(7, 0x800080); 
    CircuitPlayground.setPixelColor(8, 0x800080);  
    CircuitPlayground.setPixelColor(9, 0x800080); 
    delay(400);
    //P2 SET C green
     CircuitPlayground.setPixelColor(0, 0x06f127); 
    CircuitPlayground.setPixelColor(1, 0x06f127); 
    CircuitPlayground.setPixelColor(2, 0x06f127); 
    CircuitPlayground.setPixelColor(3, 0x06f127); 
    CircuitPlayground.setPixelColor(4, 0x06f127); 
    CircuitPlayground.setPixelColor(5, 0x06f127);    
    CircuitPlayground.setPixelColor(6, 0x06f127); 
    CircuitPlayground.setPixelColor(7, 0x06f127); 
    CircuitPlayground.setPixelColor(8, 0x06f127);  
    CircuitPlayground.setPixelColor(9, 0x06f127); 
    delay(800);
    // P3 SET B yellow
    CircuitPlayground.setPixelColor(0, 0xff8f0c); 
    CircuitPlayground.setPixelColor(1, 0xff8f0c); 
    CircuitPlayground.setPixelColor(2, 0xff8f0c); 
    CircuitPlayground.setPixelColor(3, 0xff8f0c); 
    CircuitPlayground.setPixelColor(4, 0xff8f0c); 
    CircuitPlayground.setPixelColor(5, 0xff8f0c);    
    CircuitPlayground.setPixelColor(6, 0xff8f0c); 
    CircuitPlayground.setPixelColor(7, 0xff8f0c); 
    CircuitPlayground.setPixelColor(8, 0xff8f0c);  
    CircuitPlayground.setPixelColor(9, 0xff8f0c);
    delay(400);
    //SET D blue
    CircuitPlayground.setPixelColor(0, 0x149cff); 
    CircuitPlayground.setPixelColor(1, 0x149cff); 
    CircuitPlayground.setPixelColor(2, 0x149cff); 
    CircuitPlayground.setPixelColor(3, 0x149cff); 
    CircuitPlayground.setPixelColor(4, 0x149cff); 
    CircuitPlayground.setPixelColor(5, 0x149cff);    
    CircuitPlayground.setPixelColor(6, 0x149cff); 
    CircuitPlayground.setPixelColor(7, 0x149cff); 
    CircuitPlayground.setPixelColor(8, 0x149cff);  
    CircuitPlayground.setPixelColor(9, 0x149cff);
    delay(800);
    //P4 SET A White
    CircuitPlayground.setPixelColor(0, 0xFFFFFF); 
    CircuitPlayground.setPixelColor(1, 0xFFFFFF); 
    CircuitPlayground.setPixelColor(2, 0xFFFFFF); 
    CircuitPlayground.setPixelColor(3, 0xFFFFFF); 
    CircuitPlayground.setPixelColor(4, 0xFFFFFF); 
    CircuitPlayground.setPixelColor(5, 0xFFFFFF);    
    CircuitPlayground.setPixelColor(6, 0xFFFFFF); 
    CircuitPlayground.setPixelColor(7, 0xFFFFFF); 
    CircuitPlayground.setPixelColor(8, 0xFFFFFF);  
    CircuitPlayground.setPixelColor(9, 0xFFFFFF);
    delay(400);
    //P2 SET C green
     CircuitPlayground.setPixelColor(0, 0x06f127); 
    CircuitPlayground.setPixelColor(1, 0x06f127); 
    CircuitPlayground.setPixelColor(2, 0x06f127); 
    CircuitPlayground.setPixelColor(3, 0x06f127); 
    CircuitPlayground.setPixelColor(4, 0x06f127); 
    CircuitPlayground.setPixelColor(5, 0x06f127);    
    CircuitPlayground.setPixelColor(6, 0x06f127); 
    CircuitPlayground.setPixelColor(7, 0x06f127); 
    CircuitPlayground.setPixelColor(8, 0x06f127);  
    CircuitPlayground.setPixelColor(9, 0x06f127); 
   
    delay(800); //P1 SET A  purple
    CircuitPlayground.setPixelColor(0, 0x800080); 
    CircuitPlayground.setPixelColor(1, 0x800080); 
    CircuitPlayground.setPixelColor(2, 0x800080); 
    CircuitPlayground.setPixelColor(3, 0x800080); 
    CircuitPlayground.setPixelColor(4, 0x800080); 
    CircuitPlayground.setPixelColor(5, 0x800080);  
    CircuitPlayground.setPixelColor(6, 0x800080); 
    CircuitPlayground.setPixelColor(7, 0x800080); 
    CircuitPlayground.setPixelColor(8, 0x800080);  
    CircuitPlayground.setPixelColor(9, 0x800080);
    
    delay(400); //SET D blue
    CircuitPlayground.setPixelColor(0, 0x149cff); 
    CircuitPlayground.setPixelColor(1, 0x149cff); 
    CircuitPlayground.setPixelColor(2, 0x149cff); 
    CircuitPlayground.setPixelColor(3, 0x149cff); 
    CircuitPlayground.setPixelColor(4, 0x149cff); 
    CircuitPlayground.setPixelColor(5, 0x149cff);    
    CircuitPlayground.setPixelColor(6, 0x149cff); 
    CircuitPlayground.setPixelColor(7, 0x149cff); 
    CircuitPlayground.setPixelColor(8, 0x149cff);  
    CircuitPlayground.setPixelColor(9, 0x149cff);
    delay(800);
    //P4 SET A White
    CircuitPlayground.setPixelColor(0, 0xFFFFFF); 
    CircuitPlayground.setPixelColor(1, 0xFFFFFF); 
    CircuitPlayground.setPixelColor(2, 0xFFFFFF); 
    CircuitPlayground.setPixelColor(3, 0xFFFFFF); 
    CircuitPlayground.setPixelColor(4, 0xFFFFFF); 
    CircuitPlayground.setPixelColor(5, 0xFFFFFF);    
    CircuitPlayground.setPixelColor(6, 0xFFFFFF); 
    CircuitPlayground.setPixelColor(7, 0xFFFFFF); 
    CircuitPlayground.setPixelColor(8, 0xFFFFFF);  
    CircuitPlayground.setPixelColor(9, 0xFFFFFF);
     delay(400);
    // P3 SET B yellow
    CircuitPlayground.setPixelColor(0, 0xff8f0c); 
    CircuitPlayground.setPixelColor(1, 0xff8f0c); 
    CircuitPlayground.setPixelColor(2, 0xff8f0c); 
    CircuitPlayground.setPixelColor(3, 0xff8f0c); 
    CircuitPlayground.setPixelColor(4, 0xff8f0c); 
    CircuitPlayground.setPixelColor(5, 0xff8f0c);    
    CircuitPlayground.setPixelColor(6, 0xff8f0c); 
    CircuitPlayground.setPixelColor(7, 0xff8f0c); 
    CircuitPlayground.setPixelColor(8, 0xff8f0c);  
    CircuitPlayground.setPixelColor(9, 0xff8f0c);
    delay(800); 
     //P1 SET A  purple
    CircuitPlayground.setPixelColor(0, 0x800080); 
    CircuitPlayground.setPixelColor(1, 0x800080); 
    CircuitPlayground.setPixelColor(2, 0x800080); 
    CircuitPlayground.setPixelColor(3, 0x800080); 
    CircuitPlayground.setPixelColor(4, 0x800080); 
    CircuitPlayground.setPixelColor(5, 0x800080);  
    CircuitPlayground.setPixelColor(6, 0x800080); 
    CircuitPlayground.setPixelColor(7, 0x800080); 
    CircuitPlayground.setPixelColor(8, 0x800080);  
    CircuitPlayground.setPixelColor(9, 0x800080);
    delay(400);
    //P2 SET C green
     CircuitPlayground.setPixelColor(0, 0x06f127); 
    CircuitPlayground.setPixelColor(1, 0x06f127); 
    CircuitPlayground.setPixelColor(2, 0x06f127); 
    CircuitPlayground.setPixelColor(3, 0x06f127); 
    CircuitPlayground.setPixelColor(4, 0x06f127); 
    CircuitPlayground.setPixelColor(5, 0x06f127);    
    CircuitPlayground.setPixelColor(6, 0x06f127); 
    CircuitPlayground.setPixelColor(7, 0x06f127); 
    CircuitPlayground.setPixelColor(8, 0x06f127);  
    CircuitPlayground.setPixelColor(9, 0x06f127); 
    delay(800);
   //SET D blue
    CircuitPlayground.setPixelColor(0, 0x149cff); 
    CircuitPlayground.setPixelColor(1, 0x149cff); 
    CircuitPlayground.setPixelColor(2, 0x149cff); 
    CircuitPlayground.setPixelColor(3, 0x149cff); 
    CircuitPlayground.setPixelColor(4, 0x149cff); 
    CircuitPlayground.setPixelColor(5, 0x149cff);    
    CircuitPlayground.setPixelColor(6, 0x149cff); 
    CircuitPlayground.setPixelColor(7, 0x149cff); 
    CircuitPlayground.setPixelColor(8, 0x149cff);  
    CircuitPlayground.setPixelColor(9, 0x149cff);
    delay(400);

    
    Serial.print("first set");

  } else {

    Serial.print("WorkingH");
  }
// Right Button Christmas Lights
  Serial.print("   Right Button: ");
  if (rightButtonPressed) {
    //SET A blue
    CircuitPlayground.setPixelColor(0, 0x149cff); 
    CircuitPlayground.setPixelColor(1, 0x149cff); 
    CircuitPlayground.setPixelColor(2, 0x149cff); 
    CircuitPlayground.setPixelColor(3, 0x149cff); 
    CircuitPlayground.setPixelColor(4, 0x149cff); 
    CircuitPlayground.setPixelColor(5, 0xff1414);    
    CircuitPlayground.setPixelColor(6, 0xff1414); 
    CircuitPlayground.setPixelColor(7, 0xff1414); 
    CircuitPlayground.setPixelColor(8, 0xff1414);  
    CircuitPlayground.setPixelColor(9, 0xff1414);
    delay(800);
    //SET B
    CircuitPlayground.setPixelColor(1, 0xFF0000); //Red        //I reordered the placement of colors instead of changeing colors here.   
    CircuitPlayground.setPixelColor(0, 0xFFFFFF); //White
    CircuitPlayground.setPixelColor(2, 0x008000); //green
    CircuitPlayground.setPixelColor(4, 0xFF0000); //Red
    CircuitPlayground.setPixelColor(3, 0xFFFFFF); //White
    CircuitPlayground.setPixelColor(5, 0x008000); //green.     
    CircuitPlayground.setPixelColor(7, 0xFF0000); //Red
    CircuitPlayground.setPixelColor(6, 0xFFFFFF); //White
    CircuitPlayground.setPixelColor(8, 0x008000); //green 
    CircuitPlayground.setPixelColor(9, 0xFFFFFF); //White
    delay(800);
    //SET C
    CircuitPlayground.setPixelColor(0, 0xFF0000); //Red //  
    CircuitPlayground.setPixelColor(1, 0xFFFFFF); //White
    CircuitPlayground.setPixelColor(3, 0x008000); //green
    CircuitPlayground.setPixelColor(2, 0xFF0000); //Red
    CircuitPlayground.setPixelColor(5, 0xFFFFFF); //White
    CircuitPlayground.setPixelColor(4, 0xFF0000); //green
    CircuitPlayground.setPixelColor(6, 0xFF0000); //Red
    CircuitPlayground.setPixelColor(7, 0xFFFFFF); //White
    CircuitPlayground.setPixelColor(9, 0x008000); //green 
    CircuitPlayground.setPixelColor(8, 0xFF0000); //Red
    delay(800);
    //SET A
    CircuitPlayground.setPixelColor(0, 0xFF0000); //Red // 
    CircuitPlayground.setPixelColor(1, 0xFFFFFF); //White
    CircuitPlayground.setPixelColor(2, 0x008000); //green
    CircuitPlayground.setPixelColor(3, 0xFF0000); //Red
    CircuitPlayground.setPixelColor(4, 0xFFFFFF); //White
    CircuitPlayground.setPixelColor(5, 0x008000); //green
    CircuitPlayground.setPixelColor(6, 0xFF0000); //Red
    CircuitPlayground.setPixelColor(7, 0xFFFFFF); //White
    CircuitPlayground.setPixelColor(8, 0x008000); //green 
    CircuitPlayground.setPixelColor(9, 0xFF0000); //Red
    delay(800);
     //SET C
    CircuitPlayground.setPixelColor(0, 0xFF0000); //Red //  
    CircuitPlayground.setPixelColor(1, 0xFFFFFF); //White
    CircuitPlayground.setPixelColor(3, 0x008000); //green
    CircuitPlayground.setPixelColor(2, 0xFF0000); //Red
    CircuitPlayground.setPixelColor(5, 0xFFFFFF); //White
    CircuitPlayground.setPixelColor(4, 0xFF0000); //green
    CircuitPlayground.setPixelColor(6, 0xFF0000); //Red
    CircuitPlayground.setPixelColor(7, 0xFFFFFF); //White
    CircuitPlayground.setPixelColor(9, 0x008000); //green 
    CircuitPlayground.setPixelColor(8, 0xFF0000); //Red
    delay(800);
     //SET B
    CircuitPlayground.setPixelColor(1, 0xFF0000); //Red //I reordered the placement of colors instead of changeing colors.  
    CircuitPlayground.setPixelColor(0, 0xFFFFFF); //White
    CircuitPlayground.setPixelColor(2, 0x008000); //green
    CircuitPlayground.setPixelColor(4, 0xFF0000); //Red
    CircuitPlayground.setPixelColor(3, 0xFFFFFF); //White
    CircuitPlayground.setPixelColor(5, 0x008000); //green
    CircuitPlayground.setPixelColor(7, 0xFF0000); //Red
    CircuitPlayground.setPixelColor(6, 0xFFFFFF); //White
    CircuitPlayground.setPixelColor(8, 0x008000); //green 
    CircuitPlayground.setPixelColor(9, 0xFFFFFF); //White
    delay(800);
       //SET A
    CircuitPlayground.setPixelColor(0, 0xFF0000); //Red // 
    CircuitPlayground.setPixelColor(1, 0xFFFFFF); //White
    CircuitPlayground.setPixelColor(2, 0x008000); //green
    CircuitPlayground.setPixelColor(3, 0xFF0000); //Red
    CircuitPlayground.setPixelColor(4, 0xFFFFFF); //White
    CircuitPlayground.setPixelColor(5, 0x008000); //green
    CircuitPlayground.setPixelColor(6, 0xFF0000); //Red
    CircuitPlayground.setPixelColor(7, 0xFFFFFF); //White
    CircuitPlayground.setPixelColor(8, 0x008000); //green 
    CircuitPlayground.setPixelColor(9, 0xFF0000); //Red
    delay(800);
    Serial.print("Christmas");

  } else {

    Serial.print("WorkingC"); 
  }
    Serial.println();
    delay(4000);   
  }
