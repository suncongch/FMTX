void lcd_init(){
  lcd.begin(16, 2);
  lcd.clear();
  lcd.setCursor(0,0);
  delay(50);
  lcd.print("  FM:       Mhz");
  lcd.setCursor(6,0);
  lcd.print(fm_freq,1);
  lcd.setCursor(0,1);
  delay(50);
  lcd.print("  MP3: music");
}

void Display(float comdata){

    lcd.setCursor(6,0);
    lcd.print("     ");
    lcd.setCursor(6,0);
    lcd.print(comdata,1);
    delay(20);
}

void Display_music(int number){
  lcd.setCursor(13,1);
  lcd.print("   ");
  lcd.setCursor(13,1);
  if(number<10)
    lcd.print(0);
  lcd.print(number);
  delay(20);
}

