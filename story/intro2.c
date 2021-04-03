//used for a range of different screens
void main(void)
{
 if (&player_map == 257)
 {
  if (&intro == 4)
  {
   if (&life < 1) return;
   freeze(1);
   int &rock = create_sprite(193, 237, 0, 95, 1);
   sp_pseq(&rock, 95);
   sp_pframe(&rock, 1);
   sp_speed(&rock, 1);
   sp_hard(&rock, 0);
   draw_hard_map();
   wait(1000);
   sp_dir(1, 4);
   move_stop(1, 8, 192, 1);
   move_stop(1, 4, 195, 1);
   move(1, 2, 207, 0);
   wait(450);
   move_stop(1, 2, 192, 1);
   move_stop(&rock, 2, 288, 1);
   draw_hard_map();
   wait(200);
   say_stop("`6That'll stop it.", 1);
   move_stop(1, 6, 300, 1);
   move_stop(1, 2, 262, 1);
   sp_dir(1, 6);
   say_stop("`6Now to find a way out of this place", 1);
   wait(200);
   &intro = 5;
   sp_script(&rock, "i-objects");
   &cur_weapon = 1;
   arm_weapon();
   unfreeze(1);
  }
  if (&intro == 5)
  {
   load_tile("tiles\ts40.bmp", 40);
   if (&sgchar == 1)
   {
    init("load_sequence_now graphics\people\peasant2\die\death- 467 75 91 40 -64 -30 19 10");
    init("load_sequence_now graphics\people\peasant2\c11w3- 312 75 50 94 -20 -11 21 16");
    init("load_sequence_now graphics\people\peasant2\c11w3- 316 75 50 94 -20 -11 21 16");
    init("load_sequence_now graphics\people\peasant2\c11w7- 314 75 56 97 -21 -9 23 15");
    init("load_sequence_now graphics\people\peasant2\c11w7- 318 75 56 97 -21 -9 23 15");
   }
   &vision = 1;
  }
 }
 if (&player_map == 293)
 {
  if (&intro == 5)
  {
   freeze(1);
   int &playx = sp_x(1, -1);
   int &playy = sp_y(1, -1);
   wait(100);
  
   if (&playx < 260) move_stop(1, 6, 260, 1);
   if (&playx > 260) move_stop(1, 4, 260, 1);
   move_stop(1, 2, 150, 1);

   playsound(51, 16000, 44, 0, 1);   
   wait(2000);

   int &crack = create_sprite(360, 95, 0, 89, 6);
   sp_pseq(&crack, 89);
   sp_pframe(&crack, 6);
   sp_que(&crack, -1000);
   
   sp_dir(1, 6);
   wait(1000);

   int &crack2 = create_sprite(369, 261, 0, 89, 1);
   sp_pseq(&crack2, 89);
   sp_pframe(&crack2, 1);
   sp_que(&crack2, -1000);
   sp_hard(&crack2, 0);

   say("`6Not this again!", 1);
   sp_dir(1, 2);
   wait(1500);

   int &crack3 = create_sprite(168, 194, 0, 89, 1);
   sp_pseq(&crack3, 89);
   sp_pframe(&crack3, 1);
   sp_que(&crack3, -1000);
   sp_hard(&crack3, 0);

   sp_dir(1, 8);
   move(1, 2, 199, 1);
   wait(1000);

   int &crack4 = create_sprite(76, 290, 0, 89, 5);
   sp_pseq(&crack4, 89);
   sp_pframe(&crack4, 5);
   sp_que(&crack4, -1000); 
   sp_dir(1, 4);

   int &crack5 = create_sprite(76, 290, 0, 89, 1);
   sp_nodraw(&crack5, 1);
   sp_pseq(&crack5, 89);
   sp_pframe(&crack5, 1);
   sp_hard(&crack5, 0);
   int &crack6 = create_sprite(360, 95, 0, 89, 2);
   sp_nodraw(&crack6, 1);
   sp_pseq(&crack6, 89);
   sp_pframe(&crack6, 2);
   sp_hard(&crack6, 0); 

   draw_hard_map(); 
   wait(1500);

   kill_all_sounds();
   &intro = 6;
   say("`6I better hurry", 1);
   int &blockw = create_sprite(264, 10, 0, 64, 8);
   sp_pseq(&blockw, 64);
   sp_pframe(&blockw, 8);
   sp_nohit(&blockw, 1);
   sp_script(&blockw, "blocks");
   unfreeze(1);
   kill_this_task();
   return;
  }
  if (&intro > 5)
  {
   &vision = 1;
   int &blockw = create_sprite(264, 10, 0, 64, 8);
   sp_pseq(&blockw, 64);
   sp_pframe(&blockw, 8);
   sp_script(&blockw, "blocks");
  }
 }
 if (&player_map == 292)
 {
  &vision = 1;
  &char = 1;
  &stormy = 0;
 } 
 if (&player_map == 733)
 {
  if (&intro == 6)
  {
   freeze(1);
   stopmidi();
   turn_midi_off();
   wait(500);
   move_stop(1, 6, 306, 1);
   say_stop("`6Finally, fresh air.", 1);
   wait(500);
   sp_dir(1, 8);
   say_stop("`6Hey, I'm in Stonebrook!", 1);
   sp_dir(1, 6);
   say_stop("`6Oh yeh, I've got to tell Dink Smallwood about the attack.", 1);
   init("load_sequence_now graphics\people\gnome\green\c13w1- 581 75 29 55 -15 -7 17 17");
   init("load_sequence_now graphics\people\gnome\green\c13w3- 583 75 31 57 -19 -12 18 12");
   init("load_sequence_now graphics\people\gnome\green\death- 585 1 36 37 -1 -2 -1 -2");
   init("load_sequence_now graphics\people\gnome\green\c13w7- 587 75 30 57 -16 -9 16 10");
   init("load_sequence_now graphics\people\gnome\green\c13w9- 589 75 28 54 -17 -10 17 13");
   wait(350);
   move_stop(1, 2, 450, 1);
  }
  if (&intro == 7)
  {
   freeze(1);
   int &dinkm = create_sprite(243, 304, 6, 12, 1);
   sp_brain(&dinkm, 6);
   sp_seq(&dinkm, 12);
   sp_dir(1, 2);
   wait(500);
   move_stop(1, 8, 360, 1);
   say_stop("What the hell is going on?!", &dinkm);
   wait(200);
   say_stop("`6I'm not exactly sure, it's very strange that this....", 1);
   playsound(51, 16000, 44, 0, 1); 
   wait(700);
   say("It's happening again!", &dinkm);
   wait(300);

   int &crack = create_sprite(510, 381, 0, 89, 1);
   sp_pseq(&crack, 89);
   sp_pframe(&crack, 1);
   sp_que(&crack, -1000);
   sp_hard(&crack, 0);
   wait(50);
   sp_dir(1, 6);
   sp_seq(&dinkm, 16);
   wait(400);

   int &crack2 = create_sprite(380, 156, 0, 89, 1);
   sp_pseq(&crack2, 89);
   sp_pframe(&crack2, 1);
   sp_que(&crack2, -1000);
   sp_hard(&crack2, 0);
   wait(50);
   sp_dir(1, 8);
   sp_seq(&dinkm, 18);
   wait(200);

   playsound(6, 22050, 0,0,0);
   int &blast = create_sprite(79, 252, 7, 161, 1);
   sp_que(&blast, 1000);
   sp_seq(&blast, 161);

   int &crack3 = create_sprite(79, 252, 0, 89, 1);
   sp_pseq(&crack3, 89);
   sp_pframe(&crack3, 1);
   sp_que(&crack3, -1000);
   sp_hard(&crack3, 0);
   wait(50);
   sp_dir(1, 4);
   sp_seq(&dinkm, 14);

   playsound(24, 22052, 0, 0, 0);  
   int &explo = create_sprite(229, 31, 7, 167, 1);
   sp_seq(&explo, 167);

   sp_seq(&dinkm, 12);
   say_stop("What the hell is happening?!", &dinkm);
   say_stop("This earthquake is huge! And the delay between them is getting shorter!", &dinkm);
   wait(200);
   kill_all_sounds();
   say_stop("`6We have to visit Martridge. He lives to the...", 1);
   wait(200);
   say_stop("I know where he lives!", &dinkm);
   wait(200);
   say_stop("`6Well, he might know what's causing all this havoc... Let's go.", 1);
   sp_brain(&dinkm, 0);
   sp_base_walk(&dinkm, 70);
   sp_speed(&dinkm, 2);
   move(1, 6, 436, 1);
   move_stop(&dinkm, 6, 436, 1);
   move(&dinkm, 8, -50, 1);
   wait(600);
   move_stop(1, 8, -50, 1);
  }
  if (&intro >= 8)
  {
   &vision = 1;
  }
 }
 if (&player_map == 765)
 {
  if (&intro == 6)
  {
   freeze(1);
   int &dinkm = create_sprite(181, 116, 6, 16, 1);
   sp_brain(&dinkm, 6);
   sp_seq(&dinkm, 16);

   int &ethel = create_sprite(487, 130, 0, 231, 1);
   sp_base_walk(&ethel, 230);
   sp_speed(&ethel, 1);
   sp_brain(&ethel, 0);
   playmidi("5.mid");
   wait(200);
   say("`6Dink!", 1);
   move_stop(1, 2, 50, 1);
   wait(350);
   say_stop("`6Whoa, what happened here?", 1);
   wait(200);
   say_stop("`3There was some huge earthquakes, and the ground under Mr. SmileStein's house just collapsed!", &ethel);
   wait(200);
   move(1, 2, 60, 1);
   say_stop("`6Dink, the monsters are attacking Goodheart caslte", 1);
   move_stop(1, 2, 60, 1);
   sp_dir(1, 4);
   wait(200);
   say_stop("What monsters?  ... Hey, wait a minute. Don't I know you?", &dinkm);
   wait(200);
   say_stop("`6Some monsters reappeared, it started in KernSin and they pushed up to Goodheart.", 1);
   say_stop("`6The only place they haven't reached yet is Stonebrook", 1);
   say_stop("`6I think the earthquakes are somehow connected to the appearance of the monsters.", 1);
   say_Stop("`6But I'm not sure", 1);
   wait(200);
   say_stop(".....", &dinkm);
   say_stop("I swear I know you from somewhere", &dinkm);
   wait(200);
   say_stop("`6You do know me, my name is Stormclawd. We have met before", 1);
   wait(200);
   say_stop("Stormclawd.... nope, doesn't sound familiar, and what a strange name", &dinkm);
   wait(200);
   say_stop("`6I never told you who I was.... I am the one that taught you acid rain", 1);
   say_stop("`6I live to the south of the Terris bar", 1);
   wait(200);
   say_stop("Oh yeh, I remember now. Your that strange, deaf, senile guy that always forgets my name.", &dinkm);
   wait(200);
   say_stop("`6I am not senile, I act that way on purpose so I don't have to deal with strangers", 1);

   playsound(51, 16000, 44, 0, 1);   
   wait(700);
   say_stop("Another earthquake!", &dinkm);
   wait(100);
   sp_brain(&dinkm, 0);
   sp_base_walk(&dinkm, 70);
   sp_speed(&dinkm, 2);

   move(&dinkm, 8, 80, 1);
   wait(130);
   int &crack = create_sprite(181, 125, 0, 89, 1);
   sp_pseq(&crack, 89);
   sp_pframe(&crack, 1);
   sp_que(&crack, -1000);
   sp_hard(&crack, 0);
   move_stop(&dinkm, 8, 80, 1);
   sp_brain(&dinkm, 6);
   sp_seq(&dinkm, 16);
   wait(1000);
  
   say("`3Let's go!", &ethel);
   move(&ethel, 8, 36, 1);
   wait(400);
   int &crack2 = create_sprite(487, 110, 0, 89, 1);
   sp_pseq(&crack2, 89);
   sp_pframe(&crack2, 1);
   sp_que(&crack2, -1000);
   sp_hard(&crack2, 0); 
   sp_nodraw(&ethel, 1);
   playsound(50, 16000, 0, 0, 0);
   sp_dir(1, 6);

   say("I'm outta here!", &dinkm);
   sp_brain(&dinkm, 0);
   sp_base_walk(&dinkm, 70);
   sp_speed(&dinkm, 2);  
   move(&dinkm, 8, -50, 1);
   wait(350);
   say("`6Dink, wait....", 1);
   wait(400);
   sp_active(&ethel, 0);
   move_stop(1, 4, 262, 1);
 
   int &crack3 = create_sprite(306, 40, 0, 89, 2);
   sp_pseq(&crack3, 89);
   sp_pframe(&crack3, 2);
   sp_que(&crack3, -1000);
   sp_hard(&crack3, 0); 
   sp_dir(1, 6);
   &intro = 7;
   wait(550);
   move_stop(1, 4, 258, 1);
   move_stop(1, 8, -50, 1);
  }
  if (&intro >= 8)
  {
   &vision = 1;
  }
 }
 if (&player_map == 701)
 {
  &vision = 1;
  if (&intro == 7)
  {
   freeze(1);
   int &dinkm = create_sprite(465, 346, 0, 76, 1);
   sp_base_walk(&dinkm, 70);
   sp_speed(&dinkm, 2);
   move(1, 8, 346, 1);
   move(&dinkm, 6, 650, 1);
   move_stop(1, 8, 346, 1);
   wait(100);
   move_stop(1, 6, 650, 1);
  }
  if (&intro >= 8)
  {
   if (&story == 2)
   {
    freeze(1);
    int &slay = create_sprite(285, -50, 0, 632, 1);
    sp_base_walk(&slay, 640);
    sp_speed(&slay, 2);
    int &slay2 = create_sprite(315, -50, 0, 632, 1);
    sp_base_walk(&slay2, 640);
    sp_speed(&slay2, 2);
    int &slay3 = create_sprite(355, -50, 0, 632, 1);
    sp_base_walk(&slay3, 640);
    sp_speed(&slay3, 2);
    move(&slay, 2, 170, 1);
    move(&slay2, 2, 170, 1);
    move_stop(&slay3, 2, 170, 1);
    sp_script(&slay, "l1-nboss");
    sp_script(&slay2, "l1-nboss");  
    sp_script(&slay3, "l1-nboss");
    say("Ah, man! Where are all these slayers coming from?", 1);
    &story = 3;
    unfreeze(1);
   }
   if (&stormy == 1)
   { 
    int &mnum;
    int &mseq;
    int &kni = get_sprite_with_this_brain(20, 0);
    
    &mnum = sp_editor_num(&kni);
    editor_tpye(&mnum, 0);
    &mseq = editor_seq(&mnum, -1);
     
    if (&mseq == 0)
    {
     &kni = create_sprite(50, 343, 0, 287, 1);
     sp_base_walk(&kni, 280);
     sp_speed(&kni, 3);
     sp_timing(&kni, 33);
     sp_brain(&kni, 16);
     sp_script(&kni, "l1-knightp2"); 
     return;
    }
   }
  }
 }
 if (&player_map == 702)
 { 
  &vision = 1;
  if (&intro == 7)
  {
   freeze(1);
   int &dinkm = create_sprite(30, 346, 0, 76, 1);
   sp_base_walk(&dinkm, 70);
   sp_speed(&dinkm, 2);
   move(1, 6, 45, 1);
   move(&dinkm, 6, 362, 1);
   wait(1200);
   move_stop(1, 6, 316, 1);
   move(&dinkm, 2, 387, 1);
   wait(300);
   move_stop(1, 6, 362, 1);
   move(&dinkm, 6, 650, 1);
   move_stop(1, 6, 362, 1);
   move_stop(1, 2, 387, 1);
   move_stop(1, 6, 650, 1);
  }
 }
 if (&player_map == 700)
 {
  if (&sgchar == 1)
  {
   &vision = 2;
  }
  if (&knight > 3)
  {
   &vision = 2;
  }
  if (&stormy == 1)
  {
   int &dinkm = create_sprite(143, 243, 0, 76, 1);
   sp_base_walk(&dinkm, 70);
   sp_speed(&dinkm, 2);
   sp_timing(&dinkm, 33);
   sp_brain(&dinkm, 16);
   sp_script(&dinkm, "l1-dinkm");
   wait(800);
   say("How's it going, Storm?", &dinkm);
  }
 }
 if (&player_map == 669)
 {
  if (&intro >= 8)
  {
   if (&story == 1)
   {
    if (&guy == 0)
    { 
     &guy = 1;
     spawn("l1-timer2");
     int &guy = create_sprite(363, 239, 0, 377, 1);
     sp_base_walk(&guy, 370);
     sp_speed(&guy, 3);
     int &slay = create_sprite(363, 356, 0, 647, 1);
     sp_base_walk(&slay, 640);
     sp_speed(&slay, 3);
     say("`2HELP ME!", &guy);
     move(&guy, 8, -80, 1);
     move_stop(&slay, 8, -80, 1);
    }
   }
  }
 }
 if (&vision == 0)
 {
  &vision = 1;
 }
}