//Storm Countdown timer.

void main (void)
{
 &timer += 1;
 int &minutes = 1;
 int &seconds = 30;
 int &timertext = say_xy("`@Time until Storm dies - &minutes : &seconds", 1, 1);
 int &oldmap = &player_map;
 goto start;

loop:
 wait(1000);
 
start:
 if (&story == 4)  goto done;

 if (&pause)
 {
  sp_kill(&timertext, 0);
  ploop:
  wait(100);
  if (&pause) goto ploop;
 }

 if (&seconds == 0)
 {
  if (&minutes == 0) goto end;
  if (&player_map == &oldmap) sp_active(&timertext, 0);
  
  &timertext = say_xy("`@Time until Storm dies - &minutes : 00", 1, 1);
  &minutes -= 1;
  &seconds = 59;
  &oldmap = &player_map;
  goto loop;
 }

 if (&seconds <= 9)
 {
  if (&player_map == &oldmap) sp_active(&timertext, 0);
  
  if (&minutes > 0)
  {
   &timertext = say_xy("`@Time until Storm dies - &minutes : 0&seconds", 1, 1);
  }
  if (&minutes == 0)
  {
   &timertext = say_xy("`!Time until Storm dies - &minutes : 0&seconds", 1, 1);
  }
  &seconds -= 1;
  &oldmap = &player_map;
  goto loop;
 }

 if (&seconds <= 10)
 {
  if (&player_map == &oldmap) sp_active(&timertext, 0);
   
  if (&minutes > 0)
  {
   &timertext = say_xy("`@Time until Storm dies - &minutes : &seconds", 1, 1);
  }
  if (&minutes == 0)
  {
   &timertext = say_xy("`!Time until Storm dies - &minutes : &seconds", 1, 1);
  } 
  &seconds -= 1;
  &oldmap = &player_map;
  goto loop;
 }

 if (&player_map == &oldmap) sp_active(&timertext, 0);
 
 &timertext = say_xy("`@Time until Storm dies - &minutes : &seconds", 1, 1);
 &seconds -= 1;
 &oldmap = &player_map;
 goto loop;

end:
 //Times up, the Storm died
 sp_active(&timertext, 0);
 freeze(1);
 say_xy("`@You did not help Storm in time. You have failed.", 10, 350); 
 wait(1000);
 script_attach(1000);
 fade_down();
 sp_nodraw(1, 1);
 &player_map = 2;
 load_screen();
 draw_screen();
 &temphold = 1;
 fade_up();
 kill_this_task();

done:
 &timer = 0;
 &save_x = sp_brain(&timertext, -1);
 if (&save_x == 8)
  sp_active(&timertext, 0);
 
 kill_this_task();
}

void stoptheclock (void)
{
	sp_kill(&timertext, 0);
	kill_this_task();
}

void kill (void)
{
	sp_active(&timertext, 0);
	kill_this_task();
}
