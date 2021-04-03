void main(void)
{
 set_font_color(11, 225, 0, 15);
 set_font_color(12, 176, 196, 222);
 sp_seq(&current_sprite, 449);
 sp_sound(&current_sprite, 34);
 sp_brain(&current_sprite, 6);
 sp_hitpoints(&current_sprite, 0);
 if (&csave == 1)
 {
  if (&sgchar == 1)
  {
   init("load_sequence_now graphics\people\peasant2\die\death- 467 75 91 40 -64 -30 19 10");
   init("load_sequence_now graphics\people\peasant2\c11w3- 312 75 50 94 -20 -11 21 16");
   init("load_sequence_now graphics\people\peasant2\c11w3- 316 75 50 94 -20 -11 21 16");
   init("load_sequence_now graphics\people\peasant2\c11w7- 314 75 56 97 -21 -9 23 15");
   init("load_sequence_now graphics\people\peasant2\c11w7- 318 75 56 97 -21 -9 23 15");
  
   if (&stormy == 3)
   {
    spawn("l1-kfol"); 
   } 
  }
  if (&sgchar == 0)
  {
   init("load_sequence_now graphics\dink\push\ds-p2- 312 75 45 79 -7 -21 13 -7");
   init("load_sequence_now graphics\dink\push\ds-p4- 314 75 36 69 3 -9 45 9");
   init("load_sequence_now graphics\dink\push\ds-p6- 316 75 67 71 -21 -12 21");
   init("load_sequence_now graphics\dink\push\ds-p8- 318 75 46 59 -9 5 12 24");
   init("load_sequence_now graphics\dink\die\ds-x3- 467 75 30 67 -10 -9 10 9"); 
  }
  &csave = 0;  
 }
}

void hit(void)
{
 if (&sgchar == 0) say("Die, strange glowing piece of crap that makes it possible for me to come back to life!", 1);

 if (&sgchar == 1) say("`6You are a product of the black magic known as science... so DIE", 1);
}

void talk( void )
{
 if (&timer > 0)
 {
  say("Screw this abnormal piece of glowing crap... I'm running out of time!", 1);
  return;
 }
 Playsound(18,22050,0,0,0);

 freeze(1);
 choice_start();
 "Save your game"
 "Leave the strange machine"
 choice_end();
 unfreeze(1);

 if (&result == 2)
 {
  unfreeze(1);
  return;
 }
 choice_start();
 "&savegameinfo"
 "&savegameinfo"
 "&savegameinfo"
 "&savegameinfo" 
 "&savegameinfo" 
 "&savegameinfo" 
 "&savegameinfo" 
 "&savegameinfo" 
 "&savegameinfo" 
 "&savegameinfo" 
 "Nevermind"
 choice_end();

 unfreeze(1);

 if (&result < 11)
 {
  save_game(&result);
  say_xy("`%Game saved", 1, 30);
 }
}
