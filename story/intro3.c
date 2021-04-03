void main(void)
{
 if (&player_map == 703)
 {
  if (&intro == 7)
  {
   freeze(1);
   int &x;
   int &y;
   int &dinkm = create_sprite(-20, 387, 0, 76, 1);
   sp_base_walk(&dinkm, 70);
   sp_speed(&dinkm, 2);
   move(1, 6, 179, 1);
   move(&dinkm, 6, 90, 1);
   move_stop(1, 6, 170, 1);
   move(1, 9, 380, 1);
   move_stop(&dinkm, 6, 90, 1);
   move(&dinkm, 9, 300, 1);
   move_stop(1, 9, 380, 1); 
   sp_dir(1, 8);
   move_stop(&dinkm, 9, 300, 1);  
   sp_brain(&dinkm, 6);  
   sp_seq(&dinkm, 18);
   wait(300);
   sp_seq(&dinkm, 16);
   wait(200);
   sp_dir(1, 4);
   say_stop("`6Damn...", 1);
   wait(200);
   say_stop("So what do we do now, almighty 'Stormcloud'? <chuckles>", &dinkm);
   wait(200);
   say_stop("`6How dare you insult my name! ... Anyway... just call me Storm.", 1);
   wait(200);
   say_stop("Hehehe..", &dinkm);
   wait(200);
   say_stop("`6Insulting a true wizards name is an insult to Kasdaph!", 1);
   wait(200);
   say_stop("Kasdaph?", &dinkm);
   wait(200); 
   say_stop("`6Kasdaph is a term used to refer to wizards of true power", 1);
   wait(200);
   say_stop("'Kasdaph'? .. What a stupid term..", &dinkm);
   wait(200);
   say_stop("`6How dare you! Kasdaph was the name of an ancient, very powerful wizard, as told in the legends.", 1);
   say_stop("`6It is in his honor that his name is used in this manner", 1);  
   say_stop("`6He was one of the most powerful wizards in history", 1);
   wait(200);
   say_stop("So I'm a 'Kasdaph'?", &dinkm);
   wait(200);
   say_stop("`6Of course not! .. You don't use magic in the correct and noble way.. ", 1);
   say_stop("`6Your spells remain the same and you do not become 'a part' of the magic", 1);
   say_stop("`6True wizards use mana. They draw upon their knowledge to produce the magic.", 1); 
   say_stop("`6The learning of a spell continues as we progress and gain experience in the use of spells.", 1);
   say_stop("`6As we encounter difficulties and add to our knowledge our spells become more effective", 1);
   say_stop("`6You are hardly a wizard, let alone one of the Kasdaph family.", 1);
   wait(200);
   say_stop("What about Martridge? Is he one of the Kasdaph family?", &dinkm);
   wait(200);
   say_stop("`6Yes. He is the reason you even learned of magic.", 1);
   say_Stop("`6You wonder why you cannot commit a spell to memory?", 1);
   say_Stop("`6It's because you are not a true wizard.", 1);
   say_stop("`6You don't have any true natural ability for magic, Dink Smallwood.", 1);
   say_Stop("`6The only reason you are still able to use magic is because", 1);
   say_stop("`6Martridge transferred some of his magic energy to you, on the day you learned fireball", 1);
   wait(200);
   say_Stop("I don't believe you.", &dinkm);
   wait(200);
   say_stop("`6Believe what you will, but you will realise the truth eventually.", 1);
   wait(200);
   playsound(51, 16000, 44, 0, 1);   
   wait(500);
   say("`6Another quake?!", 1);
   wait(1000);
   int &crack = create_sprite(85, 236, 0, 89, 1);
   sp_pseq(&crack, 89);
   sp_pframe(&crack, 1);
   sp_que(&crack, -1000);
   sp_hard(&crack, 0);
   sp_dir(1, 4);
   sp_seq(&dinkm, 14);
   wait(1500);
   int &crack2 = create_sprite(331, 331, 0, 89, 1);
   sp_pseq(&crack2, 89);
   sp_pframe(&crack2, 1);
   sp_que(&crack2, -1000);
   sp_hard(&crack2, 0);
   sp_dir(1, 2);
   sp_seq(&dinkm, 12);
   wait(1000);
   int &crack3 = create_sprite(493, 154, 0, 89, 1);
   sp_pseq(&crack3, 89);
   sp_pframe(&crack3, 1);
   sp_que(&crack3, -1000);
   sp_hard(&crack3, 0);
   sp_dir(1, 6);
   sp_seq(&dinkm, 16);
   wait(1000);
   kill_all_sounds();
   wait(450);
   sp_dir(1, 4);
   wait(200);
   say_stop("`6Alright, enough of this, we need to get to Martridge now.", 1);
   wait(200);
   say_stop("Sorry to break the obvious to you.... but that's not gonna happen", &dinkm);
   say_stop("The path is blocked.", &dinkm);
   playsound(50, 16000, 0, 0, 0);
   int &girl = create_sprite(-30, 370, 0, 339, 1);
   sp_base_walk(&girl, 330);
   sp_speed(&girl, 3);
   move(&girl, 6, 522, 1);
   sp_dir(1, 2);
   sp_seq(&dinkm, 12);
   say("What the?  ...", &dinkm);
   int &bonc = create_sprite(-30, 370, 0, 539, 1);
   sp_base_walk(&bonc, 530);
   sp_speed(&bonc, 3);
   wait(500);
   move(&bonc, 6, 520, 1);
   wait(100);
   say("`6DIE STUPID BONCA!", 1);
   &x = sp_x(1, -1);
   &y = sp_y(1, -1);
   wait(1580);
   int &magi = create_sprite(&x, &y, 6, 163, 1);
   sp_seq(&magi, 163);
   sp_speed(&magi, 6);
   move_stop(&magi, 2, 370, 1);
   move(&magi, 2, 470, 1);
   &x = sp_x(&magi, -1);
   int &wat = create_sprite(&x, 373, 6, 94, 1);
   sp_seq(&wat, 94);
   sp_script(&wat, "dam-icee");
   sp_speed(&bonc, 0);
   sp_base_walk(&bonc, -1);
   sp_brain(&bonc, 0);
   sp_seq(&bonc, 559);
   sp_frame(&bonc, 1);
   sp_que(&bonc, -500);
   move_stop(&magi, 2, 500, 1);
   wait(500);
   sp_nodraw(&magi, 1);
   sp_active(&magi, 0);
   sp_seq(&dinkm, 16);
   say_stop("Wow, lucky shot", &dinkm);
   sp_dir(1, 4);
   say_stop("`6It has nothing to do with 'luck'. I have trained well with my magic, my accuracy is at it's finest.", 1);
   move_stop(&girl, 4, 435, 1);
   move_stop(&girl, 8, 219, 1);
   move_stop(&girl, 4, 345, 1);
   sp_seq(&dinkm, 12);
   sp_dir(1, 2);
   say_stop("Are you ok, Chealse?", &dinkm);
   wait(200);
   say_stop("`5I'm fine, thanks to this guy..... who's your friend?", &girl);
   wait(200);
   say_stop("His name is Storm", &dinkm);
   wait(200);
   say_stop("`5Well, thank you Storm... you saved my life", &girl);
   wait(200);
   sp_dir(1, 4);
   sp_seq(&dinkm, 16);
   say_stop("`6No problem little girl. Now Dink I'm going to try and find a way to get rid of these rocks", 1);
   wait(200);
   say_stop("Ok, you do that. I'm gonna see if there's any more people around that need help.", &dinkm);
   &sglifemax = 80;
   &sglife = 80;
   &sgstrength = 20;
   &sgmagic = 0;
   &sgdefense = 5;
   &sgmana = 0;
   &sggold = 0;
   &sglevel = 16;
   &sgexp = 0;
   init("load_sequence_now graphics\people\gnome\green\c13w1- 581 75 29 55 -15 -7 17 17");
   init("load_sequence_now graphics\people\gnome\green\c13w3- 583 75 31 57 -19 -12 18 12");
   init("load_sequence_now graphics\people\gnome\green\death- 585 1 36 37 -1 -2 -1 -2");
   init("load_sequence_now graphics\people\gnome\green\c13w7- 587 75 30 57 -16 -9 16 10");
   init("load_sequence_now graphics\people\gnome\green\c13w9- 589 75 28 54 -17 -10 17 13");
   init("load_sequence_now graphics\effects\splode\shock- 167");
   wait(1000);
   &intro = 8;
   script_attach(1000);
   fade_down();
   sp_nodraw(1, 1);
   &player_map = 705;
   load_screen();
   draw_screen();
   fade_up();
   kill_this_task();
  }
  if (&intro >= 8)
  {
   if (&story == 0)
   {
    &vision = 1;
    if (&sgchar == 0)
    {
     freeze(1);
     int &storm = create_sprite(400, 183, 0, 417, 1);
     sp_base_walk(&storm, 410);
     sp_speed(&storm, 2);
     int &girl = create_sprite(325, 214, 0, 337, 1);
     sp_base_walk(&girl, 330);
     sp_speed(&girl, 1);
     sp_dir(&storm, 4);
     sp_dir(&girl, 8);
     sp_dir(1, 6);
     wait(500);
     say_stop("`6Alright, I'll try and find a path to Martridge. You go look for survivors.", &storm);
     playsound(22, 22050, 0,0,0);
     draw_status();
     move_stop(&storm, 6, 451, 1);
     move_stop(&storm, 8, 114, 1);
     say("`6Hmmm..... I wonder if i can get rid of this rock.", &storm);
     sp_script(&storm, "l1-storm");
     sp_script(&girl, "l1-girl");
     sp_dir(1, 2);
     &story = 1;
     unfreeze(1);
    }
   }
   if (&stormy == 0)
   {
    if (&sgchar == 1)
    {
     freeze(1);
     int &dinkm = create_sprite(273, 183, 0, 76, 1);
     sp_base_walk(&dinkm, 70); 
     sp_speed(&dinkm, 2);
     int &girl = create_sprite(325, 214, 0, 337, 1);
     sp_base_walk(&girl, 330);
     sp_speed(&girl, 1);
     sp_dir(&dinkm, 6);
     sp_dir(&girl, 8);     
     wait(500);
     say_stop("`6Alright, I'll try and find a path to Martridge. You go look for survivors.", 1);
     playsound(22, 22050, 0,0,0);
     draw_status();
     move_stop(&dinkm, 4, -80, 1);
     sp_active(&dinkm, 0);
     sp_script(&girl, "l1-girlp2");     
     &stormy = 1;  
     unfreeze(1);
    }
   }
   if (&story == 1)
   {
    if (&knight >= 4)
    {
     &vision = 3;
     return;
    }
    if (&knight < 4)
    {
     &vision = 2;
     return;
    }
   }
   if (&story == 2)
   {
    if (&knight == 100)
    {
     &vision = 3;
     return;
    }
    if (&knight == 99)
    {
     &vision = 2;
     return;
    }
   }
   if (&story == 3)
   {
    if (&knight == 100)
    {
     &vision = 3;
     return;
    }
    if (&knight == 99)
    {
     &vision = 2;
     return;
    }
   }
   if (&story == 4)
   {
    &vision = 4;
   }
   if (&stormy >= 1)
   {
    &vision = 5;
    if (&knight == 100)
    {
     if (&stormy == 3) return;
     int &kni = create_sprite(493, 290, 0, 287, 1);
     sp_base_walk(&kni, 280);
     sp_speed(&kni, 3);
     sp_timing(&kni, 33);
     sp_brain(&kni, 16);
     sp_script(&kni, "l1-knightp2"); 
    }
    if (&stormy >= 6)
    {
     int &dinkm = create_sprite(409, 156, 0, 76, 1);
     sp_base_walk(&dinkm, 70);
     sp_speed(&dinkm, 2);
     sp_timing(&dinkm, 33);
     sp_brain(&dinkm, 16);
     sp_script(&dinkm, "l1-dinkm"); 
    }
   }
  }
 }
}