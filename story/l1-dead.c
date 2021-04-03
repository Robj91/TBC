void main(void)
{
 if (&sgchar == 1)
 {
  int &dead = &current_sprite;
  script_attach(0);
  sp_script(&dead, "l1-deadp2");
  kill_this_task();
 }

 if (&player_map == 765)   sp_nodraw(&current_sprite, 1);
}

void talk(void)
{
 if (&player_map == 765)
 {
  int &x = sp_x(&current_sprite, -1);
  if (&x < 276) say("Poor Libby... crushed by her own home...", 1);
  if (&x > 276) say("He's dead... crushed by the table... this is dreadful.", 1);
 }
 if (&player_map == 700)
 {
  if (&knight == 99) 
  {
   say("If it wasn't for this Bonca, that innocent guard would still be alive.", 1);
   return;
  }
  if (&knight < 4) say("This Bonca is what injured that innocent guard so badly... looks like it got what it deserved.", 1);
  if (&knight >= 4) say("This Bonca got what it deserved.", 1);
 }
}
 