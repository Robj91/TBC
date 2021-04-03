void main(void)
{
 if (&temphold == 1)
 {
  if (&story == 4) ]
  {
   say_xy("`%Storm has died. You have failed.", 10, 350);
   wait(1000);
  }
 again:
  choice_start();
  set_y 240
  title_start();
  "Load game"
  title_end();
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
  "Restart"
  choice_end();

  if (&result == 11)
  {
   choice_start();
   "Yes, I really want to restart from scratch"
   "No, go back!"
   choice_end();
   if (&result == 2)
   {
    goto again;
   }
   if (&result == 1)
   {
    unfreeze(1);
    restart_game();
    kill_this_task();
   }
  unfreeze(1);
  kill_this_task();
  }

  int &mycrap = game_exist(&result);
  if (&mycrap == 0)
  goto again;
  sp_brain(1, 1);
  sp_nohit(1, 0);

  stopmidi();
  script_attach(1000);
  load_game(&result);  
 }
}