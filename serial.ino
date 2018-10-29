void Serial_init(){
  Serial.begin(9600);
  while(Serial.read()>= 0){}
  Serial.write(0xAA);
  Serial.write(0x0D);
  Serial.write(0x00);
  Serial.write(0xB7);
  while(Serial.read()>= 0){}
  delay(50);
}

void music_forward(){  
  Serial.write(0xAA);
  Serial.write(0x05);
  Serial.write(0x00);
  Serial.write(0xAF);
  delay(500);
  //Display_music(get_number());
}

void music_backward(){  
  Serial.write(0xAA);
  Serial.write(0x06);
  Serial.write(0x00);
  Serial.write(0xB0);
  delay(500);
  Display_music(get_number());
}

int get_number(){
  int x;
  Serial.write(0xAA);
  Serial.write(0x0D);
  Serial.write(0x00);
  Serial.write(0xB7);
  for(int i=0;i<5;i++)
    x=int(Serial.read());
  while(Serial.read()>= 0);
  return x; 
}

