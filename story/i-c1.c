//Script for slayer that chases you in starting cave
void main(void)
{
 //Set the brain, speed, timing, and touch damage
 sp_brain(&current_sprite, 9);
 sp_speed(&current_sprite, 3);
 sp_timing(&current_sprite, 0);
 sp_touch_damage(&current_sprite, 20);
 
 //Check which screen it's coming into
 //So we know where to move it
 if (&player_map == 322)
 {
  int &posx = sp_x(&current_sprite, -1);
  int &posy = sp_y(&current_sprite, -1);
 
  if (&posy > 350)
  { 
   move_stop(&current_sprite, 8, 50, 1);
   sp_target(&current_sprite, 1);
  }

  if (&posx < 100)
  {
   freeze(&current_sprite);
   move_stop(&current_sprite, 6, 134, 1);

   int &myposx = sp_x(1, -1);
   int &myposy = sp_y(1, -1);

   int &myplace = inside_box(&myposx, &myposy, 34, 13, 240, 268);
   if (&myplace == 1)
   {
    unfreeze(&current_sprite);
    sp_target(&current_sprite, 1);
   }
   else
   {
    move_stop(&current_sprite, 6, 505, 1);
    unfreeze(&current_sprite);
    sp_target(&current_sprite, 1);
   }
  }
 }
 if (&player_map == 321)
 { 
  int &myposx = sp_x(&current_sprite, -1);
  int &myposy = sp_y(&current_sprite, -1);

  if (&myposx > 550)
  {
   if (&myposy < 80)
   {
    freeze(&current_sprite);
    move_stop(&current_sprite, 4, 390, 1);
    unfreeze(&current_sprite);
    sp_target(&current_sprite, 1);
   }
  }
  if (&myposy < 75)
  {
   if (&myposx < 330)
   {
    freeze(&current_sprite);
    move_stop(&current_sprite, 2, 50, 1);
    unfreeze(&current_sprite);
    sp_target(&current_sprite, 1);
   }
  }
  if (&myposy > 300)
  {
   sp_target(&current_sprite, 1);
  }
 }
 if (&player_map == 289)
 {
  int &myposy = sp_y(&current_sprite, -1);
  
  if (&myposy > 272)
  {
   freeze(&current_sprite);
   move_stop(&current_sprite, 8, 260, 1);
   unfreeze(&current_sprite);
   sp_target(&current_sprite, 1);
  } 
  else
  {
   freeze(&current_sprite);
   move_stop(&current_sprite, 4, 580, 1);
   unfreeze(&current_sprite);
   sp_target(&current_sprite, 1);
  }
 }
 if (&player_map == 291)
 {
  int &myposy = sp_y(&current_sprite, -1);
  
  if (&myposy > 290)
  {
   freeze(&current_sprite);
   move_stop(&current_sprite, 8, 259, 1);
   unfreeze(&current_sprite);
   sp_target(&current_sprite, 1);
  }   
  else
  {
   freeze(&current_sprite);
   move_stop(&current_sprite, 6, 50, 1);
   unfreeze(&current_sprite);
   sp_target(&current_sprite, 1);
  } 
 }
 if (&player_map == 354)
 {
  int &myposy = sp_y(&current_sprite, -1);
  int &myposx = sp_x(&current_sprite, -1);

  if (&myposx < 100)
  {
   freeze(&current_sprite);
   move_stop(&current_sprite, 6, 100, 1);
   unfreeze(&current_sprite);
   sp_target(&current_sprite, 1);
  } 
  if (&myposx > 550)
  {
   freeze(&current_sprite);
   move_stop(&current_sprite, 4, 550, 1);
   unfreeze(&current_sprite);
   sp_target(&current_sprite, 1);
  }
  if (&myposy < 60)
  {
   freeze(&current_sprite);
   move_stop(&current_sprite, 2, 90, 1);
   unfreeze(&current_sprite);
   sp_target(&current_sprite, 1);
  }
 }
 if (&player_map == 355)
 {
  int &myposx = sp_x(&current_sprite, -1);
  int &myposy = sp_y(&current_sprite, -1);

  if (&myposx < 170)
  {
   freeze(&current_sprite);
   move_stop(&current_sprite, 6, 205, 1);
   unfreeze(&current_sprite);
   sp_target(&current_sprite, 1);
  }
  if (&myposy < 45)
  {
   freeze(&current_sprite);
   move_stop(&current_sprite, 2, 45, 1);
   unfreeze(&current_sprite);
   sp_target(&current_sprite, 1);
  } 
 }
 if (&player_map == 323)
 {
  int &myposx = sp_x(&current_sprite, -1);
  int &myposy = sp_y(&current_sprite, -1);
   
  if (&myposy > 340)
  {
   freeze(&current_sprite);
   move_stop(&current_sprite, 8, 340, 1);
   unfreeze(&current_sprite);
   sp_target(&current_sprite, 1);
  }
  if (&myposy < 90)
  {
   freeze(&current_sprite);
   move_stop(&current_sprite, 2, 90, 1);
   unfreeze(&current_sprite);
   sp_target(&current_sprite, 1);
  }
 }
 if (&player_map == 290)
 {
  int &myposx = sp_x(&current_sprite, -1);
  
  if (&myposx > 500)
  {
   freeze(&current_sprite);
   move_stop(&current_sprite, 4, 500, 1);
   unfreeze(&current_sprite);
   sp_target(&current_sprite, 1);
  }
  if (&myposx < 170)
  {
   freeze(&current_sprite);
   move_stop(&current_sprite, 6, 170, 1);
   unfreeze(&current_sprite);
   sp_target(&current_sprite, 1);
  }
 }
 if (&player_map == 353)
 {
  int &posx = sp_x(&current_sprite, -1);

  if (&posx > 535)
  {
   freeze(&current_sprite);
   move_stop(&current_sprite, 4, 570, 1);
   unfreeze(&current_sprite);
   sp_target(&current_sprite, 1);
  }
  if (&intro == 2)
  {
   sp_timing(&current_sprite, 9);
  }
 }
 if (&player_map == 385)
 {
  freeze(&current_sprite);
  move_stop(&current_sprite, 2, 140, 1);
  unfreeze(&current_sprite);
 }
 sp_target(&current_sprite, 1);
}

void posi(void)
{
 //Procedure called by left or right exiting screen sprite
 //to get the distance between Storm and the slayer
 //temphold has Storms x position

 //Get the slayers x and y
 int &ey = sp_y(&current_sprite, -1);
 int &ex = sp_x(&current_sprite, -1);

 //store temphold, so we don't lose the original value
 int &temps = &temphold;

 //check the difference between storms x and the slayers x position
 &temphold -= &ex;
 if (&temphold < 0)
 {
  //The slayer is to the right of storm, so storm must be travelling to the west
  //lets get the original temphold value back
  &temphold = &temps;

  //and check the difference between the slayers x and storm's x position
  &ex -= &temphold;

  //Save the value in temphold
  //and save sgchar to 1
  //to let the next script know storm is travelling to the west
  &temphold = &ex;
  &sgchar = 1;
 }
 else
 {
  //set sgchar to 0
  //to let the next script know storm is travelling to the east
  &sgchar = 0;
 }
 //save the slayers y in stormy 
 //and call the 'move' procedure from 'i-cavfcm'
 &stormy = &ey;
 external("i-cavfcm", "move");
} 

void posi2(void)
{
 //Procedure called by up or down exiting screen sprite
 //to get the distance between storm and the slayer
 //temphold has storms y position

 //Get the slayers x and y
 int &ex = sp_x(&current_sprite, -1);
 int &ey = sp_y(&current_sprite, -1);

 //store temphold, so we don't lose the original value
 int &temps = &temphold;

 //check the difference between storms y and the slayers y position
 &temphold -= &ey;
 if (&temphold < 0)
 {
  //The slayer is to the below storm, so storm must be travelling the the North
  //lets get the original temphold value back
  &temphold = &temps;

  //and check the difference between the slayersy and storm's y position
  &ey -= &temphold;

  //Save the value in temphold
  //and save sgchar to 1
  //to let the next script know storm is travelling to the North
  &temphold = &ey;
  &sgchar = 1;
 }
 else
 {
  //set sgchar to 0
  //to let the next script know storm is travelling to the south
  &sgchar = 0;
 }
 //save the slayers x in stormy 
 //and call the 'move' procedure from 'i-cavfcm'
 &stormy = &ex;
 external("i-cavfcm", "move");
}













 