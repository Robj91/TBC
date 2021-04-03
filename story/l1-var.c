void main(void)
{
 sp_nodraw(&current_sprite, 1);
 if (&sgchar == 0) sp_active(&current_sprite, 0);

 if (&sgchar == 1)
 {
  if (&stormy == 3)
  {
   int &bvar = sp_editor_num(&current_sprite);
   editor_type(&bvar, 0);
   int &l1var = editor_seq(&bvar, -1);

   if (&l1var == 1) return;
  
   int &getk = 0;
   freeze(1);
   &getk = get_next_sprite_with_ths_brain(16, 0, &getk);
   freeze(&getk);
   wait(400);
   int &x = sp_x(1, -1);
   int &y = sp_y(1, -1);
   
   if (&x >= 600) 
   {
    if (&y >= 34)
    {
     move_stop(1, 2, 80, 1);
     move_stop(1, 8, 80, 2);
     move_stop(1, 4, 477, 1);
     goto cont;
    }
    if (&y < 34)
    {
     move_stop(1, 4, 340, 1);
     move_stop(1, 2, 35, 1);
     goto cont;
    }
   }
   if (&y <= 34)
   {
    move_stop(1, 4, 340, 1);
    move_stop(1, 6, 340, 1);
    move_stop(1, 2, 35, 1);
    goto cont;
   }
   if (&x <= 53)
   {
    if (&y >= 75)
    {
     move_stop(1, 2, 80, 1);
     move_stop(1, 8, 80, 1);
     move_stop(1, 6, 115, 1);
     goto cont;
    }
    if (&y < 75)
    {
     move_stop(1, 6, 340, 1);
     move_stop(1, 2, 35, 1);
     goto cont;
    }
   }
  
   wait(200);
   say_stop("`!What the...   what happened here?", &getk);
   wait(200);
   say_stop("`6The ground under this house collapsed.. it crushed these people..", 1);
   wait(200);
   say_stop("`!This is.. horrible..", &getk);
   wait(200);
   say_stop("`6I know. At the moment all we can do is keep doing what we're trying to do.", 1);
   say_stop("`6The quicker we find a way onward, the better.", 1);
   wait(200);
   say_stop("`!Roger that.. I'm right behind you..", &getk);
   &l1var = 1;
   editor_seq(&bvar, &l1var);
   unfreeze(&getk);
   unfreeze(1);
  }
 }
}
   
 