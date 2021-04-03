void main(void)
{
 int &scythe = compare_weapon("item-fweap");
 if (&scythe == 1)
 {
  say("`6I'm not dropping my scythe!", 1);
  unfreeze(1);
  kill_this_task();
  return;
 }

 wait(1);
 stop_entire_game(1);
 choice_start();
 title_start();
 Are you sure you want to drop this item?
 title_end();
 "Yes"
 "No actually, I want to keep it"
  choice_end();
  wait(1);
  
  if (&result == 1)
  {
   kill_cur_item();
   draw_status();
  }
 unfreeze(1);
 kill_this_task();
}