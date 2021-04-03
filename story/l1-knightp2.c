void main(void)
{
 int &check;
 &temp2hold = &current_sprite;
 sp_custom("exi", &current_sprite, 1);
 if (&stormy == 3)
 {
  if (&player_map == 452)
  {
   wait(1);
   &check = sp_pseq(&temphold, -1)
   if (&check == 95)
   {
    freeze(1);
    wait(600);
    say_stop("`6That's the rock... do you think you can remove it?", 1);
    wait(200);
    move_stop(&current_sprite, 6, 54, 1);
    say_stop("`!It looks pretty weak... I'll give it a go.", &current_sprite);
    wait(100);
    fade_down();
    wait(500);
    playsound(36,22050,0,0,0);   
    wait(1000);
    playsound(36,22050,0,0,0);
    wait(100);
    playsound(36,22050,0,0,0);
    wait(1000);
    playsound(36,22050,0,0,0);

    int &hold = sp_editor_num(&temphold);
    editor_type(&hold, 3); 
    editor_seq(&hold, 97);
    editor_frame(&hold, 1);

    sp_brain(&temphold, 0);
    sp_pseq(&temphold, 97);
    sp_pframe(&temphold, 1);
    sp_notouch(&temphold, 1);
    sp_nohit(&temphold, 1);
    sp_hard(&temphold, 1);
    draw_hard_map();
    wait(100);
    fade_up();
    wait(100);
 
    &check = get_sprite_with_this_brain(9, 0);
    if (&check > 0)
    {
     screenlock(1);
     &stormy = 4; 
     say_stop("`!Success.. Now let's take out the trash!", &current_sprite);
     unfreeze(1);
     goto fight;
    } 
    else
    {
     freeze(1);
     freeze(&current_sprite);
     say_stop("`!That's what I'm talkin' about.. now let's go take out some enemies.!", &current_sprite);
     move_stop(&current_sprite, 6, 512, 1);
     move_stop(&current_sprite, 2, 470, 1);
     sp_nodraw(&current_sprite, 1);
     sp_active(&current_sprite, 0);
     say_stop("`6He's going to get himself killed if he keeps acting like that..", 1);
    tloop: 
     wait(100);
     if (&temphold == 88)
     {
      say_stop("`6I think it'd be best if I could get him to go back and check on Chealse for now...", 1);
      move_stop(1, 8, 279, 1);
      move_stop(1, 4, 413, 1);
      sp_dir(1, 4);
      say_Stop("`6Who knows what might be happening up there..", 1);
      wait(700);
      sp_dir(1, 6);
      playsound(17, 8000,0,0,0);
      wait(500);
      playsound(6, 22050, 0,0,0);
      wait(550);
      playsound(6, 22050, 0,0,0);
      wait(200);
      sp_dir(1, 6);
      say("`6What was that?!", 1);
      wait(300);
      
        //Flying fireball from out of screen
      	&check = create_sprite(515, 450, 11, 508, 1);
      	sp_seq(&check, 508);
      	sp_dir(&check, 8);
      	
      	sp_timing(&check, 0);
 	sp_speed(&check, 6);
 	sp_strength(&check, 10);
	sp_range(&check, 10);
	sp_flying(&check, 1);
 	sp_script(&check, "dam-fire");
	&mshadow = create_sprite(&mholdx, &mholdy, 15, 432, 3);
 	sp_brain_parm(&mshadow, &check);
 	sp_que(&mshadow, -500);
 	sp_brain_parm(&check, 1);
 	sp_brain_parm2(&check, &mshadow);
      	wait(200);
      
      screenlock(0);
      playsound(43, 22050,0,0,0);
      unfreeze(1);
      return;
     }
     goto tloop;
    }    
   }
  }
  
 
  set_smooth_follow(1); 
  sp_follow(&current_sprite, 1);

  &check = get_sprite_with_this_brain(9, 0);
  if (&check > 0) 
  {
   goto fight;
  }
  else
  {
   return;
  }

 fight:
  int &mcounter = random(3, 0);
  
   if (&mcounter == 0)
   {
    say("`!My axe thirsts for blood!", &current_sprite);
   }
   if (&mcounter == 1)
   {
    say("`!They will taste my axe!", &current_sprite);
   }
   if (&mcounter == 2)
   {
    say("`!Let's clear 'em out!", &current_sprite);
   }
   
  &mcounter = 0;
  sp_follow(&current_sprite, 0);
  sp_brain(&current_sprite, 9);
  sp_strength(&current_sprite, 10);
  sp_base_attack(&current_sprite, 730);
  sp_distance(&current_sprite, 50);
  sp_range(&current_sprite, 55);
  &check = get_rand_sprite_with_this_brain(9, &current_sprite);
  sp_target(&current_sprite, &check);

 fcheck:
  wait(100);
  &check = get_sprite_with_this_brain(9, &current_sprite);
  if (&check == 0)    
  {
   sp_target(&current_sprite, 0);
   sp_brain(&current_sprite, 16);
   screenlock(0);
   if (&player_map == 452)
   {
    if (&stormy == 4)
    { 
     freeze(1);
     freeze(&current_sprite);
     say("`!That's what I'm talkin' about! Bring it on!", &current_sprite);
     move_stop(&current_sprite, 6, 512, 1);
     move_stop(&current_sprite, 2, 470, 1);
     sp_nodraw(&current_sprite, 1);
     say_stop("`6He's going to get himself killed if he keeps acting like that..", 1);
     goto tloop;
    }
   }
   sp_follow(&current_sprite, 1);
   return;
  }
  &check = sp_target(&current_sprite, -1);
  if (&check == 0)
  {
   &check = get_rand_sprite_with_this_brain(9, &current_sprite);
   sp_target(&current_sprite, &check);
  }
  goto fcheck;
 }
}

void attack(void)
{
 &mcounter = random(4000,1000);
 sp_attack_wait(&current_sprite, &mcounter);
 &mcounter = random(6000,0);
 goto fcheck;
}

void hit(void)
{
 &check = get_sprite_with_this_brain(9, 0); 
 if (&check > 0)
 {
  sp_target(&current_sprite, &enemy_sprite);
  &check = sp_target(&current_sprite, -1);
  if (&check == 1)
  {
   &check = get_rand_sprite_with_this_brain(9, &current_sprite);
   sp_target(&current_sprite, &check);
  }
  goto fcheck;
 }
}

void talk(void)
{
 if (&stormy == 3) 
 {
  &check = get_sprite_with_this_brain(9, 0); 
  if (&check > 0) 
  {
   say("`!Let's kill 'em!", &current_sprite);
   goto fcheck;
  } 
  say("`!I'm right behind you..", &current_sprite);
  return;
 }

 if (&player_map == 703)
 {
  freeze(1);
  freeze(&current_sprite);
  choice_start();
  set_y 240
  title_start();
  The guard looks at you, he looks worried about everything, but is holding it together.
  title_end();
  (&stormy < 6) "Do you know where Dink is?"
  (&stormy < 6) "Can you move that rock up there?"
  (&stormy == 2) "I need your help to destroy a rock in a nearby cave.."
  (&stormy >= 6) "I've found a bomb!"
  "leave"
  choice_end();  

	if (&result == 1)
	{
	 say_stop("`6Do you know where Dink is?", 1);
	 wait(200);
	 say_stop("`!He said he was looking for survivors.", &current_sprite);
	 say_stop("`!If you have a look around, I'm sure you'll find him.", &current_sprite);
 	 wait(200);
	 say_stop("`6Alright.", 1);
	}
	if (&result == 2)
	{	
	 say_stop("`6Can you move that rock up there?", 1);
	 wait(200);
	 say_stop("`!Already tried... it's too heavy.", &current_sprite);
	 wait(200);
	 say_stop("`6Ok.. I guess I'll keep searching for another way.", 1);
	}
	if (&result == 3)
	{
	 say_stop("`6I need your help to destroy a rock in a nearby cave..", 1);
	 wait(200);
	 say_stop("`!Well I guess I can give it a go.. show me the way.", &current_sprite);
	 wait(200);
	 say_stop("`6No worries. Follow me.", 1);
	 &stormy = 3;
	 &temphold = 99;
         unfreeze(1);
         unfreeze(&current_sprite);

	 &chartemp = &current_sprite;
	 script_attach(0);
	 spawn("l1-kfol");
         kill_this_task();
	}
	if (&result == 4)
	{
	 say_stop("`6I've found a bomb!", 1);
	 wait(200);
	 say_stop("`!Great! What are you waiting for? .. Blast that rock.", &current_sprite);
	}
  unfreeze(1);
  unfreeze(&current_sprite);
 }
 if (&player_map == 701)
 {
  freeze(1);
  freeze(&current_sprite);
  
  int &x;
  int &y;
  
  &x = get_sprite_with_this_brain(20, 0);
  &y = sp_editor_num(&x);
  editor_type(&x, 0);
  editor_seq(&x, 1);
  
  say_stop("`!Another survivor... it's good to see.", &current_sprite);
  wait(200);
  say_stop("`6Glad to see you made it.. things are getting crazy..", 1);
  wait(200);
  say_stop("`!Yeh, well if it wasn't for Dink I would be dead..", &current_sprite);
  say_Stop("`!Anyway, Dink told me to head east and watch over chealse.", &current_sprite);
  wait(200);
  say_stop("`6Sure thing. I'm sure we'll meet later.", 1);
  wait(200);
  say_stop("`!If you need me to help with anything, just come and ask.", &current_sprite);
  say_stop("`!My axe is good for more than just killing things.", &current_sprite);
  wait(200);
  say_stop("`6Like what more?", 1);
  wait(200);
  say_stop("`!Well it's no sledge hammer, but I've used it to break through weak rocks before.", &current_sprite);
  wait(200);
  say_stop("`6Cool.. I might talk later.", 1);
  wait(200);
  say_stop("`!See ya..", &current_sprite);

  &x = sp_x(&current_sprite, -1);
  &y = sp_y(&current_sprite, -1);
 
  if (&x <= 260)
  {
   if (&y >= 263) 
   {
    move_stop(&current_sprite, 8, 263, 1);
    goto move;
   }
   if (&y < 263)
   { 
    if (&y < 165) goto move;
    move_stop(&current_sprite, 8, 214, 1);
    move_stop(&current_sprite, 6, 370, 1);
    move_stop(&current_sprite, 2, 263, 1);
    goto move;
   }
   goto move;
  }
  if (&x > 260)
  {
   if (&y >= 265)
   {
    if (&y >= 329) goto move;
    if (&y < 329)
    {
     move_stop(&current_sprite, 6, 402, 1);
     move_stop(&current_sprite, 2, 353, 1);
     goto move;
    }
   }
   if (&y < 265)
   {
    move_stop(&current_sprite, 8, 159, 1);
    move_stop(&current_sprite, 2, 159, 1);
    goto move;
   }
  }
 move:
  move_stop(&current_sprite, 6, 710, 1);
  unfreeze(1);
  sp_nodraw(&current_sprite, 1);
  sp_active(&current_sprite, 0);
 }
}