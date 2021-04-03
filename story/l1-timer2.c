//Traveller Countdown timer.

void main (void)
{
 &timer += 1;
 int &minutes = 1;
 int &seconds = 0;
 int &timertext = say_xy("`@Time until traveller dies - &minutes : &seconds", 1, 18);
 int &oldmap = &player_map;
 goto start;

loop:
 wait(1000);
 
start:
 if (&guy == 100)  goto done;

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
  
  &timertext = say_xy("`@Time until traveller dies - &minutes : 00", 1, 18);
  &minutes -= 1;
  &seconds = 59;
  &oldmap = &player_map;
  goto loop;
 }

 if (&seconds <= 9)
 {
  if (&player_map == &oldmap) sp_active(&timertext, 0);
  
  &timertext = say_xy("`!Time until traveller dies - &minutes : 0&seconds", 1, 18);
  &seconds -= 1;
  &oldmap = &player_map;
  goto loop;
 }

 if (&seconds <= 10)
 {
  if (&player_map == &oldmap) sp_active(&timertext, 0);
   
  &timertext = say_xy("`!Time until traveller dies - &minutes : &seconds", 1, 18); 
  &seconds -= 1;
  &oldmap = &player_map;
  goto loop;
 }

 if (&player_map == &oldmap) sp_active(&timertext, 0);
 
 &timertext = say_xy("`@Time until traveller dies - &minutes : &seconds", 1, 18);
 &seconds -= 1;
 &oldmap = &player_map;
 goto loop;

end:
 //Times up, the traveller died
 sp_active(&timertext, 0);
 &guy = 99;
 say_xy("`@You did not help the traveller in time.", 10, 350);
 playsound(58, 8000, 0, 0, 0);


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
