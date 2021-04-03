void main(void)
{
 //Set the size and touch damage
 //for some reason nodraw made it not work
 //so I'm just using size 1
 sp_size(&current_sprite, 1);
 sp_touch_damage(&current_sprite, -1);
}

void touch(void)
{
 if (&player_map == 293)
 {
  //Block the player from going back north
  if (&life < 1) return;
  freeze(1);
  sp_touch_damage(&current_sprite, 0);
  int &playx = sp_x(1, -1);
  int &playy = sp_y(1, -1);
  
  if (&playy < 30) move_stop(1, 2, 30, 1);
  
  if (&playy > 30) move_stop(1, 8, 30, 1);

  if (&playx > 420) move_stop(1, 4, 420, 1);
  
  if (&playx < 115) move_stop(1, 6, 115, 1);

  say("`6I better not go back, I need to get out of this cave.", 1);
  sp_touch_damage(&current_sprite, -1);
  unfreeze(1);
 }
}