//Script for character choosing
//Attached to a screen, which the player is nodrawn and taken to before each level
void main(void)
{
 freeze(1);
 turn_midi_on();
 int &dink = 0;
 int &stor = 0;
 
start:
 choice_start();
 set_title_color 2
 set_y 240
 title_start();
 Which character do you want to play as for this area?
 title_end();
 "Dink Smallwood"
 "Stormclawd Majalto"
 "What's the difference?"
 choice_end();

   if (&result == 1)
   {
    &dink = 1;
   }
   if (&result == 2)
   {
    &stor = 1;
   }
   if (&result == 3) 
   {
    &dink = 2;
    choice_start();
    set_title_color 2
    set_y 240
    title_start();
    Each character has their own style, which you will notice when you play. Each character has a different role to play, so your quests will be different depending on which character you choose.
    title_end();
    "Back to character select"
    choice_end();
   }

 if (&dink == 2) 
 {
  &dink = 0;
  goto start;
 }

 if (&story == 0)
 {
  //first area, and only area where &story = 0
  //no coml or stormy check required since a lvl was not just played
  external("char-in", "inset"); 
  goto lev1;
 }
 
 //If stormy is 1, storm was used to complete previous level
 //if stormy is 0, dink was used to complete previous level
 if (&coml == 0)
 {
  //stonebroke was just finished, let's store that the player finished it and who with
  external("lvl-set", "storelvl");  
  &coml = 1;
  goto lev2;
 }
}

void level1(void)
{
lev1:
 //Level 1: Stonebrook - Beginning of the end
 
 if (&dink == 1)
 {
  choice_start();
  set_title_color 2
  set_y 300
  title_start();
      ~Stonebroke~

   Character: Dink Smallwood

Primary Task: Search Stonebrook for any survivors. If you come across any survivors, you must help them any way you can.
  title_end();
  "Continue"
  "Back to character select"
  choice_end();

  if (&result == 1)
  {
   fade_down();
   if (&sgchar == 1)  
   {
    sp_base_walk(1, 70);
    sp_base_idle(1, 10);
    
    //let's update the stored stats and inventory
    if (&sgchar == 1) external("char-str", "storm");
    if (&sgchar == 0) external("char-str", "dink");
    
    //Let's retrieve the stats and inventory
    external("char-set", "dink");
   }
   
   //change the char variable so we can track which character is being played
   &sgchar = 0;
   
   script_attach(1000);
   &player_map = 703;
   sp_x(1, 273);
   sp_y(1, 183);
   sp_dir(1, 6);
  }
  
  if (&result == 2) 
  {
   &dink = 0;
   goto start;
  }
 }
 
 if (&stor == 1)
 {
  choice_start();
  set_title_color 2
  set_y 300
  title_start();
      ~Stonebroke~

   Character: Storm Majalto

Primary Task: Find a clear path to Martridge. Martridge lives to the North-East of Stonebrook.
  title_end();
  "Continue"
  "Back to character select"
  choice_end();

  if (&result == 1)
  {
   fade_down();
   if (&sgchar == 0)
   { 
    sp_base_walk(1, 410);
    sp_base_idle(1, -1);
    
    //let's update the stored stats and inventory
    if (&sgchar == 1) external("char-str", "storm");
    if (&sgchar == 0) external("char-str", "dink");

    //Let's retrieve the stats and inventory    
    external("char-set", "storm");
   }

   //change the char variable so we can track which character is being played
   &sgchar = 1; 
   
   script_attach(1000);
   &player_map = 703;
   sp_x(1, 400);
   sp_y(1, 183);
   sp_dir(1, 4);
  }
  if (&result == 2) 
  {
   &stor = 0;
   goto start;
  }
 }
 
 wait(0);
 load_screen();
 draw_screen();
 sp_nodraw(1, 0);
 fade_up();
 kill_this_task();
}

void level2(void)
{
lev2:
 //Level 2: The Darkest Secrets
 
 if (&dink == 1)
 {
  choice_start();
  set_title_color 2
  set_y 300
  title_start();
      ~The Darkest Secrets~

   Character: Dink Smallwood

Primary Task: Search Martridge's library, and find out what is needed to link a return portal to this world
  title_end();
  "Continue"
  "Back to character select"
  choice_end();

  if (&result == 1)
  {
   fade_down();

    sp_base_walk(1, 70);
    sp_base_idle(1, 10);
    
    //let's update the stored stats and inventory
    if (&sgchar == 1) external("char-str", "storm");
    if (&sgchar == 0) 
    {
     external("char-str", "dink");
    }

    external("char-set", "dink");

   //change the char variable so we can track which character is being played
   &sgchar = 0;
   
   script_attach(1000);
   &player_map = 722;
   sp_x(1, 316);
   sp_y(1, 140);
   sp_dir(1, 6);
  }
  if (&result == 2) 
  {
   &dink = 0;
   goto start;
  }
 }
 if (&stor == 1)
 {
  choice_start();
  set_title_color 2
  set_y 300
  title_start();
      ~Stonebroke~

   Character: Storm Majalto

Primary Task: Search Martridge's Library, and find a way to re-open the portal and follow Seth through to his destination
  title_end();
  "Continue"
  "Back to character select"
  choice_end();

  if (&result == 1)
  {
   fade_down();

    sp_base_walk(1, 410);
    sp_base_idle(1, -1);

    //let's update the stored stats and inventory
    if (&sgchar == 1) external("char-str", "storm");
    if (&sgchar == 0) external("char-str", "dink");

    //Let's retrieve the stats and inventory    
    external("char-set", "storm");

   //change the char variable so we can track which character is being played
   &sgchar = 1; 
   
   script_attach(1000);
   &player_map = 722;
   sp_x(1, 316);
   sp_y(1, 140);
   sp_dir(1, 4);
  }
  if (&result == 2) 
  {
   &stor = 0;
   goto start;
  }
 }
 
 load_screen();
 draw_screen();
 sp_nodraw(1, 0);
 fade_up();
 kill_this_task();
}