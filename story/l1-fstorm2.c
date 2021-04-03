void main(void)
{
 if (&sgchar == 1)
 {
  if (&stormy == 1)
  {
   &vision = 2;
   return;
  }
  if (&stormy == 2)
  {
   &vision = 2;
   return;
  }
  if (&stormy == 3)
  {
   &vision = 2;
   return;
  }
  if (&stormy == 6)
  {
   freeze(1);
   &stormy = 7;
   int &dinkm = create_sprite(262, 244, 0, 76, 1);
   sp_base_walk(&dinkm, 70);
   sp_speed(&dinkm, 2);
   sp_timing(&dinkm, 0);
   sp_brain(&dinkm, 0); 
   move_stop(1, 8, 304, 1);
   sp_dir(1, 4);
   wait(200);
   say_stop("`6Whoa.. lots of slayers up this end eh?", 1);
   wait(200);
   say_stop("Well, dead slayers now.. Like I said, they're appearing everywhere", &dinkm);
   say_stop("The rest of the cave is clear from this point..", &dinkm);
   wait(200);
   say_stop("`6Thanks..", 1);
   wait(200);
   say_stop("No problem, I'll meet you back with the others.", &dinkm);
   move_stop(&dinkm, 8, 208, 1);
   move_stop(&dinkm, 4, -50, 1);
   sp_active(&dinkm, 0);
   unfreeze(1);
  }
 }
 if (&story == 3)
 { 
  &story = 4;
  freeze(1);
  int &count;
  int &roc;
  int &rck = create_sprite(472, 312, 0, 95, 4);
  sp_brain
  sp_pseq(&rck, 95);
  sp_pframe(&rck, 4);
  sp_speed(&rck, 2);
  sp_hard(&rck, 0);
  int &storm = create_sprite(513, 470, 0, 417, 1);
  sp_base_walk(&storm, 410);
  sp_speed(&storm, 2);
  move_stop(1, 6, 422, 1);
  move_stop(&storm, 8, 270, 1); 
  move(&storm, 8, 190, 1);
  move_stop(1, 2, 300, 1);
  int &slay = create_sprite(513, 450, 0, 647, 1);
  sp_base_walk(&slay, 640);
  sp_speed(&slay, 1);
  move(&slay, 8, 325, 0);
  say("Eat this, Slayer!", 1);
  sp_nodraw(1, 1);
  int &fakedink = create_sprite(422, 300, 6, 316, 1);
  sp_seq(&fakedink, 316);
  wait(400);
  sp_active(&fakedink, 0);
  sp_nodraw(1, 0);
  move_stop(&rck, 6, 512, 1);
  draw_hard_map();
  move_stop(&storm, 8, 190, 1);
  sp_dir(&storm, 2);
  wait(350);
  move_stop(1, 8, 260, 1);
  say("`6That was close", &storm);
  move_stop(&slay, 8, 325, 0);
  sp_seq(&slay, 638);
  sp_frame(&slay, 1);
  wait(700);
  freeze(&slayer);
  sp_base_walk(&slayer, 640);
  sp_speed(&slayer, 2);
  wait(1000);
  int &slayer = create_sprite(-50, 198, 9, 647, 1);
  freeze(&slayer);
  sp_base_walk(&slayer, 640);
  sp_speed(&slayer, 2);
  playsound(58, 16000, 0, &slayer, 0);
  wait(100);  
  sp_dir(1, 4);
  sp_dir(&storm, 4);
  playsound(58, 22050, 0, &slayer, 0);
  wait(100);
  playsound(58, 16000, 0, &slayer, 0);
  wait(100);
  move_stop(&slay, 2, 378, 1);
  sp_brain(&slay, 9);
  sp_speed(&slay, 1);
  sp_timing(&slay, 33);
  move_stop(&slayer, 6, 174, 1);
  say_stop("Oh great... here we go.", 1);
  unfreeze(&slayer);
  sp_script(&slayer, "l1-nboss2");
  &count = 0;
  screenlock(1);
  unfreeze(1);
  sp_script(&storm, "l1-stcv");
  &roc = 0;
  &roc = get_next_sprite_with_this_brain(10, 0, &roc);
  sp_target(&slayer, &roc);
 loop:
  &slayer = create_sprite(-50, 198, 9, 647, 1);
  freeze(&slayer);
  wait(3000);
  sp_base_walk(&slayer, 640);
  sp_speed(&slayer, 2); 
  move_stop(&slayer, 6, 174, 1);
  unfreeze(&slayer);
  sp_script(&slayer, "l1-nboss2");
  &roc = 0;
  &roc = get_next_sprite_with_this_brain(10, 0, &roc);
  sp_target(&slayer, &roc);
  &count += 1;
  if (&count == 6)
  { 
   sp_brain(&slay, 0);
   move(&slay, 2, 500, 1);
  }
  if (&count < 12) goto loop;
 loopcheck:
  wait(100);
  if (get_sprite_with_this_brain(9, 0) > 0)  
  {
   goto loopcheck;
  }

  freeze(1);
  freeze(&storm);
  sp_nodraw(&slay, 1);
  sp_active(&slay, 0);
  screenlock(0);
  playsound(43, 22050,0,0,0);
  &roc = 0;
  &roc = get_next_sprite_with_this_brain(10, 0, &roc);
  &save_x = &roc;
  external("face", "face_each_other_dink");
  say_stop("Finally.... they're dead. There has been Slayers appearing everywhere.", 1);
  wait(200);
  external("face", "face_each_other_dink");
  say_stop("`6Yeh... now let's get the hell out of here and get to Martridge's house.", &storm);
  wait(200);
  say_stop("`6I'm gonna go ahead and have another look around, to see if I can find a mana potion", &storm);
  say_stop("`6I'll meet you back at the rock, north-east of Stonebrook.", &storm);
  wait(200);
  move_stop(&storm, 8, 206, 1);
  move_stop(&storm, 4, -70, 1);
  sp_script(&storm, "");
  sp_active(&storm, 0);
  unfreeze(1);
 }
 if (&story == 4)
 {
  &vision = 1;
 }
}