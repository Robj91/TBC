//All 'icave-fc' scripts are sprites placed at exit of each intro cave screen, for the purpose
//of calling some scripts that check the difference between storm and the slayers position
//in preperation of the next screen, and pushing the player forward

//All 'i-c1' scripts, are the scripts attached to the intro cave slayer

//All 'i-cf' scripts are sprites placed at the entrance of each intro cave screen, for the purpose
//of blocking him from going back
void main(void)
{
 if (&player_map == 353)
 {
  //this is the only screen where this script is attached to a sprite instead of the screen
  sp_nodraw(&current_sprite, 1);
  sp_nohit(&current_sprite, 1);
 
  if (&intro == 1)
  {
   //Load the normal tiles
   &life = 10;
   load_tile("tiles\ts40.bmp", 40);
   freeze(1);
   if (&sgchar == 1)
   { 
    //we're playing as storm, so let's load his death sequence
    //And load his walk sequence into the push sequence
    init("load_sequence_now graphics\people\peasant2\die\death- 467 75 91 40 -64 -30 19 10");
    init("load_sequence_now graphics\people\peasant2\c11w3- 312 75 50 94 -20 -11 21 16");
    init("load_sequence_now graphics\people\peasant2\c11w3- 316 75 50 94 -20 -11 21 16");
    init("load_sequence_now graphics\people\peasant2\c11w7- 314 75 56 97 -21 -9 23 15");
    init("load_sequence_now graphics\people\peasant2\c11w7- 318 75 56 97 -21 -9 23 15");
   }
   int &rock;
   int &rock2;
   int &rock3;
   int &rock4;
   int &fence;
   int &slayer;
   int &text;

   //set storm's position and make him visible
   sp_dir(1, 6);
   sp_x(1, 500);
   sp_y(1, 217);
   sp_nodraw(1, 0); 

   //Block furthest left passage that rock falls in front of
   &fence = create_sprite(71, 245, 0, 93, 4);
   sp_nodraw(&fence, 1);
   sp_pseq(&fence, 93);
   sp_pframe(&fence, 4);
   sp_hard(&fence, 0);
   draw_hard_sprite(&fence);

   //Fade up
   fade_up();
   wait(500);

   sp_dir(1, 4);

   //check if the intro for this screen needs to play fully again (if it's already played through once)
   &rock = sp_editor_num(&current_sprite);
   editor_type(&rock, 0);
   &rock = editor_seq(&rock, -1);
   
   if (&rock <= 0)
   {
    //first time playing

    //Make the rocks fall down
    &rock = create_sprite(155, -80, 0, 95, 4);
    sp_pseq(&rock, 95);
    sp_pframe(&rock, 4);
    sp_speed(&rock, 3);
    sp_que(&rock, 1000);
 
    &rock2 = create_sprite(538, -80, 0, 95, 2);
    sp_pseq(&rock2, 95);
    sp_pframe(&rock2, 2);
    sp_speed(&rock2, 3);
    sp_que(&rock2, 1000);
  
    &rock3 = create_sprite(450, -80, 0, 95, 9);
    sp_pseq(&rock3, 95);
    sp_pframe(&rock3, 9);
    sp_speed(&rock3, 3);
    sp_que(&rock3, 1000);
  
    &rock4 = create_sprite(31, -80, 0, 95, 7);
    sp_pseq(&rock4, 95);
    sp_pframe(&rock4, 7);
    sp_speed(&rock4, 3);
    sp_que(&rock4, 1000);
 
    move(&rock, 2, 316, 1);
    move(&rock2, 2, 137, 1);
    move(&rock4, 2, 250, 1);
    move_stop(&rock3, 2, 108, 1);
    move_stop(&rock, 2, 316, 1);
    move_stop(&rock2, 2, 137, 1);
    move_stop(&rock4, 2, 250, 1);
    sp_hard(&rock, 0);
    sp_hard(&rock2, 0);
    sp_hard(&rock3, 0);
    sp_hard(&rock4, 0);
    sp_que(&rock, 0);
    sp_que(&rock2, 0);
    sp_que(&rock3, 0);
    sp_que(&rock4, 0);
    draw_hard_map();
    sp_script(&rock, "i-objects");
    sp_script(&rock2, "i-objects");
    sp_script(&rock3, "i-objects");
    sp_script(&fence, "i-objects");

    //change editor seq so we can detect intro already played once on next load
    &rock = sp_editor_num(&current_sprite);
    editor_seq(&rock, 1);
 
    //Let the player save the game
    //They don't want to watch the whole intro again if they die
          choice_start();
         title_start();
         You can now save your game.
         title_end();
         "Save your game"
         choice_end();
 
         choice_start();
         "&savegameinfo"
         "&savegameinfo"
         "&savegameinfo"
         "&savegameinfo" 
         "&savegameinfo" 
         "&savegameinfo" 
         "&savegameinfo" 
         "&savegameinfo" 
         "&savegameinfo" 
         "&savegameinfo" 
         choice_end();
 
 
   if (&result < 11)
   {
    save_game(&result);
    say_xy("`%Game saved", 1, 30);
   }
 
    say_stop("`6Whoa, I'm in an underground cave", 1);
    wait(1000);
  }
  else
  {
   //Not the first time playing through - create the rocks in position.
    &rock = create_sprite(155, -80, 0, 95, 4);
    sp_pseq(&rock, 95);
    sp_pframe(&rock, 4);
    sp_speed(&rock, 3);
    sp_que(&rock, 1000);
 
    &rock2 = create_sprite(538, -80, 0, 95, 2);
    sp_pseq(&rock2, 95);
    sp_pframe(&rock2, 2);
    sp_speed(&rock2, 3);
    sp_que(&rock2, 1000);
  
    &rock3 = create_sprite(450, -80, 0, 95, 9);
    sp_pseq(&rock3, 95);
    sp_pframe(&rock3, 9);
    sp_speed(&rock3, 3);
    sp_que(&rock3, 1000);
  
    &rock4 = create_sprite(31, -80, 0, 95, 7);
    sp_pseq(&rock4, 95);
    sp_pframe(&rock4, 7);
    sp_speed(&rock4, 3);
    sp_que(&rock4, 1000);
  }
  
   //create the slayer
   &slayer = create_sprite(249, -80, 0, 649, 1);
   sp_base_walk(&slayer, 640);
   sp_speed(&slayer, 2);

   playmidi("3.mid");
   wait(100);

   //move him on the screen
   move_stop(&slayer, 2, 205, 1); 
   move_stop(&slayer, 6, 320, 1);
   say_stop("`6Oh no, a slayer!!", 1);
   say_stop("`6and I'm out of mana. There's no way I'm strong enough to beat a slayer without magic.", 1);
   sp_dir(1, 6);
   say_stop("`6There's only one thing I can do", 1);
   say_stop("`6RUN!.... and find a way out of here", 1);
  
   wait(500);
   playsound(22, 22050, 0,0,0);  
   &update_status = 1; 
   draw_status();
   wait(500);

   int &checkf = create_sprite(610, 197, 0, 64, 9);
   sp_pseq(&checkf, 64);
   sp_pframe(&checkf, 9);
   sp_script(&checkf, "i-cavefc");

   //Create the flashing 'RUN!' text
   &text = create_sprite(352, 216, 0, 464, 1);
   sp_que(&text, 1000);
   sp_size(&text, 10);
   sp_pseq(&text, 464);
   sp_pframe(&text, 2);

   wait(100);
   sp_size(&text, 30);
   wait(100);
   sp_size(&text, 50);
   wait(100);
   sp_size(&text, 70);
   wait(100);
   sp_size(&text, 90);
   wait(100);
   sp_size(&text, 110);
   wait(100);
   sp_size(&text, 130);
   wait(100);
   sp_size(&text, 150);
   wait(100);
   sp_size(&text, 170);
   wait(100);
   sp_size(&text, 190);
   wait(50);
   sp_size(&text, 200);
   int &flasht = 0;

   flashtt:
   wait(50);
   sp_pframe(&text, 1);
   wait(50);
   sp_pframe(&text, 2);
   &flasht += 1;  
   if (&flasht < 10) goto flashtt;
  
   wait(50);
   sp_size(&text, 190);
   wait(100);
   sp_size(&text, 170);
   wait(100);
   sp_size(&text, 150);
   wait(100);
   sp_size(&text, 130);
   wait(100);
   sp_size(&text, 110);
   wait(100);
   sp_size(&text, 90);
   wait(100);
   sp_size(&text, 70);
   wait(100);
   sp_size(&text, 50);
   wait(100);
   sp_size(&text, 30);
   wait(100);
   sp_size(&text, 10);
   wait(50);
   sp_nodraw(&text, 1);
   sp_active(&text, 0);

   //change the intro variable, unfreeze Storm and attach the slayers script
   &intro = 2;
   unfreeze(1);
   sp_script(&slayer, "i-c1");
   kill_this_task();
  }
  if (&intro >= 2)
  {
   //second time where entering this first cave screen
   &vision = 1;

   //freeze storm and make him move a certain way
   //depending on his position
   freeze(1);
   int &myposx = sp_x(1, -1);
   int &myposy = sp_y(1, -1);
   
   if (&myposx > 412) 
   {
    move_stop(1, 4, 412, 1);
   }
   if (&myposx < 412) 
   {
    move_stop(1, 6, 412, 1);
   }
   if (&myposy > 213) 
   {
    move_stop(1, 8, 213, 1);
   }
   if (&myposy < 213) 
   {
    move_stop(1, 2, 213, 1);
   }

   say_stop("`6Hmmm.. back to where I started", 1);
   move_stop(1, 4, 241, 1);
   say_stop("`6Well, only two ways I can go now", 1);
   wait(350);
   sp_dir(1, 2);
   say_stop("`6That way..", 1);
   wait(200);
   sp_dir(1, 8);
   say_stop("`6Or that way..", 1);
   say_stop("`6Hmmmm... which way", 1);
  
   //create the slayer, attach its script and unfreeze storm
   int &slayer = create_sprite(620, 212, 0, 649, 1);
   sp_base_walk(&slayer, 640);
   sp_speed(&slayer, 2);
   sp_script(&slayer, "i-c1");   
   sp_dir(1, 6);
   unfreeze(1);

   int &fence = create_sprite(611, 230, 0, 64, 9);
   sp_pseq(&fence, 64);
   sp_pframe(&fence, 9);
   sp_script(&fence, "i-cf");

   int &fence2 = create_sprite(238, 393, 0, 64, 8);
   sp_pseq(&fence2, 64);
   sp_pframe(&fence2, 8);
   sp_script(&fence2, "i-cavefc");
  }
 }
 if (&player_map == 354)
 {
  if (&life < 1) return;

  if (&intro >= 2)
  {
   freeze(1);
   wait(100);

   int &myposx = sp_x(1, -1);
   int &myposy = sp_y(1, -1);

   if (&myposx < 50)
   {
    move_stop(1, 6, 50, 1);

    int &fence = create_sprite(30, 217, 0, 64, 9);
    sp_pseq(&fence, 64);
    sp_pframe(&fence, 9);
    sp_script(&fence, "i-cf");

    int &fence2 = create_sprite(611, 132, 0, 64, 9);
    sp_pseq(&fence2, 64);
    sp_pframe(&fence2, 9);
    sp_script(&fence2, "i-cavefc");

    int &fence3 = create_sprite(504, 10, 0, 64, 8);
    sp_pseq(&fence3, 64);
    sp_pframe(&fence3, 8);
    sp_script(&fence3, "i-cavefc");
    unfreeze(1);

    //The following is used to create the slayer in the correct position
    //and is used throughout this script, but only commented here

    //store storms x position
    int &sposx = &myposx;

    if (&sgchar == 0) 
    {
     //As set by another script, we now know storm is travelling east
     //So we'll create the slayer behind him, to the west, with the difference
     //in distance, as figured out in the previous screen
     &sposx -= &temphold;
    }

    if (&sgchar == 1) 
    {
     //As set by another script, we now know storm is travelling west
     //So we'll create the slayer behind him, to the east, with the difference
     //in distance, as figured out in the previous screen
     &sposx += &temphold; 
    }

    //store storms y position
    int &sposy = &stormy;

    //Make sure the slayer is created within the hardness boundaries
    if (&sposy < 90) 
    {
     &sposy = 90;
    }
 
    if (&sposy > 348) 
    {
     &sposy = 348;
    }

    int &slayer = create_sprite(&sposx, &sposy, 0, 649, 1);
    sp_base_walk(&slayer, 640);
    sp_speed(&slayer, 3);
    sp_script(&slayer, "i-c1");
   }
   if (&myposx > 585)
   {
    move_stop(1, 4, 585, 1);
  
    int &fence = create_sprite(612, 143, 0, 64, 9);
    sp_pseq(&fence, 64);
    sp_pframe(&fence, 9);
    sp_script(&fence, "i-cf");

    int &fence2 = create_sprite(490, 10, 0, 64, 8);
    sp_pseq(&fence2, 64);
    sp_pframe(&fence2, 8);
    sp_script(&fence2, "i-cavefc");

    int &fence3 = create_sprite(28, 223, 0, 64, 9);
    sp_pseq(&fence3, 64);
    sp_pframe(&fence3, 9);
    sp_script(&fence3, "i-cavefc");
    unfreeze(1); 

    int &sposx = &myposx;

    if (&sgchar == 0) 
    {
     &sposx -= &temphold;
    }

    if (&sgchar == 1) 
    {
     &sposx += &temphold; 
    }

    int &sposy = &stormy;

    if (&sposy < 95) 
    {
     &sposy = 95;
    }
 
    if (&sposy > 155) 
    {
     &sposy = 155;
    }

    int &slayer = create_sprite(&sposx, &sposy, 0, 649, 1);
    sp_base_walk(&slayer, 640);
    sp_speed(&slayer, 2);
    sp_script(&slayer, "i-c1");
   }
   if (&myposy < 70)
   {
    move_stop(1, 2, 70, 1);

    int &fence = create_sprite(493, 45, 0, 64, 8);
    sp_pseq(&fence, 64);
    sp_pframe(&fence, 8);
    sp_script(&fence, "i-cf");

    int &fence2 = create_sprite(28, 207, 0, 64, 9);
    sp_pseq(&fence2, 64);
    sp_pframe(&fence2, 9);
    sp_script(&fence2, "i-cavefc");

    int &fence3 = create_sprite(611, 132, 0, 64, 9);
    sp_pseq(&fence3, 64);
    sp_pframe(&fence3, 9);
    sp_script(&fence3, "i-cavefc");
    unfreeze(1);

    //We are entering this screen north or southwards
    //so we get the difference in y position instead
    int &sposy = &myposy;

    if (&sgchar == 0) 
    {
     &sposy -= &temphold;
    }

    if (&sgchar == 1) 
    {
     &sposy += &temphold; 
    }
 
    int &sposx = &stormy;

    if (&sposx > 527)
    { 
     &sposx = 527; 
    }
     
    if (&sposx < 510)
    { 
     &sposx = 510;
    } 

    int &slayer = create_sprite(&sposx, &sposy, 0, 649, 1);
    sp_base_walk(&slayer, 640);
    sp_speed(&slayer, 2);
    sp_script(&slayer, "i-c1");
  
   }      
  }
 }
 if (&player_map == 355)
 {
  if (&life < 1) return;

  if (&intro >= 2)
  {
   freeze(1);
   wait(100);

   int &myposx = sp_x(1, -1);
   int &myposy = sp_y(1, -1);

   if (&myposx < 50)
   {
    move_stop(1, 6, 50, 1);
  
    int &fence = create_sprite(29, 133, 0, 64, 9);
    sp_pseq(&fence, 64);
    sp_pframe(&fence, 9);
    sp_script(&fence, "i-cf");

    int &fence2 = create_sprite(362, 10, 0, 64, 8);
    sp_pseq(&fence2, 64);
    sp_pframe(&fence2, 8);
    sp_script(&fence2, "i-cavefc");

    unfreeze(1);

    int &sposx = &myposx;

    if (&sgchar == 0) 
    {
     &sposx -= &temphold;
    }

    if (&sgchar == 1) 
    {
     &sposx += &temphold; 
    }

    int &sposy = &stormy;

    if (&sposy < 90) 
    {
     &sposy = 90;
    }

    if (&sposy > 143)
    { 
     &sposy = 143;
    }

    int &slayer = create_sprite(&sposx, &sposy, 0, 649, 1);
    sp_base_walk(&slayer, 640);
    sp_speed(&slayer, 2);
    sp_script(&slayer, "i-c1");
   }
   if (&myposy < 25)
   {
    move_stop(1, 2, 25, 1);

    int &fence = create_sprite(362, 9, 0, 64, 8);
    sp_pseq(&fence, 64);
    sp_pframe(&fence, 8);
    sp_script(&fence, "i-cf");

    int &fence2 = create_sprite(28, 131, 0, 64, 9);
    sp_pseq(&fence2, 64);
    sp_pframe(&fence2, 9);
    sp_script(&fence2, "i-cavefc");
    unfreeze(1);

    int &sposy = &myposy;

    if (&sgchar == 0) 
    {
     &sposy -= &temphold;
    }

    if (&sgchar == 1) 
    {
     &sposy += &temphold; 
    }
 
    int &sposx = &stormy;

    if (&sposx > 520)
    { 
     &sposx = 520; 
    }
     
    if (&sposx < 210)
    { 
     &sposx = 210;
    } 

    int &slayer = create_sprite(&sposx, &sposy, 0, 649, 1);
    sp_base_walk(&slayer, 640);
    sp_speed(&slayer, 2);
    sp_script(&slayer, "i-c1");  
   } 
  }
 }
 if (&player_map == 323)
 {
  if (&life < 1) return;

  if (&intro >= 2)
  {
   freeze(1);
   wait(100);

   int &myposx = sp_x(1, -1);
   int &myposy = sp_y(1, -1);   

   if (&myposy > 365)
   {
    move_stop(1, 8, 365, 1);

    int &fence = create_sprite(365, 393, 0, 64, 8);
    sp_pseq(&fence, 64);
    sp_pframe(&fence, 8);
    sp_script(&fence, "i-cf");

    int &fence2 = create_sprite(283, 10, 0, 64, 8);
    sp_pseq(&fence2, 64);
    sp_pframe(&fence2, 8);
    sp_script(&fence2, "i-cavefc");
    unfreeze(1);

    int &sposy = &myposy;

    if (&sgchar == 0) 
    {
     &sposy -= &temphold;
    }

    if (&sgchar == 1) 
    {
     &sposy += &temphold; 
    }
 
    int &sposx = &stormy;

    if (&sposx > 520)
    { 
     &sposx = 520; 
    }
     
    if (&sposx < 215)
    { 
     &sposx = 215;
    }

    int &slayer = create_sprite(&sposx, &sposy, 0, 649, 1);
    sp_base_walk(&slayer, 640);
    sp_speed(&slayer, 2);
    sp_script(&slayer, "i-c1"); 
   }
   if (&myposy < 25)
   {
    move_stop(1, 2, 25, 1);
    
    int &fence = create_sprite(280, 10, 0, 64, 8);
    sp_pseq(&fence, 64);
    sp_pframe(&fence, 8);
    sp_script(&fence, "i-cf");

    int &fence2 = create_sprite(366, 393, 0, 64, 8);
    sp_pseq(&fence2, 64);
    sp_pframe(&fence2, 8);
    sp_script(&fence2, "i-cavefc");
    unfreeze(1); 

    int &sposy = &myposy;

    if (&sgchar == 0) 
    {
     &sposy -= &temphold;
    }

    if (&sgchar == 1) 
    {
     &sposy += &temphold; 
    }
 
    int &sposx = &stormy;

    if (&sposx > 320)
    { 
     &sposx = 320; 
    }
     
    if (&sposx < 265)
    { 
     &sposx = 265;
    } 

    int &slayer = create_sprite(&sposx, &sposy, 0, 649, 1);
    sp_base_walk(&slayer, 640);
    sp_speed(&slayer, 2);
    sp_script(&slayer, "i-c1");   
   } 
  }
 }
 if (&player_map == 291)
 {
  if (&life < 1) return;

  if (&intro >= 2)
  {
   freeze(1);
   wait(100);

   int &myposx = sp_x(1, -1);
   int &myposy = sp_y(1, -1); 
   
   if (&myposy > 370)
   {
    move_stop(1, 8, 370, 1);
    
    int &fence = create_sprite(274, 393, 0, 64, 8);
    sp_pseq(&fence, 64);
    sp_pframe(&fence, 8);
    sp_script(&fence, "i-cf");

    int &fence2 = create_sprite(28, 153, 0, 64, 9);
    sp_pseq(&fence2, 64);
    sp_pframe(&fence2, 9);
    sp_script(&fence2, "i-cavefc");
    unfreeze(1);

    int &sposy = &myposy;

    if (&sgchar == 0) 
    {
     &sposy -= &temphold;
    }

    if (&sgchar == 1) 
    {
     &sposy += &temphold; 
    }
 
    int &sposx = &stormy;

    if (&sposx > 320)
    { 
     &sposx = 320; 
    }
     
    if (&sposx < 265)
    { 
     &sposx = 265;
    } 

    int &slayer = create_sprite(&sposx, &sposy, 0, 649, 1);
    sp_base_walk(&slayer, 640);
    sp_speed(&slayer, 2);
    sp_script(&slayer, "i-c1");
   }
   if (&myposx < 45)
   {
    move_stop(1, 6, 45, 1);
 
    int &fence = create_sprite(28, 141, 0, 64, 9);
    sp_pseq(&fence, 64);
    sp_pframe(&fence, 9);
    sp_script(&fence, "i-cf");

    int &fence2 = create_sprite(292, 393, 0, 64, 8);
    sp_pseq(&fence2, 64);
    sp_pframe(&fence2, 8);
    sp_script(&fence2, "i-cavefc");
    unfreeze(1);

    int &sposx = &myposx;

    if (&sgchar == 0) 
    {
     &sposx -= &temphold;
    }

    if (&sgchar == 1) 
    {
     &sposx += &temphold; 
    }

    int &sposy = &stormy;

    if (&sposy < 45) 
    {
     &sposy = 45;
    }
 
    if (&sposy > 245) 
    {
     &sposy = 245;
    }

    int &slayer = create_sprite(&sposx, &sposy, 0, 649, 1);
    sp_base_walk(&slayer, 640);
    sp_speed(&slayer, 2);
    sp_script(&slayer, "i-c1");
   }
  }
 }  
 if (&player_map == 290)
 {
  if (&life < 1) return;

  if (&intro >= 2)
  {
   freeze(1);
   wait(100);

   int &myposx = sp_x(1, -1);
   int &myposy = sp_y(1, -1); 
   
   if (&myposx > 590)
   {
    move_stop(1, 4, 590, 1);
  
    int &fence = create_sprite(611, 157, 0, 64, 9);
    sp_pseq(&fence, 64);
    sp_pframe(&fence, 9);
    sp_script(&fence, "i-cf");

    int &fence2 = create_sprite(28, 208, 0, 64, 9);
    sp_pseq(&fence2, 64);
    sp_pframe(&fence2, 9);
    sp_script(&fence2, "i-cavefc");
    unfreeze(1);

    int &sposx = &myposx;

    if (&sgchar == 0) 
    {
     &sposx -= &temphold;
    }

    if (&sgchar == 1) 
    {
     &sposx += &temphold; 
    }

    int &sposy = &stormy;

    if (&sposy < 45) 
    {
     &sposy = 45;
    }

    if (&sposy > 240)
    { 
     &sposy = 240;
    }

    int &slayer = create_sprite(&sposx, &sposy, 0, 649, 1);
    sp_base_walk(&slayer, 640);
    sp_speed(&slayer, 2);
    sp_script(&slayer, "i-c1");  
   }
   if (&myposx < 50)
   {
    move_stop(1, 6, 50, 1);

    int &fence = create_sprite(28, 184, 0, 64, 9);
    sp_pseq(&fence, 64);
    sp_pframe(&fence, 9);
    sp_script(&fence, "i-cf");

    int &fence2 = create_sprite(611, 157, 0, 64, 9);
    sp_pseq(&fence2, 64);
    sp_pframe(&fence2, 9);
    sp_script(&fence2, "i-cavefc");
    unfreeze(1);

    int &sposx = &myposx;

    if (&sgchar == 0) 
    {
     &sposx -= &temphold;
    }

    if (&sgchar == 1) 
    {
     &sposx += &temphold; 
    }

    int &sposy = &stormy;

    if (&sposy < 145) 
    {
     &sposy = 145;
    }
 
    if (&sposy > 245) 
    {
     &sposy = 245;
    }

    int &slayer = create_sprite(&sposx, &sposy, 0, 649, 1);
    sp_base_walk(&slayer, 640);
    sp_speed(&slayer, 2);
    sp_script(&slayer, "i-c1"); 
   }
  }
 }
 if (&player_map == 322)
 {
  if (&intro >= 2)
  {

   if (&intro >= 3)
   {
    &vision = 1;
    if (&life < 1) return;
   }

   if (&life < 1) return;
   freeze(1);
   wait(100);

   int &myposx = sp_x(1, -1);
   int &myposy = sp_y(1, -1); 
   
   if (&myposy > 370)
   {
    move_stop(1, 8, 370, 1);

    int &fence = create_sprite(480, 393, 0, 64, 8);
    sp_pseq(&fence, 64);
    sp_pframe(&fence, 8);
    sp_script(&fence, "i-cf");

    int &fence2 = create_sprite(28, 26, 0, 64, 9);
    sp_pseq(&fence2, 64);
    sp_pframe(&fence2, 9);
    sp_script(&fence2, "i-cavefc");

    int &rock = create_sprite(45, -80, 0, 95, 4);
    sp_pseq(&rock, 95);
    sp_pframe(&rock, 4);
    sp_hard(&rock, 0);
    sp_speed(&rock, 4);
    sp_que(&rock, 1000); 

    if (&intro < 3)
    { 
     move_stop(&rock, 2, 259, 1);
     &intro = 3;
     sp_que(&rock, 0);
     draw_hard_sprite(&rock);
     sp_script(&rock, "i-objects");
    }
    unfreeze(1);

    int &sposy = &myposy;

    if (&sgchar == 0) 
    {
     &sposy -= &temphold;
    }

    if (&sgchar == 1) 
    {
     &sposy += &temphold;
    }
 
    int &sposx = &stormy;

    if (&sposx > 527)
    { 
     &sposx = 527; 
    }
     
    if (&sposx < 510)
    { 
     &sposx = 510;
    } 

    int &slayer = create_sprite(&sposx, &sposy, 0, 649, 1);
    sp_base_walk(&slayer, 640);
    sp_speed(&slayer, 2);
    sp_script(&slayer, "i-c1");  
   }
   if (&myposx < 45)
   {
    move_stop(1, 6, 45, 1);

    int &fence = create_sprite(27, 19, 0, 64, 9);
    sp_pseq(&fence, 64);
    sp_pframe(&fence, 9);
    sp_script(&fence, "i-cf"); 

    int &fence2 = create_sprite(503, 393, 0, 64, 8);
    sp_pseq(&fence2, 64);
    sp_pframe(&fence2, 8);
    sp_script(&fence2, "i-cavefc");
    unfreeze(1); 

    int &sposx = &myposx;

    if (&sgchar == 0) 
    {
     &sposx -= &temphold;
    }

    if (&sgchar == 1) 
    {
     &sposx += &temphold; 
    }

    int &sposy = &stormy;

    if (&sposy < 40) 
    {
     &sposy = 40;
    }

    if (&sposy > 60)
    { 
     &sposy = 60;
    }

    int &slayer = create_sprite(&sposx, &sposy, 0, 649, 1);
    sp_base_walk(&slayer, 640);
    sp_speed(&slayer, 2);
    sp_script(&slayer, "i-c1");
   }             
  }
 }
 if (&player_map == 321)
 {
  if (&intro >= 2)
  {
   
   if (&intro < 3)
   {
    sp_nodraw(1, 1);
   }

   if (&intro == 3)
   {
    &vision = 1;
    if (&life < 1) return;
   }

   if (&intro >= 4)
   {
    &vision = 2;
    if (&life < 1) return;
   }

   if (&life < 1) return;
   freeze(1);
   wait(100);

   int &myposx = sp_x(1, -1);
   int &myposy = sp_y(1, -1); 

   if (&myposx > 590)
   {
    if (&myposy < 80)
    {
     move_stop(1, 4, 590, 1);
  
     int &fence = create_sprite(611, 1, 0, 64, 9);
     sp_pseq(&fence, 64);
     sp_pframe(&fence, 9);
     sp_script(&fence, "i-cf"); 

     int &fence2 = create_sprite(250, 10, 0, 64, 8);
     sp_pseq(&fence2, 64);
     sp_pframe(&fence2, 8);
     sp_script(&fence2, "i-cavefc"); 

     int &rock = create_sprite(242, -80, 0, 95, 7);
     sp_pseq(&rock, 95);
     sp_pframe(&rock, 7);
     sp_hard(&rock, 0);
     sp_speed(&rock, 4);
     sp_que(&rock, 1000);

     if (&intro == 3)
     {
      move_stop(&rock, 2, 312, 1);
      &intro = 4;
      sp_que(&rock, 0);
      draw_hard_sprite(&rock); 
      sp_script(&rock, "i-objects");   
     } 
     unfreeze(1); 

    int &sposx = &myposx;

    if (&sgchar == 0) 
    {
     &sposx -= &temphold;
    }

    if (&sgchar == 1) 
    {
     &sposx += &temphold; 
    }

    int &sposy = &stormy;

    if (&sposy < 50) 
    {
     &sposy = 50;
    }
 
    if (&sposy > 40) 
    {
     &sposy = 40;
    }

     int &slayer = create_sprite(&sposx, &sposy, 0, 649, 1);
     sp_base_walk(&slayer, 640);
     sp_speed(&slayer, 2);
     sp_script(&slayer, "i-c1");  
    }
   }
   if (&myposy < 25)
   {
    move_stop(1, 2, 25, 1); 
   
    int &fence = create_sprite(244, 10, 0, 64, 8);
    sp_pseq(&fence, 64);
    sp_pframe(&fence, 8);
    sp_script(&fence, "i-cf"); 

    int &fence2 = create_sprite(611, 37, 0, 64, 9);
    sp_pseq(&fence2, 64);
    sp_pframe(&fence2, 9);
    sp_script(&fence2, "i-cavefc"); 

    int &rock = create_sprite(242, -80, 0, 95, 7);
    sp_pseq(&rock, 95);
    sp_pframe(&rock, 7);
    sp_hard(&rock, 0);
    sp_speed(&rock, 4);
    sp_que(&rock, 1000);

    int &rock2 = create_sprite(645, -80, 0, 95, 4);
    sp_pseq(&rock2, 95);
    sp_pframe(&rock2, 4);
    sp_hard(&rock2, 0);
    sp_speed(&rock2, 4);
    sp_que(&rock2, 1000); 

    if (&intro < 3)
    {
     move(&rock, 2, 312, 1);
     move_stop(&rock2, 2, 259, 1);
     move_stop(&rock, 2, 312, 1);
     sp_que(&rock, 0);
     sp_que(&rock2, 0);
     draw_hard_sprite(&rock);
     draw_hard_sprite(&rock2);
     &intro = 4;
     unfreeze(1);
     sp_nodraw(1, 0);
     sp_script(&rock, "i-objects");
     sp_script(&rock2, "i-objects");
    }
    unfreeze(1);

    int &sposy = &myposy;

    if (&sgchar == 0) 
    {
     &sposy -= &temphold;
    }

    if (&sgchar == 1) 
    {
     &sposy += &temphold; 
    }
 
    int &sposx = &stormy;

    if (&sposx > 225)
    { 
     &sposx = 225; 
    }
     
    if (&sposx < 212)
    { 
     &sposx = 212;
    } 

    int &slayer = create_sprite(&sposx, &sposy, 0, 649, 1);
    sp_base_walk(&slayer, 640);
    sp_speed(&slayer, 2);
    sp_script(&slayer, "i-c1");  
   } 
   if (&myposy > 330)
   {
    if (&intro >= 4)
    {
     if (&life < 1) return;
     move_stop(1, 8, 330, 1);
     say_stop("`6Oh crap...", 1);
     sp_dir(1, 2);
     say_stop("`6I'm trapped!", 1);
 
     wait(200);
     int &slayer = create_sprite(240, 400, 0, 649, 1);
     sp_base_walk(&slayer, 640);
     sp_speed(&slayer, 2);
     sp_script(&slayer, "i-c1"); 
    }
   }        
  }
 } 
 if (&player_map == 289)
 {
  if (&life < 1) return;

  if (&intro >= 2)
  {
   freeze(1);
   wait(100);

   int &myposx = sp_x(1, -1);
   int &myposy = sp_y(1, -1); 
 
   if (&myposy > 360)
   {
    move_stop(1, 8, 360, 1);
    
    int &fence = create_sprite(222, 393, 0, 64, 8);
    sp_pseq(&fence, 64);
    sp_pframe(&fence, 8);
    sp_script(&fence, "i-cf");

    int &fence2 = create_sprite(611, 231, 0, 64, 9);
    sp_pseq(&fence2, 64);
    sp_pframe(&fence2, 9);
    sp_script(&fence2, "i-cavefc");  
    unfreeze(1);  

    int &sposy = &myposy;
    int &sposx = &stormy;

    if (&sgchar == 0) 
    {
     &sposy -= &temphold;
    }

    if (&sgchar == 1) 
    {
     &sposy += &temphold; 
     if (&sposx > 400)
     {
      &sposy += 180;
     }
    }

    if (&sposx > 225)
    { 
     &sposx = 225; 
    }
     
    if (&sposx < 210)
    { 
     &sposx = 210;
    } 

    int &slayer = create_sprite(&sposx, &sposy, 0, 649, 1);
    sp_base_walk(&slayer, 640);
    sp_speed(&slayer, 2);
    sp_script(&slayer, "i-c1");
   }
   if (&myposx > 585)
   {
    move_stop(1, 4, 585, 1);
  
    int &fence = create_sprite(611, 189, 0, 64, 9);
    sp_pseq(&fence, 64);
    sp_pframe(&fence, 9);
    sp_script(&fence, "i-cf"); 

    int &fence2 = create_sprite(204, 393, 0, 64, 8);
    sp_pseq(&fence2, 64);
    sp_pframe(&fence2, 8);
    sp_script(&fence2, "i-cavefc"); 
    unfreeze(1);

    int &sposx = &myposx;

    if (&sgchar == 0) 
    {
     &sposx -= &temphold;
    }

    if (&sgchar == 1) 
    {
     &sposx += &temphold; 
    }

    int &sposy = &stormy;

    if (&sposy < 145) 
    {
     &sposy = 145;
    }

    if (&sposy > 245)
    { 
     &sposy = 245;
    }

    int &slayer = create_sprite(&sposx, &sposy, 0, 649, 1);
    sp_base_walk(&slayer, 640);
    sp_speed(&slayer, 2);
    sp_script(&slayer, "i-c1");
   }   
  }
 } 
 if (&player_map == 385)
 {
  if (&life < 1) return;

  move_stop(1, 2, 30, 1);
 
  int &fence = create_sprite(254, 10, 0, 64, 8);
  sp_pseq(&fence, 64);
  sp_pframe(&fence, 8);
  sp_script(&fence, "i-cf"); 
  
  int &warprock = create_sprite(447, 159, 0, 95, 1);
  sp_nodraw(&warprock, 1);
  sp_pseq(&warprock, 95);
  sp_pframe(&warprock, 1);
  sp_hard(&warprock, 0);
  sp_touch_damage(&warprock, -1);
  draw_hard_sprite(&warprock);
  sp_script(&warprock, "caves");
  unfreeze(1);

    int &sposy = &myposy;

    if (&sgchar == 0) 
    {
     &sposy -= &temphold;
    }

    if (&sgchar == 1) 
    {
     &sposy += &temphold;
    }
 
    int &sposx = &stormy;

    if (&sposx > 275)
    { 
     &sposx = 275; 
    }
     
    if (&sposx < 210)
    { 
     &sposx = 210;
    } 

  int &slayer = create_sprite(&sposx, &sposy, 0, 649, 1);
  sp_base_walk(&slayer, 640);
  sp_speed(&slayer, 2);
  sp_script(&slayer, "i-c1");  
 }         
}    