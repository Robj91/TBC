void main(void)
{
 if (&player_map == 768)
 {
  if (&intro == 0)
  {
   int &sttext;
   int &sttext3;
   int &sttext4;
   int &sttext5;
   int &sttext6;
   int &sttext7;
   int &sttext8;
   set_font_color(11, 225, 0, 15);
   set_font_color(12, 176, 196, 222);

   freeze(1);
   &sttext = say_xy("`%A new time of peace began on the day of Seth's defeat.", 0, 500);
   sp_kill(&sttext, 0);
   sp_speed(&sttext, 1);
   move(&sttext, 8, -20, 1);
   wait(2000);

   &sttext3 = say_xy("`%Dink became famous, stories of his adventures were told in many places.", 30, 480);
   sp_kill(&sttext3, 0);
   sp_speed(&sttext3, 1);
   move(&sttext3, 8, -20, 1);
   wait(4000);

   &sttext4 = say_xy("`%Unfortunately, the peace was to last for no more than a year...", 0, 500);
   sp_kill(&sttext4, 0);
   sp_speed(&sttext4, 1);
   move(&sttext4, 8, -20, 1);
   wait(3000);

   &sttext5 = say_xy("`%and then Seth returned.", 0, 500);
   sp_kill(&sttext5, 0);
   sp_speed(&sttext5, 1);
   move_stop(&sttext5, 8, -20, 1);

   sp_active(&sttext, 0);
   sp_active(&sttext3, 0);
   sp_active(&sttext4, 0);
   sp_active(&sttext5, 0);
   script_attach(1000);
   fade_down();
   fill_screen(0);
   load_tile("tiles\ts40.bmp", 40);
   load_tile("tiles\ts06.bmp", 06);
   load_tile("tiles\ts07.bmp", 07);

   //load_tile("tiles\ts28.bmp", 28);
   //load_tile("tiles\ts33.bmp", 33);
   //load_tile("tiles\ts01.bmp", 01);
   //load_tile("tiles\ts05.bmp", 05);
   //load_tile("tiles\ts23.bmp", 23);
   //load_tile("tiles\ts24.bmp", 24);
   //load_tile("tiles\ts25.bmp", 25);
   //load_tile("tiles\ts26.bmp", 26);
   //load_tile("tiles\ts27.bmp", 27);
   //load_tile("tiles\ts02.bmp", 02);
   //load_tile("tiles\ts03.bmp", 03);
   //load_tile("tiles\ts04.bmp", 04);
   //load_tile("tiles\ts08.bmp", 08);
   //load_tile("tiles\ts09.bmp", 09);
   //load_tile("tiles\ts10.bmp", 10);
   //load_tile("tiles\ts11.bmp", 11);
   //load_tile("tiles\ts12.bmp", 12);
   //load_tile("tiles\ts13.bmp", 13);
   //load_tile("tiles\ts14.bmp", 14);
   //load_tile("tiles\ts15.bmp", 15);
   //load_tile("tiles\ts16.bmp", 16);
   //load_tile("tiles\ts17.bmp", 17);
   //load_tile("tiles\ts18.bmp", 18);
   //load_tile("tiles\ts19.bmp", 19);
   //load_tile("tiles\ts20.bmp", 20);
   //load_tile("tiles\ts21.bmp", 21);
   //load_tile("tiles\ts22.bmp", 22);
   //load_tile("tiles\ts29.bmp", 29);
   //load_tile("tiles\ts30.bmp", 30);
   //load_tile("tiles\ts31.bmp", 32);
   //load_tile("tiles\ts36.bmp", 36);
   //load_tile("tiles\ts37.bmp", 37);
   //load_tile("tiles\ts38.bmp", 38);
   //load_tile("tiles\ts41.bmp", 41);
   &player_map = 606;
   load_screen();
   draw_screen();
   draw_hard_map();
   kill_this_task();
  }
 }
 if (&player_map == 606)
 {
  if (&intro == 0)
  {
   freeze(1);
   
   int &magicguy = create_sprite(368, 450, 0, 419, 1);
   sp_speed(&magicguy, 2);
   sp_base_walk(&magicguy, 410);
   
   int &pill = create_sprite(368, 450, 6, 133, 1);
   sp_brain(&pill, 6);
   sp_seq(&pill, 133);
   sp_speed(&pill, 2);

   int &pill2 = create_sprite(330, 450, 6, 133, 1);
   sp_brain(&pill2, 6);
   sp_seq(&pill2, 133);
   sp_speed(&pill2, 2);

   int &pill3 = create_sprite(415, 450, 6, 133, 1);
   sp_brain(&pill3, 6);
   sp_seq(&pill3, 133);
   sp_speed(&pill3, 2);
   fade_up();

   move(&magicguy, 8, 145, 1);
   wait(250);
   say("`6Almost there...", &magicguy);
   move_stop(&magicguy, 8, 145, 1);
   say_stop("`6Puff.. Puff.. Damn it.", &magicguy);
   say_stop("`6Gotta keep moving. Gotta talk to the king..", &magicguy);
   move(&magicguy, 8, -50, 1);
   wait(100);
   playmidi("2.mid");
   move(&pill, 8, -50, 1);
   move(&pill2, 8, -50, 1);
   move(&pill3, 8, -50, 1);
   wait(2500);
   
   fade_down();
   fill_screen(0);
   sp_active(&magicguy, 0);
   sp_active(&pill, 0);
   sp_active(&pill2, 0);
   sp_active(&pill3, 0);
 
   script_attach(1000);
   &player_map = 573;
   load_screen();
   draw_screen();
   draw_hard_map();
   kill_this_task();
  }
 }
 if (&player_map == 573)
 {
  if (&intro == 0)
  {
   freeze(1);

   init("load_sequence_now graphics\effects\magic\seth1w 581 75 43 133 -19 -16 23 16");
   init("load_sequence_now graphics\effects\magic\seth3w 583 75 44 126 -21 -21 19 16");
   init("load_sequence_now graphics\effects\magic\seth7w 587 75 42 123 -21 -16 18 16");
   init("load_sequence_now graphics\effects\magic\seth9w 589 75 44 125 -20 -16 20 16");
   init("load_sequence_now graphics\effects\magic\pose 580 75 41 129 -30 -16 31 10");

   int &fenc = create_sprite(595, 165, 0, 64, 8);
   sp_size(&fenc, 1);
   sp_pseq(&fenc, 64);
   sp_pframe(&fenc, 8);
   sp_hard(&fenc, 0);
   draw_hard_map();

   int &guard = create_sprite(197, 304, 10, 734, 1);
   sp_script(&guard, "i-guard");

   int &bonc = create_sprite(151, 296, 9, 622, 1);
   sp_script(&bonc, "i-bonc");
   sp_target(&bonc, &guard);
   sp_target(&guard, &bonc);
   
   int &guard2 = create_sprite(235, 381, 10, 736, 1);
   sp_script(&guard2, "i-guard");
  
   int &bonc2 = create_sprite(272, 387, 9, 628, 1);
   sp_script(&bonc2, "i-bonc");
   sp_target(&bonc2, &guard2);
   sp_target(&guard2, &bonc2);
  
   int &guard3 = create_sprite(336, 242, 10, 738, 1);
   sp_script(&guard3, "i-guard");
 
   int &slayer = create_sprite(340, 215, 9, 632, 1);
   sp_script(&slayer, "i-slay");
   sp_target(&slayer, &guard3);
   sp_target(&guard3, &slayer);

   int &guard4 = create_sprite(417, 323, 10, 734, 1);
   sp_script(&guard4, "i-guard");

   int &slayer2 = create_sprite(358, 308, 9, 636, 1);
   sp_script(&slayer2, "i-slay");
   sp_target(&slayer2, &guard4);
   sp_target(&guard4, &slayer2);

   int &guard5 = create_sprite(548, 308, 10, 732, 1);
   sp_script(&guard5, "i-guard");
   
   int &bonc3 = create_srite(529, 333, 9, 596, 1);
   sp_script(&bonc3, "i-slay");
   sp_target(&bonc3, &guard5);
   sp_target(&guard5, &bonc3);

   int &guard6 = create_sprite(440, 219, 10, 732, 1);
   sp_script(&guard6, "i-guard");
  
   int &pill = create_sprite(437, 270, 9, 133, 1);
   sp_script(&pill, "i-pill");
   sp_hitpoints(&pill, 5000);
   sp_target(&pill, &guard6);
   sp_target(&guard6, &pill);
   sp_speed(&pill, 1);

   int &pill2 = create_sprite(670, 150, 6, 133, 1);
   sp_brain(&pill2, 6);
   sp_seq(&pill2, 133);
   sp_speed(&pill2, 2);

   int &pill3 = create_sprite(670, 112, 6, 133, 1);
   sp_brain(&pill3, 6);
   sp_seq(&pill3, 133);
   sp_speed(&pill3, 2);
   
   int &pill4 = create_sprite(670, 189, 6, 133, 1);
   sp_brain(&pill4, 6);
   sp_seq(&pill4, 133);
   sp_speed(&pill4, 2);
   
   int &magicguy = create_sprite(670, 150, 0, 417, 1);
   sp_base_walk(&magicguy, 410);
   sp_speed(&magicguy, 2);
   fade_up();
  
   sp_hitpoints(&pill, 5);
   sp_target(&guard6, &pill);
   sp_target(&pill, &guard6);

   move_stop(&magicguy, 4, 523, 1);
   say_stop("`6I need to talk to....", &magicguy);
   sp_dir(&magicguy, 2);
   wait(200);
   say_stop("`6wait.. The monsters are here too??", &magicguy);
   wait(200);
 
   sp_script(&guard6, "");
   freeze(&guard6);
   sp_brain(&guard6, 9);
   sp_speed(&guard6, 4);
   sp_hitpoints(&guard6, -1);
   wait(100);

   int &guyx = sp_x(&guard6, -1);
   int &guyy = sp_y(&guard6, -1);
  
   if (&guyx < 372)
   { 
    move_stop(&guard6, 6, 372, 1);
   }

   if (&guyx > 372) 
   {
    move_stop(&guard6, 4, 372, 1);
   }

   if (&guyy > 192)
   { 
    move_stop(&guard6, 8, 192, 1);
   }

   if (&guyy < 192) 
   {
    move_stop(&guard6, 2, 192, 1);
   }

   sp_dir(&guard6, 6);
   sp_dir(&magicguy, 4);
   sp_speed(&guard6, 2);

   say_stop("`3This place is not safe at the moment.", &guard6);
   say_stop("`3Monsters started to appear to the north and they started attacking the castle.", &guard6);
   wait(200);
   say_stop("`6They are also coming from the south. I came here from Kernsin.", &magicguy);
   say_stop("`6There were monsters attacking everywhere, but with the help of my magic, I managed to escape", &magicguy);
   say_stop("`6I was coming here to warn the King about the attack but looks like it's too late", &magicguy);
   wait(200);
   say_stop("`3We cannot open the gate, the king is inside", &guard6);
   say_stop("`3and if we open it the monsters will kill him.", &guard6);
   say_stop("`3There seems to be no monsters attacking to the east, near stonebrook village", &guard6);
   say_stop("`3We need Dink Smallwood's help but I have to stay here and help guard the castle", &guard6);
   wait(200);
   say_stop("`6I will go and get his help at once", &magicguy);
   wait(200);
   say_stop("`3If any other survivors from Kernsin pass by, I'll also send them to stonebrook.", &guard6);
   say_stop("`3It's the safest place at the moment.", &guard6);
   wait(200);
   
   move(&pill2, 4, 603, 1);
   move(&pill3, 4, 603, 1);
   move_stop(&pill4, 4, 603, 1);
   sp_hitpoints(&pill2, 5);
   sp_base_death(&pill2, 140);
   sp_brain(&pill2, 9);
   freeze(&pill2);
   sp_dir(&magicguy, 6);
  
   wait(300);
  
   move(&guard6, 6, 523, 1); 
   sp_dir(&guard, 6);
   move_stop(&magicguy, 4, 411, 1);
   sp_dir(&magicguy, 6);
   sp_hard(&fenc, 1);
   draw_hard_map();
   sp_active(&fenc, 0);

   fire:
   wait(200);
   int &junk = create_sprite(441, 150, 11, 163, 1);
   sp_seq(&junk, 163); 
   sp_dir(&junk, 6);
   playsound(17, 3000,0,&junk,0);
   sp_timing(&junk, 0);
   sp_speed(&junk, 6);
   sp_strength(&junk, 30);
   sp_range(&junk, 10);
   sp_flying(&junk, 1);
   sp_script(&junk, "dam-sice");
   int &mshadow = create_sprite(493, 150, 15, 432, 3);
   sp_brain_parm(&mshadow, &junk);
   sp_que(&mshadow, -500);
   sp_nohit(&mshadow, 1);
   sp_brain_parm(&junk, 1);
   sp_brain_parm2(&junk, &mshadow);
   wait(200);
   say("`6DIE, stupid pillbugs", &magicguy);
   
   wait(1000);

   sp_dir(&magicguy, 2);
   say("`3Get going, I'll handle the rest of them", &guard6);

   sp_script(&pill3, "i-pill");
   sp_script(&pill4, "i-pill");

   sp_target(&pill3, &guard6);
   sp_target(&pill4, &guard6);
   unfreeze(&guard6);
   sp_target(&guard6, &pill4);

   wait(200);
   move_stop(&magicguy, 6, 670, 1);
  
   fade_down();
   fill_screen(0);
   sp_active(&magicguy, 0);
   sp_active(&pill, 0);
   sp_active(&pill2, 0);
   sp_active(&pill3, 0);
   sp_active(&guard, 0);
   sp_active(&guard2, 0);
   sp_active(&guard3, 0);
   sp_active(&guard4, 0);
   sp_active(&guard5, 0);
   sp_active(&guard6, 0);
   sp_active(&bonc, 0):
   sp_active(&bonc2, 0);
   sp_active(&slayer, 0);
   sp_active(&slayer2, 0);
   sp_active(&bonc3, 0);
   sp_active(&pill4, 0);
 
   say_stop_xy("`%Meanwhile...", 30, 380);
   script_attach(1000);
   &player_map = 621;
   load_screen();
   draw_screen();
   draw_hard_map();
   kill_this_task();
  }
 }
 if (&player_map == 621)
 {
  if (&intro == 0)
  {
   freeze(1); 
   sp_x(1, 452);
   sp_y(1, 75)
   
   int &explo;
   int &explo2;
   int &seth;
   int &wizard;
   fade_up();

   playsound(24, 22052, 0, 0, 0);
   &explo = create_sprite(288, 320, 7, 167, 1);
   sp_seq(&explo, 167);
   wait(50);

   &seth = create_sprite(288, 320, 0, 589, 1);
   sp_base_walk(&seth, 580);
   sp_speed(&seth, 2);
   wait(500);

   playsound(24, 22052, 0, 0, 0);  
   &explo2 = create_sprite(368, 320, 7, 167, 1);
   sp_seq(&explo, 167);

   &wizard = create_sprite(368, 320, 0, 577, 1);
   sp_base_walk(&wizard, 570);
   sp_speed(&wizard, 2);
   wait(500);
 
   say_stop("`7We are getting close, Master", &wizard);
   wait(200);
   say_stop("`9Yes! Let's keep moving", &seth);
   move(&wizard, 8, 170, 1);
   move_stop(&seth, 8, 170, 1);
   move_stop(&wizard, 8, 170, 1);
   move(&seth, 4, 257, 1);
   move_stop(&wizard, 6, 383, 1);
   move(&wizard, 8, -50, 1);
   move_stop(&seth, 8, 112, 1);
   move_stop(&seth, 6, 296, 1);
   move(&seth, 8, -10, 1);
   wait(500);
   move_stop(1, 8, -10, 1);
  }
  if (&intro >= 9)
  {
   &vision = 1;
  }
 }
 if (&player_map == 589)
 {
  if (&intro == 0)
  {
   freeze(1); 

   int &seth;
   int &wizard;

   &seth = create_sprite(313, 389, 0, 589, 1);
   sp_base_walk(&seth, 580);
   sp_speed(&seth, 2);

   &wizard = create_sprite(353, 393, 0, 577, 1);
   sp_base_walk(&wizard, 570);
   sp_speed(&wizard, 2);
   
   move(&wizard, 8, 357, 1);
   move_stop(&seth, 8, 357, 1);
   wait(200);
  
   say_stop("`7The book is in there, Master", &wizard);
   wait(200);
   say_stop("`9Yes! Soon I will have the power of the Bigerical Curse spell book in my hands!", &seth);
   say_stop("`9Let's continue", &seth);
  
   move_stop(&seth, 8, 320, 1);
   move_stop(&seth, 4, 269, 1);
   sp_active(&seth, 0);
   move_stop(&wizard, 8, 320, 1);
   move_stop(&wizard, 4, 269, 1);
   sp_active(&wizard, 0);
 
   fade_down();
   fill_screen(0);
   sp_active(&seth, 0);
   sp_active(&wizard, 0);

   script_attach(1000);
   &player_map = 722;
   sp_x(1, 564);
   sp_y(1, 37);
   load_screen();
   draw_screen();
   draw_hard_map();
   kill_this_task();
  } 
  if (&intro >= 9)
  {
   &vision = 1;
  }
 }
 if (&player_map == 722)
 {
  if (&intro == 0)
  {
   freeze(1);
  
   int &wiz;
   int &seth;
   int &wiz2;
   int &explo;
   int &blast;
   int &blast2;

   preload_seq(502);
   preload_seq(504);
   preload_seq(506);
   preload_seq(508);

   &wiz2 = create_sprite(204, 145, 0, 563, 1);
   sp_base_walk(&wiz2, 560);
   sp_speed(&wiz2, 1);
   sp_dir(&wiz2, 6);
   fade_up();
   wait(400);

   &seth = create_sprite(467, 350, 0, 589, 1);
   sp_base_walk(&seth, 580);
   sp_speed(&seth, 2);
   move_stop(&seth, 8, 145, 1);
   sp_dir(&seth, 4);

   &wiz = create_sprite(467, 350, 0, 577, 1);
   sp_base_walk(&wiz, 570);
   sp_speed(&wiz, 2);
   move_stop(&wiz, 8, 242, 1);


   sp_dir(&seth, 2);
   say_stop("`9Is this the place?", &seth);
   wait(200);
   say_stop("`7Yes Master, the book is in here somewhere.", &wiz);
   wait(200);
   say_stop("`3What book? Where did you come from and what are you doing here?", &wiz2);
   wait(500);
   say_stop("`3wait.. are you...", &wiz2); 
   say_stop("`3..no you can't be.. It's Impossible Dink killed you", &wiz2);
   wait(500);
   say_stop("`3Your supposed to be dead.", &wiz2);
   sp_dir(&seth, 4);
   wait(200);
   say_stop("`9I was not completely destroyed", &seth);
   say_stop("`9I was able to slowly regain my strength", &seth);
   say_stop("`9and Now I'm back,", &seth);
   say_stop("`9and there's nothing that pest - Dink Smallwood, can do about it!", &seth);
   wait(200);
   say_stop("`9You have a spell book called The Bigerical Curse - where is it?", &seth);
   wait(200);
   say_stop("`3How did you learn of that spell book?", &wiz2);
   say_stop("`3Anyway it doesn't matter, I will never give it to you", &wiz2);
   wait(200);
   say_stop("`9Then DIE!", &seth);

   &blast = create_sprite(442, 142, 6, 504, 1);
   sp_brain(&blast, 6);
   sp_speed(&blast, 6);
   sp_seq(&blast, 504);
   &blast2 = create_sprite(239, 142, 6, 506, 1);
   sp_brain(&blast2, 6);
   sp_speed(&blast2, 6);
   sp_seq(&blast2, 506);
   playsound(17, 8000,0,&blast,0);
   move(&blast, 4, 340, 1);
   move_stop(&blast2, 6, 340, 1);
   sp_active(&blast, 0);
   sp_active(&blast2, 0);
   &explo = create_sprite(340, 122, 7, 70, 1);
   sp_brain(&explo, 7);
   sp_seq(&explo, 70);
   playsound(6, 22050, 0,0,0);
   wait(400);

   &blast = create_sprite(442, 142, 6, 504, 1);
   sp_brain(&blast, 6);
   sp_speed(&blast, 6);
   sp_seq(&blast, 504);
   &blast2 = create_sprite(239, 142, 6, 506, 1);
   sp_brain(&blast2, 6);
   sp_speed(&blast2, 6);
   sp_seq(&blast2, 506);
   playsound(17, 8000,0,&blast,0);
   move(&blast, 4, 340, 1);
   move_stop(&blast2, 6, 340, 1);
   sp_active(&blast, 0);
   sp_active(&blast2, 0);
   sp_active(&explo, 0);
   &explo = create_sprite(340, 122, 7, 70, 1);
   sp_brain(&explo, 7);
   sp_seq(&explo, 70);
   playsound(6, 22050, 0,0,0);

   &blast = create_sprite(442, 142, 6, 504, 1);
   sp_brain(&blast, 6);
   sp_speed(&blast, 6);
   sp_seq(&blast, 504);
   playsound(17, 8000,0,&blast,0);
   move_stop(&blast, 4, 204, 1);
   sp_active(&blast, 0);
   sp_active(&explo, 0);
   &explo = create_sprite(204, 122, 7, 168, 1);
   sp_que(&explo, 1000);
   sp_seq(&explo, 168);
   sp_pseq(&wiz2, 575);
   sp_pframe(&wiz2, 1);
   playsound(6, 22050, 0,0,0);
   wait(300);
   move_stop(&seth, 4, 270, 1);
   say_stop("`9Pathetic weakling...", &seth);
   wait(200);
   move_stop(&wiz, 8, 142, 1);
   sp_dir(&wiz, 4);
   sp_dir(&seth, 6);
  
   say_stop("`9Can you find the book?", &seth);
   wait(200);
   say_stop("`7The book is supposed to be concealed in a cave.", &wiz);
   move_stop(&wiz, 4, 322, 1);
   sp_dir(&wiz, 8);
   wait(200);
   say_stop("`7This cabin sits right against the cliff, I think it's through this wall.", &wiz);
   move_stop(&wiz, 6, 388, 1);
   sp_dir(&wiz, 4);
   move_stop(&seth, 6, 322, 1);
   sp_dir(&seth, 8);
   &blast = create_sprite(322, 142, 6, 508, 1);
   sp_brain(&blast, 6);
   sp_speed(&blast, 6);
   sp_seq(&blast, 508);
   playsound(17, 8000,0,&blast,0);
   move_stop(&blast, 8, 79, 1);
   sp_active(&blast, 0);
   sp_active(&explo, 0);
   &explo = create_sprite(322, 69, 7, 70, 1);
   sp_que(&explo, 86);
   sp_seq(&explo, 70);
   playsound(6, 22050, 0,0,0);  
  
   int &cave = create_sprite(322, 85, 0, 89, 9);
   sp_pseq(&cave, 89);
   sp_pframe(&cave, 9);

   wait(1000);
   sp_dir(&seth, 6);
   say_stop("`9Yes! It's in here, let's go!", &seth);
   move_stop(&seth, 8, 85, 1);
   sp_active(&seth, 0);
   move_stop(&wiz, 4, 322, 1);
   move_stop(&wiz, 8, 85, 1);
   sp_active(&wiz, 0);
  
   fade_down();
   fill_screen(0);
   sp_active(&wiz, 0);
   sp_active(&seth, 0);
   sp_active(&wiz2, 0);
   sp_active(&explo, 0);
   sp_active(&blast, 0);
   sp_active(&blast2, 0);

   script_attach(1000);
   load_tile("tiles\tsb40.bmp", 40); 
   &player_map = 605;
   sp_x(1, 564);
   sp_y(1, 37);
   load_screen();
   draw_screen();
   draw_hard_map();
   kill_this_task();
  }

  if (&intro == 1)
  {
   freeze(1);
   &vision = 1;
    
   int &seth;
   int &wiz;
   fade_up();
  
   wait(400);

   &seth = create_sprite(323, 116, 0, 589, 1);
   sp_base_walk(&seth, 580);
   sp_speed(&seth, 2);
    
   move_stop(&seth, 2, 140, 1);
   move_stop(&seth, 6, 414, 1);

   &wiz = create_sprite(323, 116, 0, 577, 1);
   sp_base_walk(&wiz, 570);
   sp_speed(&wiz, 2);
  
   move(&seth, 2, 244, 1);
   move_stop(&wiz, 2, 140, 1);
   move_stop(&wiz, 6, 414, 1);
   move_stop(&seth, 2, 244, 1);
   move(&wiz, 2, 244, 1);
   move_stop(&seth, 6, 468, 1);
   move_stop(&seth, 2, 347, 1);
   sp_nodraw(&seth, 1);
   sp_active(&seth, 0);
   move_stop(&wiz, 2, 244, 1);
   move_stop(&wiz, 6, 468, 1);
   move_stop(&wiz, 2, 347, 1);
   sp_nodraw(&wiz, 1);
   sp_active(&wiz, 0);
  
   wait(500);
   
   fade_down();
   fill_screen(0); 

   init("load_sequence_now graphics\people\gnome\green\c13w1- 581 75 29 55 -15 -7 17 17");
   init("load_sequence_now graphics\people\gnome\green\c13w3- 583 75 31 57 -19 -12 18 12");
   init("load_sequence_now graphics\people\gnome\green\death- 585 1 36 37 -1 -2 -1 -2");
   init("load_sequence_now graphics\people\gnome\green\c13w7- 587 75 30 57 -16 -9 16 10");
   init("load_sequence_now graphics\people\gnome\green\c13w9- 589 75 28 54 -17 -10 17 13");
   
   say_stop_xy("`%Meanwhile...", 30, 380); 
   sp_active(&seth, 0);
   sp_active(&wiz, 0);
   sp_active(&wiz2, 0);
   sp_active(&star, 0);
   sp_active(&star2, 0);
   sp_active(&star3, 0);
   sp_active(&sstar, 0);

   script_attach(1000); 
   &player_map = 575;
   load_screen();
   draw_screen();
   draw_hard_map();
   kill_this_task();
  }
  if (&intro >= 9)
  {
   &vision = 1;
  }
 }

 if (&player_map == 605)
 {
  if (&intro == 0)
  {
   freeze(1);
   
   int &statue;
   int &statue2;
   int &explo;
   int &blast;
   int &crack;
   int &crack2;
   int &crack3;
   int &crack4;
   int &seth;
   int &book;
   int &wiz;
   int &fakestat;

   preload_seq(99);
   
   &seth = create_sprite(320, 450, 0, 589, 1);
   sp_base_walk(&seth, 580);
   sp_speed(&seth, 2);

   &wiz = create_sprite(320, 450, 0, 577, 1);
   sp_base_walk(&wiz, 570):
   sp_speed(&wiz, 2);
   sp_que(&wiz, 108);

   &statue = create_sprite(264, 43, 0, 99, 1);
   sp_pseq(&statue, 99);
   sp_pframe(&statue, 1);
   
   &statue2 = create_sprite(373, 43, 0, 99, 1);
   sp_pseq(&statue2, 99);
   sp_pframe(&statue2, 1);

   &book = create_sprite(326, 85, 0, 422, 35);
   sp_pseq(&book, 422);
   sp_pframe(&book, 35);
   sp_que(&book, 121);
   fade_up();

   move(&seth, 8, 178, 1);
   wait(1000);
   move_stop(&wiz, 8, 254, 1);
   wait(500);
   move_stop(&seth, 8, 178, 1);
   wait(500);
   move_stop(&seth, 8, 130, 1);
   wait(500);
   sp_active(&book, 0);
   move_stop(&seth, 2, 178, 1);
   wait(800);
   say_stop("`9Yes! This is it, The Bigerical Curse is mine!", &seth);
   wait(500);
   say_stop("`9Now where is it.. where is that spell", &seth);
   wait(500);
   say_stop("`9Ah! Yes, here it is", &seth);
   wait(200);
   sp_dir(&seth, 8);
   say_stop("`9Detterriless.. Riipsota.. Univoular..", &seth); 
   wait(300);

   playsound(24, 22052, 0, 0, 0);      
   &explo = create_sprite(78, 38, 7, 167, 1);
   sp_que(&explo, 1000);
   sp_seq(&explo, 167);

   &crack = create_sprite(78, 38, 0, 89, 3);
   sp_pseq(&crack, 89);
   sp_pframe(&crack, 3);
   sp_que(&crack, -1000);
   wait(550);

   playsound(24, 22052, 0, 0, 0);
   &explo = create_sprite(62, 196, 7, 167, 1);
   sp_que(&explo, 1000);
   sp_seq(&explo, 167);
   wait(250);

   playsound(24, 22052, 0, 0, 0);
   &explo = create_sprite(547, 42, 7, 167, 1);
   sp_seq(&explo, 167);
   
   &crack2 = create_sprite(62, 196, 0, 89, 8);
   sp_pseq(&crack2, 89);
   sp_pframe(&crack2, 8);
   sp_que(&crack2, -1000);
   wait(550);

   playsound(6, 22050, 0,0,0);  
   &blast = create_sprite(566, 344, 7, 161, 1);
   sp_que(&blast, 1000);
   sp_seq(&blast, 161);

   playsound(24, 22052, 0, 0, 0);  
   &explo = create_sprite(55, 342, 7, 167, 1);
   sp_seq(&explo, 167);
   wait(250);

   playsound(24, 22052, 0, 0, 0);
   &explo = create_sprite(553, 163, 7, 167, 1);
   sp_seq(&explo, 167);

   &crack3 = create_sprite(566, 344, 0, 89, 1);
   sp_pseq(&crack3, 89);
   sp_pframe(&crack3, 1); 
   sp_que(&crack3, -1000);   
   wait(600);

   playsound(24, 22052, 0, 0, 0);
   &explo = create_sprite(443, 235, 7, 167, 1);
   sp_seq(&explo, 167);
   wait(200);

   playsound(24, 22052, 0, 0, 0); 
   &explo = create_sprite(203, 235, 7, 167, 1);
   sp_seq(&explo, 167);
   wait(200);

   playsound(24, 22052, 0, 0, 0);
   &explo = create_sprite(122, 374, 7, 167, 1);
   sp_seq(&explo, 167);

   playsound(6, 22050, 0,0,0);
   &blast = create_sprite(519, 50, 7, 161, 1);
   sp_seq(&blast, 161);
   wait(450);

   playsound(24, 22052, 0, 0, 0);
   &explo = create_sprite(461, 379, 7, 167, 1);
   sp_seq(&explo, 167);
   wait(200);

   playsound(24, 22052, 0, 0, 0);   
   &explo = create_sprite(198, 379, 7, 167, 1);
   sp_seq(&explo, 167);
   wait(250);

   playsound(24, 22052, 0, 0, 0);
   &explo = create_sprite(60, 347, 7, 167, 1);
   sp_seq(&explo, 167);
   wait(200);

   playsound(24, 22052, 0, 0, 0);
   &explo = create_sprite(565, 347, 7, 167, 1);
   sp_seq(&explo, 167);
   wait(250);

   playsound(24, 22052, 0, 0, 0); 
   &explo = create_sprite(60, 258, 7, 167, 1);
   sp_seq(&explo, 167);
   wait(200);

   playsound(24, 22052, 0, 0, 0);
   &explo = create_sprite(565, 258, 7, 167, 1);
   sp_que(&explo, 1000);
   sp_seq(&explo, 167); 

   &crack4 = create_sprite(565, 258, 0, 89, 5);
   sp_pseq(&crack4, 89);
   sp_pframe(&crack4, 5);
   sp_que(&crack4, -1000);
   wait(250);

   playsound(24, 22052, 0, 0, 0);
   &explo = create_sprite(60, 169, 7, 167, 1);
   sp_seq(&explo, 167);   
   wait(150);

   playsound(24, 22052, 0, 0, 0);
   &explo = create_sprite(565, 169, 7, 167, 1);
   sp_seq(&explo, 167);
   wait(200);

   playsound(24, 22052, 0, 0, 0);
   &explo = create_sprite(60, 40, 7, 167, 1);
   sp_seq(&explo, 167);
 
   &explo = create_sprite(565, 40, 7, 167, 1);
   sp_seq(&explo, 167);
   wait(400);

   playsound(24, 22052, 0, 0, 0);
   &explo = create_sprite(264, 43, 7, 167, 1);
   sp_seq(&explo, 167);
  
   &explo = create_sprite(373, 43, 7, 167, 1);
   sp_seq(&explo, 167); 
   wait(50);

   &fakestat = create_sprite(264, 43, 7, 99, 1);
   sp_seq(&fakestat, 99);

   &fakestat = create_sprite(373, 43, 7, 99, 1);
   sp_seq(&fakestat, 99);
   sp_nodraw(&statue, 1);
   sp_nodraw(&statue2, 1);
   sp_active(&statue, 0);
   sp_active(&statue2, 0);
   wait(1500);

   sp_dir(&seth, 2);
   sp_dir(&wiz, 8);
   say_stop("`7Wait.. did you just cast the Deterrilis spell?", &wiz);
   wait(200);
   say_stop("`9Yes.. This world is going to be torn apart, and there's nothing that Dink Smallwood can do about it!", &seth);
   wait(200);
   say_stop("`9Come on, we have to get out of here..", &seth);
   move_stop(&seth, 2, 550, 1);
   move_stop(&wiz, 2, 480, 1);
   &intro = 1;

   fade_down();
   fill_screen(0); 
   sp_active(&statue, 0);
   sp_active(&statue2, 0);
   sp_active(&explo, 0);
   sp_active(&blast, 0);
   sp_active(&crack, 0);
   sp_active(&crack2, 0);
   sp_active(&crack3, 0);
   sp_active(&crack4, 0);
   sp_active(&seth, 0);
   sp_active(&book, 0);
   sp_active(&wiz, 0);
   sp_active(&fakestat, 0);

   script_attach(1000);
   load_tile("tiles\ts40.bmp", 40); 
   &player_map = 722;
   sp_x(1, 564);
   sp_y(1, 37);
   load_screen();
   draw_screen();
   draw_hard_map();
   kill_this_task();   
  }
 } 
 if (&player_map == 575)
 {
  if (&intro == 1)
  {
   freeze(1);   

   int &guy;
   int &tree;
   int &explo;
   int &crack;
   int &crack2;
   int &crack3;
   int &crack4;
   int &crack5;
   int &crack6;
   int &crack7;

   &tree = create_sprite(434, 373, 0, 32, 1);
   sp_hard(&tree, 0);
   draw_hard_sprite(&tree);
   
   &guy = create_sprite(-50, 363, 0, 419, 1);
   sp_base_walk(&guy, 410);
   sp_speed(&guy, 2);
   fade_up();

   wait(500);
   
   move(&guy, 6, 306, 1);
   wait(50);
   say("`6Nearly there..", &guy);
   move_stop(&guy, 6, 306, 1);
   sp_dir(&guy, 8);
   wait(200);
   sp_dir(&guy, 4);
   wait(200);
   sp_dir(&guy, 2);
   wait(200);
   sp_dir(&guy, 6);
   wait(100);
   say_stop("`6At least there's no monsters around here", &guy);
   wait(200);
   move_stop(&guy, 8, 216, 1);
   wait(100);

   playsound(51, 16000, 44, 0, 0);   
   wait(2000);

   &crack = create_sprite(101, 155, 0, 89, 4);
   sp_pseq(&crack, 89);
   sp_pframe(&crack, 4);
   sp_dir(&guy, 4);

   wait(1000);

   &crack2 = create_sprite(313, 253, 0, 89, 1);
   sp_pseq(&crack2, 89);
   sp_pframe(&crack2, 1);
   sp_dir(&guy, 2);

   move(&guy, 8, 193, 1);

   say("`6What the hell is going on?!", &guy);
   wait(1000);

   &crack3 = create_sprite(437, 98, 0, 89, 7);
   sp_pseq(&crack3, 89);
   sp_pframe(&crack3, 7);
   sp_dir(&guy, 6);
   wait(1500);
 
   sp_dir(&guy, 8);

   &crack5 = create_sprite(156, 353, 0, 89, 4);
   sp_pseq(&crack5, 89);
   sp_pframe(&crack5, 4);
   wait(1000);

   sp_dir(&guy, 2);

   &crack6 = create_sprite(574, 224, 0, 89, 2);
   sp_pseq(&crack6, 89);
   sp_pframe(&crack6, 2);  
   wait(1000);

   &crack7 = create_sprite(556, 38, 0, 89, 6);
   sp_pseq(&crack7, 89);
   sp_pframe(&crack7, 6);
   say("`6...Earthquake?", &guy); 
   sp_dir(&guy, 6);
   wait(500);
   sp_dir(&guy, 4);
   wait(500);
   sp_dir(&guy, 6);

   int &myy = sp_y(&guy, -1);
   &myy += 15;
   say("`6I'm outta here!", &guy);  
   move(&guy, 6, 446, 1);
   wait(850);

   &crack4 = create_sprite(461, &myy, 0, 89, 2);
   sp_pseq(&crack4, 89);
   sp_pframe(&crack4, 2);
   sp_que(&crack4, -1000);
   move_stop(&guy, 6, 446, 1);
   sp_nodraw(&guy, 1);
   sp_active(&guy, 0);
   playsound(52, 15000, 2000, 0, 0);
   wait(2000);
   
   fade_down();
   fill_screen(0); 
   sp_active(&guy, 0);
   sp_active(&tree, 0);
   sp_active(&explo, 0);
   sp_active(&crack, 0);
   sp_active(&crack2, 0);
   sp_active(&crack3, 0);
   sp_active(&crack4, 0);
   sp_active(&crack5, 0);
   sp_active(&crack6, 0);
   sp_active(&crack7, 0);

   kill_this_item("item-fst"); 
   add_item("item-fweap", 438, 23);
   add_magic("item-fb", 437, 1);
   add_magic("item-ice", 437, 5);
   &cur_weapon = 1;
   arm_weapon();
   &cur_magic = 1;
   arm_magic();
   sp_base_walk(1, 410);
   sp_base_idle(1, -1);
   init("load_sequence_now graphics\people\peasant2\die\death- 467 75 91 40 -64 -30 19 10");
   init("load_sequence_now graphics\people\peasant2\c11w3- 312 75 50 94 -20 -11 21 16");
   init("load_sequence_now graphics\people\peasant2\c11w3- 316 75 50 94 -20 -11 21 16");
   init("load_sequence_now graphics\people\peasant2\c11w7- 314 75 56 97 -21 -9 23 15");
   init("load_sequence_now graphics\people\peasant2\c11w7- 318 75 56 97 -21 -9 23 15");
   &sgchar = 1;

   script_attach(1000);
   
   &player_map = 353;
   load_screen();
   draw_screen();
   draw_hard_map();
   kill_this_task(); 
  }
 }
} 