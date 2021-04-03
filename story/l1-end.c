void main(void)
{
 if (&player_map == 671)
 {
  if(&sgchar == 0)
  {
   freeze(1);
   
   int &storm;
   int &girl;
   
   if (&knight != 99) int &knight;
   
   &storm = create_sprite(413, 385, 0, 417, 1);
   sp_base_walk(&storm, 410);
   sp_speed(&storm, 2);
   
   move(&storm, 8, 275, 1);
   move_stop(1, 8, 315, 1);
   move_stop(1, 6, 471, 1);
   sp_dir(1, 4);
   move_stop(&storm, 8, 275, 1);
   sp_dir(&storm, 2);
   
   wait(500);
   &girl = create_sprite(373, 450, 0, 339, 1);
   sp_base_walk(&girl, 330);
   sp_speed(&girl, 3);
   
   if (&knight != 99)
   {
    &knight = create_sprite(360, 450, 0, 287, 1);
    sp_base_walk(&knight, 280);
    sp_speed(&knight, 3);
    sp_timing(&knight, 33);
    sp_dir(&knight, 8);
    move(&knight, 8, 327, 1);
   } 
   
   move(&girl, 9, 471, 1);
   
   if (&knight != 99) move_stop(&knight, 8, 327, 1);
   
   move_stop(&girl, 9, 471, 1);
   sp_dir(&girl, 4);
   
   if (&knight != 99)
   {
    move_stop(&knight, 4, 307);
    sp_dir(&knight, 6);
   }
   
   wait(200);
   say_stop("`6I think we should be extremely careful from this point onwards", &storm);
   wait(200);
   say_stop("I thought we were already being careful..", 1);
   say_stop("You know, with the earth quakes and all, it kind of goes without saying", 1);
   wait(200);
   say_stop("`6You don't understand, I think I know what's causing all this", &storm);
   wait(200);
   say_stop("What is it then?", 1);
   wait(200);
   say_stop("`6If I am correct, this is the work of a powerful curse", &storm);
   say_stop("`6So powerful, it is tearing this world to pieces, bit by bit", &storm);
   if (&knight != 99) say_stop("`!WHAT?! How is that possible, why would anyone do this?", &knight); 
   wait(200);
   say_stop("Either way, we stick to the plan, we find Martridge and get his help", 1);
   wait(200);
   say_stop("`6I agree, let's go..", &storm);
   move_stop(&storm, 4, 323, 1);
   move(&storm, 8, 8, 1);
   move(1, 7, 327, 1);
   if (&knight != 99) move(&knight, 8, 8, 1);
   move(&girl, 7, 315, 1);
   wait(250);

	//seth
	init("load_sequence_now graphics\effects\magic\seth1w 581 75 43 133 -19 -16 23 16");
	init("load_sequence_now graphics\effects\magic\seth3w 583 75 44 126 -21 -21 19 16");
	init("load_sequence_now graphics\effects\magic\seth7w 587 75 42 123 -21 -16 18 16");
	init("load_sequence_now graphics\effects\magic\seth9w 589 75 44 125 -20 -16 20 16");
	init("load_sequence_now graphics\effects\magic\pose 580 75 41 129 -30 -16 31 10");
 
    script_attach(1000);
    fade_down();
    sp_nodraw(1, 1);
    &player_map = 620;
    load_screen();
    draw_screen();
    kill_this_task(); 
  }
 }
 if (&player_map == 620)
 { 
  int &seth;
  int &wizard;
  int &warp;
  int &count;
  
  //check if this cutscene has played previously
  &seth = get_sprite_with_this_brain(20, 0);
  &wizard = sp_editor_num(&seth);
  editor_type(&wizard, 0);
  &warp = editor_seq(&wizard, -1);
  
  if (&warp == 1)
  {
   //It has, so let's stop this script here
   kill_this_task();
  }
  
  //cutscene hasn't played previously
  //change editor seq of brain 20 'mana' sprite to 1 and play it
  editor_seq(&wizard, 1);
  
  freeze(1);
  sp_nodraw(1, 1);
  
  &seth = create_sprite(354, 169, 0, 587, 1);
  sp_base_walk(&seth, 580);
  sp_speed(&seth, 2);
  sp_dir(&seth, 8);
  
  &wizard = create_sprite(261, 156, 0, 577, 1);
  sp_base_walk(&wizard, 570);
  sp_speed(&wizard, 2); 
  sp_dir(&wizard, 6); 
  fade_up();
  
  say_stop("`7Is it almost done?", &wizard);
  wait(200);
  say_stop("`9Yes, we will escape using a portal", &seth);
  wait(200);
  say_stop("`7But.. where are we going?", &wizard);
  wait(200);
  say_stop("`9Before long this world will be no more", &seth);
  say_stop("`9We will escape to another world, exactly the same as this one..", &seth);
  say_stop("`9It's like a mirror of our world, but completely separate.", &seth);
  say_stop("`9The spell in the Bigerical Curse spell book calls it a 'parallel universe'", &seth);
  say_stop("`9But we will travel to the past of this parallel world, where I can make my plans a reality!", &seth);
  wait(200);
  say_stop("`7I.. don't understand", &wizard);
  sp_dir(&seth, 4);
  
  say_stop("`9So we will go to this new world", &seth);
  say_stop("`9To the time that the wizard who created this powerful spell was still alive", &seth);
  say_stop("`9And there, we will use him to help us realise our plans..", &seth);
  sp_dir(&seth, 8);
  say_stop("`9Now let's go!", &seth);
  wait(500);
  
  //create the portal
  playsound(59, 12000, 0, 0, 0);
  &warp = create_sprite(356, 66, 6, 36, 1);
  sp_brain(&warp, 6);
  sp_seq(&warp, 36);
  sp_size(&warp, 2);
  sp_que(&warp, 10);
 
 //make the portal start small and grow 
 &count = 2; 
 growloop:
  wait(1);
  &count += 3;
  sp_size(&warp, &count);
  if (&count < 150) goto growloop;
  
  //move Seth into the portal
  move_stop(&seth, 8, 115, 1);
  move(&seth, 8, 85, 1);
  playsound(60, 22050, 0, 0, 0); 
 
 //make him shrink as he moves in
&count = 100; 
 ssloop:
  wait(1);
  &count -= 10;
  if (&count >= 1) sp_size(&seth, &count);
  if (&count > 0) goto ssloop;
  sp_active(&seth, 0);
  
  //move the wizard into the portal
  move_stop(&wizard, 6, 345, 1);
  move_stop(&wizard, 8, 105, 1);
  move(&wizard, 8, 65, 1);
  playsound(60, 22050, 0, 0, 0);  

 //make him shrink as he moves in
&count = 100;  
 wsloop:
  wait(1);
  &count -= 10;
  if (&count >= 1) sp_size(&wizard, &count);
  if (&count > 0) goto wsloop; 

  sp_active(&wizard, 0);
  playsound(59, 12000, 0, 0, 0); 
  
  //make the portal shrink and vanish
&count = 100;   
 shrinkloop:
  wait(1);
  &count -= 3;
  if (&count >= 1) sp_size(&warp, &count);
  if (&count > 0) goto shrinkloop;  
  
   //screen change
  script_attach(1000);
    fade_down();
    sp_nodraw(1, 1);
    &player_map = 621;
    load_screen();
    draw_screen();
    freeze(1);
    kill_this_task();  
 }
 if (&player_map == 621)
 {
  if (&intro <= 1)
  {
   sp_active(&current_sprite, 0);
   kill_this_task();
  }
   
  int &storm;
  int &girl;
  if (&knight != 99) int &knight;
  
  //check if cutscene has played previously
  &storm = get_sprite_with_this_brain(20, 0);
  &girl = sp_editor_num(&storm);
  editor_type(&girl, 0);
  &storm = editor_seq(&girl, -1);
  
  if (&storm == 1)
  {
   //it has so let's kill this scirpt
   kill_this_task();
  }
  
  //it hasn't, change editor seq of brain 20 'mana sprite' to 1
  editor_seq(&girl, 1);
  
  //play the cutscene
  freeze(1);
  sp_nodraw(&current_sprite, 1);
  sp_nohit(&current_sprite, 1);
  sp_nodraw(1, 0);
  
  sp_x(1, 280);
  sp_y(1, 226);
  
  &storm = create_sprite(358, 88, 0, 417, 1);
  sp_base_walk(&storm, 410);
  sp_speed(&storm, 2);  

  &girl = create_sprite(261, 124, 0, 339, 1);
  sp_base_walk(&girl, 330);
  sp_speed(&girl, 3);  
   
  if (&knight != 99)
  {
   &knight = create_sprite(348, 205, 0, 287, 1);
   sp_base_walk(&knight, 280);
   sp_speed(&knight, 3);
   sp_timing(&knight, 33);
  }
  
  fade_up();
  say("`6Almost there..", &storm);
  move(&storm, 8, -80, 1);
  if (&knight != 99) move(&knight, 8, -80, 1);
  move(&girl, 8, -80, 1);
  move_stop(1, 8, -80, 1);   
 }
 if (&player_map == 589)
 {  
  if (&intro <= 1)
  {
   sp_active(&current_sprite, 0);
   kill_this_task();
  }
 
  int &storm;
  int &girl;
  if (&knight != 99) int &knight;
  
  //check if cutscene has played previously
  &storm = get_sprite_with_this_brain(20, 0);
  &girl = sp_editor_num(&storm);
  editor_type(&girl, 0);
  &storm = editor_seq(&girl, -1);
  
  if (&storm == 1)
  {
   //it has so let's kill this scirpt
   kill_this_task();
  }
  
  //it hasn't, change editor seq of brain 20 'mana sprite' to 1
  editor_seq(&girl, 1);
  
  //play the cutscene
  freeze(1);
  sp_nodraw(&current_sprite, 1);
  sp_nohit(&current_sprite, 1);
  
  &storm = create_sprite(358, 400, 0, 417, 1);
  sp_base_walk(&storm, 410);
  sp_speed(&storm, 2);  

  &girl = create_sprite(261, 400, 0, 339, 1);
  sp_base_walk(&girl, 330);
  sp_speed(&girl, 3);  
   
  if (&knight != 99)
  {
   &knight = create_sprite(348, 485, 0, 287, 1);
   sp_base_walk(&knight, 280);
   sp_speed(&knight, 3);
   sp_timing(&knight, 33);
  }  
  
  move(&storm, 8, 380, 1);
  move(&girl, 8, 375, 1);
  move(1, 9, 305, 1);
  
  if (&knight != 99)  move(&knight, 8, 330, 1);
  
  move_stop(&storm, 8, 395, 1);
  
  say_stop("`6Yes! Come on guys, I'm sure Martridge will have the answers!", &storm);
  move_stop(&storm, 7, 275, 1);
  sp_active(&storm, 0);
  move_stop(&girl, 8, 330, 1);
  sp_active(&girl, 0);
  
  if (&knight != 99)  move_stop(&knight, 8, 330, 1);
  if (&knight != 99)  move_stop(&knight, 4, 260, 1);
  if (&knight != 99) sp_active(&knight, 0);
  
  move_stop(1, 8, 330, 1);
  say_stop("Well.. I sure hope he does..", 1);
  move_stop(1, 2, 380, 1);
  say_stop("He seems like our only hope now..", 1);
  move_stop(1, 7, 248, 0);
 }
 if (&player_map == 722)
 {
  //attached to the note next to martridges dead body on this screen
  if (&intro < 9)
  {
   sp_active(&current_sprite, 0);
   kill_this_task();
  }
  else
  {
   int &storm;
   int &girl;
   if (&knight != 99) int &knight;
   int &check;
   int &explo;
   
   //check if cutscene has played previously
   &storm = get_sprite_with_this_brain(20, 0);
   &girl = sp_editor_num(&storm);
   editor_type(&girl, 0);
   &storm = editor_seq(&girl, -1);
   
   if (&storm == 1)
   {
    //it has so let's change it's script and kill this one off
    &storm = &current_sprite;
    script_attach(0);
    sp_script(&storm, "l2-note);
    kill_this_task();
   }
   
   //play the cutscene
   freeze(1);
   sp_nodraw(&current_sprite, 1);
  
   &storm = create_sprite(460, 210, 0, 417, 1);
   sp_base_walk(&storm, 410);
   sp_speed(&storm, 2);  
 
   &girl = create_sprite(433, 248, 0, 339, 1);
   sp_base_walk(&girl, 330);
   sp_speed(&girl, 3);  
    
   if (&knight != 99)
   {
    &knight = create_sprite(473, 270, 0, 287, 1);
    sp_base_walk(&knight, 280);
    sp_speed(&knight, 3);
    sp_timing(&knight, 33);
   }    

   //change editor seq of brain 20 'mana sprite' to 1
   wait(0);
   editor_seq(&girl, 1);
   
   move(&girl, 4, 351, 1);
   
   if (&knight != 99)   move(&knight, 8, 216, 1);
   
   move_stop(&storm, 7, 398, 1);
   sp_dir(&storm, 4);
   say("`6NO! ... Martridge.. how?!", &storm);
   move_stop(&girl, 4, 351, 1);
   move(&girl, 8, 237, 1);
   
   if (&knight != 99)   move_stop(&knight, 8, 216, 1);
   if (&knight != 99)   move_stop(&knight, 6, 495, 1);
   
   move_stop(&girl, 8, 237, 1);
   
   sp_dir(&girl, 9);
   
   if (&knight != 99)   sp_dir(&knight, 4);
  
   sp_dir(&storm, 3);
   move_stop(1, 8, 280, 1);
   
   say_stop("NO! What has happened here, Storm?!", 1);
   wait(200);
   say_stop("`6Dink.. I'm afraid things are as I feared..", &storm);
   say_stop("`6I had hunch from the first time the quakes started.", &storm);
   
   //the dead martridge sprite has a brain of 21, let's retrieve it
   wait(0);
   &check = get_sprite_with_this_brain(21, 0);
   
   say_stop("`3H.. hey guys.", &check);
   wait(200);
   sp_dir(&storm, 4);
   say("`6It's Martridge! He's still alive!", &storm);
   move(&storm, 4, 272, 1);
   sp_dir(&girl, 7);
   
   if (&knight != 99)   move(&knight, 8, 170, 1);
   
   move_stop(1, 7, 408, 1);
   move_stop(1, 8, 140, 1);
   say("Can we save him?!", 1);
   sp_dir(1, 4);
   wait(1000);
   
   say_stop("`3Forget about me.. there is no way I can live now", &check);
   wait(200);
   say_stop("`6Martridge..", &storm);
   wait(200);
   say_stop("`3Storm, you know what's going on here don't you?", &check);
   say_stop("`3You've felt the terrible force?", &check);
   wait(200);
   say_stop("`6Yes.. I didn't think I could tell what it really was", &storm);
   say_stop("`6But I guess I just didn't want to believe it was true", &storm);
   wait(200);
   say_stop("`3It is.. the ancient one, Seth, has returned", &check);
   say_stop("`3And he overpowered me and stole The Bigerical Curse", &check);
   say_stop("`3He has cast the Deterrilis spell, he means to destroy this world!", &check);
   say_stop("`3.. To erase it from existence", &check);
   wait(200);
   move_stop(1, 4, 316, 1);
   say_stop("But why would he do that, won't he die as well if that was the case?", 1);
   sp_dir(&storm, 6);
   wait(200);
   say_stop("`6Dink, there is no way he would have cast this without a way to escape", &storm);
   wait(200);
   say_stop("But if the world is erased, where could he possibly escape to?", 1);
   wait(200);
   say_stop("`3To anot.. another world.", &check);
   wait(200);
   sp_dir(&storm, 4);
   wait(200);
   say_stop("`6What?", &storm);
   wait(200);
   say_stop("`3Yes.. it's possible, The Bigerical Curse contains many powerful spells", &check);
   say_stop("`3Spells that transcend any other magic you or I have ever seen", &check);
   say_stop("`3That's why it was to be protected, and never used by anyone", &check);
   say_stop("`3But I have failed", &check);
   say_stop("`3I.. I can;t last much longer, but there is so much more to say", &check);
   say_stop("`3You still have a chance to live", &check);
   say_stop("`3With my last bit of lifeforce, I leave you with my last toughts to help you", &check);
   say("`3Here..", &check);

   playsound(24, 22052, 0, 0, 0);   
   &explo = create_sprite(230, 143, 7, 167, 1);
   sp_seq(&explo, 167);
   sp_nodraw(&current_sprite, 0);
   wait(500);
   
   say_stop("`6Martridge?", &storm);
   wait(200);
   say_stop("`6.. He's gone.", &storm);
   wait(200);
   say_stop("`6Let's see. What did he want to tell us", &storm);
   wait(1000);
   say_stop("Well, what does it say?", 1);
   wait(500);
   sp_dir(&storm, 6);
   say_stop("`6Dink, according to this our only hope is to follow Seth to this new world", &storm);
   say_stop("`6There is library of magic hidden in the cliffs behind this house", &storm);
   say_stop("`6Which can help us re-open the original portal that was opened by Seth", &storm);
   say_stop("`6There, we can find a way to stop Seth", &storm);
   say_stop("`6Then we can take the book back and return with a reversal spell!", &storm);
   wait(200);
   say_stop("Sounds complicated.. how can we be sure we return to this, and this time.", 1);
   wait(200);
   say_stop("`6I believe we need something from this world with great power", &storm);
   say_stop("`6Then we can use it to link the portal to this world when we return.", &storm);
   say_stop("`6Martridge says all answers can be found amongst the books in his library", &storm);
   wait(200);
   say_stop("Ok, we don't have much time.", 1);
   say_stop("Your expertise seems to be magic so you find a way to re-open that portal!", 1);
   say_stop("I'll see if I can find out what we need to return to this world", 1);
   wait(200);
   
   &story = 1;
   &stormy = 1;
   script_attach(1000);
   fade_down();
   sp_nodraw(1, 1);
   &player_map = 705;
   load_screen();
   draw_screen();
   fade_up();
   kill_this_task();  
  }
 } 
} 