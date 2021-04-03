//Blue Guard Countdown timer.

void main (void)
{
 &timer += 1;
 int &minutes = 2;
 int &seconds = 30;
 int &timertext = say_xy("`@Time until blue guard dies - &minutes : &seconds", 1, 1);
 int &oldmap = &player_map;
 goto start;

loop:
 wait(1000);
 
start:
 if (&knight == 4)  goto done;

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
  
  &timertext = say_xy("`@Time until blue guard dies - &minutes : 00", 1, 1);
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
   &timertext = say_xy("`@Time until blue guard dies - &minutes : 0&seconds", 1, 1);
  }
  if (&minutes == 0)
  {
   &timertext = say_xy("`!Time until blue guard dies - &minutes : 0&seconds", 1, 1);
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
   &timertext = say_xy("`@Time until blue guard dies - &minutes : &seconds", 1, 1);
  }
  if (&minutes == 0)
  {
   &timertext = say_xy("`!Time until blue guard dies - &minutes : &seconds", 1, 1);
  } 
  &seconds -= 1;
  &oldmap = &player_map;
  goto loop;
 }

 if (&player_map == &oldmap) sp_active(&timertext, 0);
 
 &timertext = say_xy("`@Time until blue guard dies - &minutes : &seconds", 1, 1);
 &seconds -= 1;
 &oldmap = &player_map;
 goto loop;

end:
 //Times up, the blue knight died
 sp_active(&timertext, 0);
 &knight = 99;
 int &check = sp_pseq(&temphold, -1);
 if (&check == 153) 
 {
  say("`!Ahhhhhhhh......", &temphold);
  say_xy("`@You did not find a way to heal the guard in time. He has died.", 10, 350);
 }
 else
 {
  say_xy("`@You did not find a way to heal the guard in time.", 10, 350);
 }

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
