void face_each_other(void)
{
  int &_temp01;
  int &_temp02;
  
  &_temp01 = sp_x(&save_x,-1);
  &_temp01 -= sp_x(&save_y,-1);
  &_temp02 = sp_y(&save_x,-1);
  &_temp02 -= sp_y(&save_y,-1);
  
  if (&_temp01 < 0)
  {
    if (&_temp02 < 0)
    {
      sp_dir(&save_x,3);
      sp_dir(&save_y,7);
      kill_this_task();
    }
    sp_dir(&save_x,9);
    sp_dir(&save_y,1);
    kill_this_task();
  }
  
  if (&_temp02 < 0)
  {
    sp_dir(&save_x,1);
    sp_dir(&save_y,9);
    kill_this_task();
  }
  sp_dir(&save_x,7);
  sp_dir(&save_y,3);
  kill_this_task();
}

void face_each_other_dink(void)
{
  &save_x = &current_sprite;
  int &_temp01;
  int &_temp02;
  
  &_temp01 = sp_x(&save_x,-1);
  &_temp01 -= sp_x(1,-1);
  &_temp02 = sp_y(&save_x,-1);
  &_temp02 -= sp_y(1,-1);
  
  if (&_temp01 < 0)
  {
    if (&_temp02 < 0)
    {
      sp_dir(&save_x,3);
      if (&_temp01 < &_temp02)
      {
        sp_dir(1,4);
        kill_this_task();
      }
      sp_dir(1,8);
      kill_this_task();
    }
    sp_dir(&save_x,9);
    &_temp02 * -1;
    if (&_temp01 < &_temp02)
    {
      sp_dir(1,4);
      kill_this_task();
    }
    sp_dir(1,2);
    kill_this_task();
  }
  
  if (&_temp02 < 0)
  {
    sp_dir(&save_x,1);
    &_temp02 * -1;
    if (&_temp01 > &_temp02)
    {
      sp_dir(1,6);
      kill_this_task();
    }
    sp_dir(1,8);
    kill_this_task();
  }
  sp_dir(&save_x,7);
  if (&_temp01 > &_temp02)
  {
    sp_dir(1,6);
    kill_this_task();
  }
  sp_dir(1,2);
  kill_this_task();
}

