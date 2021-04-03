void use(void)
{
 if (&coml == 0)
 {
  if (&stormy > 5)
  {
   if (&hmbom == 1) say("`6This is my last bomb.. I need to save it for the rock near Stonebrook!", 1);
  }
 }

 spawn("dam-bom");
 &hmbom -= 1;
 if (&hmbom < 1) 
 {
  &hmbom = 0;
  say("`6I have &hmbom bombs", 1);
  kill_this_item("item-bom");
 }
 if (&hmbom > 1) say("`6I have &hmbom bombs.", 1);
 if (&hmbom == 1) say("`6I have 1 bomb.", 1);
}

void disarm(void)
{
 debug("bomb disarmed.");

 kill_this_task();
}

void arm(void)
{
 preload_seq(420);
 preload_seq(161);
 preload_seq(166);

 if (&csave == 0)
 {
  if (&hmbom > 1) say("`6I have &hmbom bombs.", 1);
  if (&hmbom == 1) say("`6I have 1 bomb.", 1);
 }

 init("load_sequence_now graphics\dink\walk\ds-w1- 71 43 38 72 -14 -9 14 9");
 init("load_sequence_now graphics\dink\walk\ds-w2- 72 43 37 69 -13 -9 13 9");
 init("load_sequence_now graphics\dink\walk\ds-w3- 73 43 38 72 -14 -9 14 9");
 init("load_sequence_now graphics\dink\walk\ds-w4- 74 43 38 72 -12 -9 12 9");

 init("load_sequence_now graphics\dink\walk\ds-w6- 76 43 38 72 -13 -9 13 9");
 init("load_sequence_now graphics\dink\walk\ds-w7- 77 43 38 72 -12 -10 12 10");
 init("load_sequence_now graphics\dink\walk\ds-w8- 78 43 37 69 -13 -9 13 9");
 init("load_sequence_now graphics\dink\walk\ds-w9- 79 43 38 72 -14 -9 14 9");

 init("load_sequence_now graphics\dink\idle\ds-i2- 12 250 33 70 -12 -9 12 9");
 init("load_sequence_now graphics\dink\idle\ds-i4- 14 250 30 71 -11 -9 11 9");
 init("load_sequence_now graphics\dink\idle\ds-i6- 16 250 36 70 -11 -9 11 9");
 init("load_sequence_now graphics\dink\idle\ds-i8- 18 250 32 68 -12 -9 12 9");
}

void pickup(void)
{
 kill_this_task();
}

void drop(void)
{
 debug("bomb removed");
 draw_status();
 kill_this_task();
}
