void button(){
    if (digitalRead(freq_up) == HIGH) {
    delay(110);
    if (digitalRead(freq_up) == HIGH) {
      change_channel(fm_freq+=0.1);
    }
  }
  if (digitalRead(freq_down) == HIGH) {
    delay(110);
    if (digitalRead(freq_down) == HIGH) {
      change_channel(fm_freq-=0.1);
    }
  }
   if (digitalRead(music_up) == HIGH) {
    delay(110);
    if (digitalRead(music_up) == HIGH) {
      music_forward();
    }
  }
  if (digitalRead(music_down) == HIGH) {
    delay(110);
    if (digitalRead(music_down) == HIGH) {
      music_backward();
    }
  }
}

