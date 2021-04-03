void main(void)
{
 if (&player_map == 765)   sp_nodraw(&current_sprite, 1);
}

void talk(void)
{
 if (&player_map == 765)
 {
  int &x = sp_x(&current_sprite, -1);
  if (&x < 276) say("`6This is terrible... her body has been crushed..", 1);
  if (&x > 276) say("`6He's been crushed by the table...", 1);
 }
 if (&player_map == 700)
 {
  say("`6At least most of the monsters around here are dead...", 1);
 }
}
 