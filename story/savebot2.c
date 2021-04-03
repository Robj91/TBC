void main(void)
{
 set_font_color(11, 225, 0, 15);
 set_font_color(12, 176, 196, 222);
 sp_seq(&current_sprite, 449);
 sp_sound(&current_sprite, 34);
 sp_brain(&current_sprite, 6);
 sp_hitpoints(&current_sprite, 0);
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
