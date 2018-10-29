#include <FMTX.h>
#include <LiquidCrystal.h>

const int freq_up = A0; 
const int freq_down = A1;
const int music_up = A2; 
const int music_down = A3;

LiquidCrystal lcd(7, 6, 5, 4, 3, 2);
float fm_freq = 90;

void setup() {
  //fmtx_init(fm_freq,CHINA);
  Serial_init();
  music_forward();
  music_forward();
  //lcd_init();
  //pin_init();
}

void loop() {
  button();
}
