void main(void)
{
 if (&sgchar == 1)
 {
  sp_nodraw(&current_sprite, 1);
  sp_active(&current_sprite, 0);
  kill_this_task();
 }  
 if (&knight == 99) 
 {
  sp_nodraw(&current_sprite, 1);
  sp_active(&current_sprite, 0);
  kill_this_task();
 }
 &temphold = &current_sprite;
 if (&knight == 0)
 {
  wait(1000);
  int &rand = random(5, 1);
  if (&rand == 1) say("`!H....hey. O..over here.", &current_sprite);
  if (&rand == 2) say("`!D...Dink. O..over here.", &current_sprite);
  if (&rand == 3) say("`!Aaah... the p..pain.", &current_sprite);
  if (&rand == 4) say("`!Dink... D..Dink Smallwood!", &current_sprite);
  if (&rand == 5) say("`!S..Smallwood.", &current_sprite);
 }
 if (&knight >= 4)
 {
  if (&player_map == 700)
  {
   sp_nodraw(&current_sprite, 1);
   sp_active(&current_sprite, 0);
   return;
  }
  sp_base_walk(&current_sprite, 280);
  sp_speed(&current_sprite, 3);
  sp_timing(&current_sprite, 33);
  sp_brain(&current_sprite, 16);
 }
}

void talk(void)
{
 if (&knight == 99)
 {
  say("He lays dead... drowned in a pool of his own blood. What a painful death... poor guy.", 1);
 }
 if (&knight == 0)
 {
  freeze(1);
  say_stop("Hey, uh..... what happened?", 1);
  wait(200);
  say_stop("`!I was attacked by two boncas.", &current_sprite);
  say_stop("`!I killed one.... it's just over there.", &current_sprite);
  say_stop("`!The other one fell down when the earthquakes started, and the ground collapsed.", &current_sprite);
  say_stop("`!They injured me quite badly.... I don't think I'm gonna make it.", &current_sprite);
  wait(200);
  say_stop("Don't talk like that! You can make it... I just uh.. I have to find something to heal you.", 1);
  wait(200);
  say_stop("`!I don't have much t...time, Smallwood. P...please hurry.", &current_sprite);
  &knight = 1;
  spawn("l1-timer");
  unfreeze(1);
  return;
 }
 if (&knight < 3)
 {
  say("`!S...Smallwood... please hurry.... I can't last much longer.", &current_sprite);
 }
 if (&knight == 3)
 {
  &knight = 4;
  wait(0);
  if (&knight == 99) return;
  freeze(1);
  int &bl;
  int &bl2;
  int &bl3;
  int &bl4;
  say_stop("I found an elixir.... here you go....", 1);
  kill_this_item("item-elix");
  wait(200);
  playsound(57, 22050, 0, &current_sprite, 0);
  wait(2000);
  fade_down();
  sp_que(&current_sprite, 0);
  &bl = create_sprite(151, 326, 0, 422, 36);
  sp_pseq(&bl, 422);
  sp_frame(&bl, 36);
  sp_que(&bl, -500);
  &bl2 = create_sprite(128, 325, 0, 422, 36);
  sp_pseq(&bl2, 422);
  sp_frame(&bl2, 36);
  sp_que(&bl2, -500);
  &bl3 = create_sprite(141, 323, 0, 422, 36);
  sp_pseq(&bl3, 422);
  sp_frame(&bl3, 36);
  sp_que(&bl3, -500);
  &bl4 = create_sprite(128, 317, 0, 422, 36);
  sp_pseq(&bl4, 422);
  sp_frame(&bl4, 36);
  sp_que(&bl4, -500);
  sp_seq(&current_sprite, 287);
  sp_frame(&current_sprite, 1);
  sp_base_walk(&current_sprite, 280);
  sp_speed(&current_sprite, 3);
  sp_timing(&current_sprite, 33);
  wait(500);
  fade_up();
  &save_x = &current_sprite;
  external("face", "face_each_other_dink");
  say_stop("`!Thank you so much, you saved my life!", &current_sprite);
  wait(200);
  say_stop("No problem. Head directly east and you will find Chealse.", 1);
  say_stop("Wait there and help her out.", 1);
  wait(200);
  say_stop("`!Ok, I'm on my way.", &current_sprite);
  add_exp(300, &current_sprite);
  move_stop(&current_sprite, 8, 290, 1);
  move_stop(&current_sprite, 6, 550, 1);
  move(&current_sprite, 6, 700, 1);
  unfreeze(1); 
  wait(2000);
  sp_active(&current_sprite, 0);
  return;
 }
 if (&knight >= 4)
 {
  wait(0);
  if (&knight == 99) return;
  freeze(1);
  freeze(&current_sprite);
  &save_x = &current_sprite;
  external("face", "face_each_other_dink");
  if (&knight == 4)
  {
   say_stop("`!Thanks again Dink, for saving my life", &current_sprite);
   wait(200);
   say_stop("No problem", 1);
   &knight = 100;
  }
  &pause = 1;
  choice_start();
  set_y 240
  title_start();
  "The guard looks at you, he is filled with gratefulness towards you for saving his life."
  title_end();
  (&story == 1) "Do you know where Storm went?"
  "Do you know of any other survivors?"
  (&story > 1) (&story < 4) "Storm's in trouble"
  "leave"
  choice_end();
  &pause = 0;
 
    if (&result == 1)
    {
     say_stop("Do you know where Storm went?", 1);
     wait(200);
     say_stop("`!Storm? ....Oh, is he that guy with the scythe?", &current_sprite);
     wait(200);
     say_stop("Yeh", 1);
     wait(200);
     say_stop("`!I'm not exactly sure... he ran off just before you got here,", &current_sprite);
     say_stop("`!Said he was looking for another path to Martridge's house, whoever that is", &current_sprite);
     wait(200);
     say_stop("Ok... I'm gonna go look for him. You stay here with Chealse until I get back.", 1);
    }
    if (&result == 2)
    {
     say_Stop("Do you know of any other surivors?", 1);
     wait(200);
     say_stop("`!No... I was too injured to move, and I didn't see any one else that survived.", &current_sprite);
     say_stop("`!I don't think anyone else made it.... but it's worth a look.", &current_sprite);
     wait(200);
     say_stop("Ok, I'll get back to searching.", 1);
    }
    if (&result == 3)
    {
     say_stop("Storm's in trouble", 1);
     wait(200);
     say_stop("`!Is there any way I can help?", &current_sprite);
     wait(200);
     say_stop("You stay here, I'll go help him.", 1);
     wait(200);
     say_stop("`!Ok.", &current_sprite);
    }
  unfreeze(1);
  unfreeze(&current_sprite);
  return;
 }
}
 
void hit(void)
{
 if (&knight >= 4)
 {
  say("`!Ouch! Crazy bastard!", &current_sprite);
 }
}