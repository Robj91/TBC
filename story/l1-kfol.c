void main(void)
{
 set_smooth_follow(1);
 int &check;
 int &x;
 int &y;

 if (&player_map == 703)
 {
  if (&temphold == 99)
  {
   set_smooth_follow(1);
   sp_follow(&chartemp, 1);
   &check = &player_map;
   sp_speed(&chartemp, 2);
   sp_script(&chartemp, "l1-knightp2");
   goto loop2;
  }
 }

again:
 &check = &player_map;
 &x = sp_x(1, -1);
 &y = sp_y(1, -1);
 &chartemp = create_sprite(&x, &y, 16, 283, 1);
 sp_brain(&chartemp, 16);
 sp_base_walk(&chartemp, 280);
 sp_speed(&chartemp, 2);
 sp_follow(&chartemp, 1);
 sp_script(&chartemp, "l1-knightp2");

loop2:
 wait(50);
 wait(0);
 if (&check == &player_map)
 {
  if (&stormy == 4)
  {
   &temphold = 88;
   kill_this_task();
  }
  &x = sp_custom("exi", &temp2hold, -1);
  if (&x == 1)
  {
   goto loop2;
  }
  else
  {
   goto again;
  }
 }
 else
 {
  goto again;
 }
}
 