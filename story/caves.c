void main(void)
{
 //preload the seq, make invisible and set the touch damage
 preload_seq(452);
 sp_nodraw(&current_sprite, 1);
 sp_touch_damage(&current_sprite, -1);
}


void touch(void)
{
 //Warp the player to different locations
 //Depending on which screen the warp is on

 if (&player_map == 722)
 {
  if (&life < 1) return;

  freeze(1);
  sp_x(1, 323);
  sp_y(1, 100);
  sp_seq(1, 452);
  sp_frame(1, 1);
  sp_nocontrol(1, 1); 
  sp_touch_damage(&current_sprite, 0);
  sp_brain(1, 0);
  wait(2000);
  sp_brain(1, 1);
  script_attach(1000);
  fade_down();
  load_tile("tiles\tsb40.bmp", 40); 
  &player_map = 723;
  sp_x(1, 312);
  sp_y(1, 351);
  load_screen();
  draw_screen();
  draw_hard_map();
  fade_up();
  kill_this_task();
 }
 if (&player_map == 723)
 {
  if (&life < 1) return;

  freeze(1);
  sp_touch_damage(&current_sprite, 0);
  script_attach(1000);
  fade_down();
  load_tile("tiles\ts40.bmp", 40);
  &player_map = 722;
  sp_x(1, 324)
  sp_y(1, 123);
  load_screen();
  draw_screen();
  draw_hard_map();
  fade_up();
  kill_this_task();
 }
 if (&player_map == 385)
 {
  int &stopslay = get_rand_sprite_with_this_brain(9, 0);
  freeze(&stopslay);
  if (&life < 1) 
  {
   unfreeze(&stopslay);
   return;
  }
  freeze(1);
  &sgchar = 1;
  sp_touch_damage(&current_sprite, 0);
  playsound(39, 16000, 0, 0, 0);
  script_attach(1000);
  fade_down(); 
  sp_x(1, 505);
  sp_y(1, 94);
  load_tile("tiles\ts40.bmp", 40);
  &player_map = 257;
  sp_x(1, 232);
  sp_y(1, 253);
  load_screen();
  draw_screen();
  draw_hard_map();
  fade_up();
  kill_this_task();
 } 
 if (&player_map == 292)
 {
  if (&life < 1) return;
  freeze(1);
  sp_touch_damage(&current_sprite, 0);
  playsound(39, 16000, 0, 0, 0);
  script_attach(1000);
  fade_down(); 
  &player_map = 733;
  sp_x(1, 201);
  sp_y(1, 312);
  load_screen();
  draw_screen();
  draw_hard_map();
  fade_up();
  kill_this_task();
 }
 if (&player_map == 1)
 {
  if (&life < 1) return;
  freeze(1);
  sp_touch_damage(&current_sprite, 0);
  playsound(39, 16000, 0, 0, 0);
  script_attach(1000);
  fade_down(); 
  &player_map = 292;
  sp_x(1, 244);
  sp_y(1, 275);
  load_screen();
  draw_screen();
  draw_hard_map();
  fade_up();
  kill_this_task();
 }  
}