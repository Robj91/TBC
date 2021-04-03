void main(void)!
{
 preload_seq(734);
 if (&stormy == 4)
 {
  freeze(1);
  &stormy = 5;
  int &knight = create_sprite(521, 296, 0, 287, 1);
  sp_base_walk(&knight, 280);
  sp_speed(&knight, 1);
  sp_timing(&knight, 0);
   
  int &wiz = create_sprite(421, 299, 0, 579, 1);
  sp_base_walk(&wiz, 570);
  sp_speed(&wiz, 1);
  
  wait(400);
  
  say("`!I'll send you to hell!", &knight);
  wait(100);
  move_stop(&knight, 4, 473, 1);
  sp_seq(&knight, 734);
  sp_frame(&knight, 1);
  wait(300);
  playsound(36,22050,0,0,0);  
  wait(400);
  sp_dir(&knight, 4);
  
  int &explo = create_sprite(421, 299, 7, 167, 1);
  sp_seq(&explo, 167);
  playsound(24, 22052, 0, 0, 0);     
  
  sp_nodraw(&wiz, 1);
  sp_x(&wiz, 266);
  sp_y(&wiz, 100);
  wait(100);
  
  &explo = create_sprite(266, 100, 7, 167, 1);
  sp_seq(&explo, 167);
  playsound(24, 22052, 0, 0, 0);  
  sp_nodraw(&wiz, 0);
  wait(300);
  
  sp_dir(1, 4);
  sp_dir(&knight, 8);
  
  say_stop("`!Damnit!", &knight);
  wait(200);
  move_stop(1, 2, 67, 1);
  sp_dir(1, 4);
  say_stop("`6Who are you?", 1);
  wait(100);
  say_stop("`7Hahaha.. I could kill you both now, but that would be too easy..", &wiz);
  say_stop("`7You're doomed anyway.. the curse will be the end of this world, and both of you along with it!", &wiz);
  
  &explo = create_sprite(266, 100, 7, 167, 1);
  sp_seq(&explo, 167);
  playsound(24, 22052, 0, 0, 0);  
  sp_active(&wiz, 0); 
  
  move_stop(1, 2, 183, 1);
  sp_dir(1, 2);
  say_stop("`!What is he talking about?!  Is he the one behind these terrible disasters?", &knight);
  wait(200);
  say_stop("`6I have a hunch... but I hope I'm wrong", 1);
  say_stop("`6because if I'm not, we are all in a worse situation than I initially thought..", 1);
  wait(200);
  say_stop("`!What is your hunch?", &knight);
  wait(200);
  say_stop("`6No time to explain right now.. you need to go back topside and keep an eye on Chealse.", 1);
  say_stop("`6Stay there and protect her until I get back.", 1);
  wait(200);
  say_stop("`!What are you gonna do?", &knight);
  wait(200);
  move_Stop(1, 2, 298, 1);
  move_stop(1, 6, 587, 1);
  say_stop("`6I need to follow this path and see if I can get to Wizard Martridge..", 1);
  sp_dir(1, 4);
  sp_dir(&knight, 6);
  say_stop("`6He may be our only hope.", 1);
  wait(200);
  say_stop("`!I have no idea what you're talking about, so I'm just gonna let you get to it.. bye for now..", &knight);
  move_Stop(&knight, 6, 522, 1);
  move_stop(&knight, 8, 79, 1);
  unfreeze(1);
  move_stop(&knight, 8, -50, 1);
  sp_active(&knight, 0);
 }
}
  
  