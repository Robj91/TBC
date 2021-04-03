//Script called by ic-1 to move storm the last few steps off the screen
void move(void)
{
 freeze(1);
 int &playx = sp_x(1, -1);
 int &playy = sp_y(1, -1);

 if (&player_map == 353)
 {
  if (&intro <= 2)
  {
   move_stop(1, 6, 650, 1);
  }
  
  if (&intro == 4)
  {
   move_stop(1, 2, 450, 1);
  }
 }

 if (&player_map == 354)
 {
  if (&playx < 90)
  {
   move_stop(1, 4, -50, 1);
  }

  if (&playx > 580)
  {
   move_stop(1, 6, 650, 1);
  }
  
  if (&playy < 60)
  {
   move_stop(1, 8, -50, 1);
  }
 }

 if (&player_map == 355)
 {
  if (&playy < 60)
  {
   move_stop(1, 8, -50, 1);
  }
  
  if (&playx < 70)
  {
   move_stop(1, 4, -50, 1);
  }
 }

 if (&player_map == 323)
 {
  if (&playy > 325)
  {
   move_stop(1, 2, 450, 1);
  }
 
  if (&playy < 90)
  {
   move_stop(1, 8, -50, 1);
  }
 }
 
 if (&player_map == 322)
 {
  if (&playy > 330)
  {
   move_stop(1, 2, 450, 1);
  }
 
  if (&playx < 70)
  { 
   move_stop(1, 4, -50, 1);
  }
 }

 if (&player_map == 321)
 {
  if (&playx > 464)
  {
   move_stop(1, 6, 650, 1);
  }
 
  if (&playx < 310)
  {
   if (&playy < 70)
   {
    move_stop(1, 8, -50, 1);
   }
  }
 }
  
 if (&player_map == 289)
 {
  if (&playy > 320)
  {
   move_stop(1, 2, 450, 1);
  }

  if (&playx > 560)
  {
   move_stop(1, 6, 650, 1);
  }
 }

 if (&player_map == 290)
 {
  if (&playx < 90)
  {
   move_stop(1, 4, -50, 1);
  }
  
  if (&playx > 540)
  {
   move_stop(1, 6, 650, 1);
  }
 }

 if (&player_map == 291)
 {
  if (&playx < 140)
  {
   move_stop(1, 4, -50, 1);
  }

  if (&playy > 300)
  {
   move_stop(1, 2, 450, 1);
  }
 }
}










