void main(void)
{
 if (&sgchar == 1)
 {
  sp_nodraw(&current_sprite, 1);
  sp_nohit(&current_sprite,1);
  &manastop = 0;
 
  if(&update_status == 0)
  {
   return;
  }
 
  int &manabar;
  //the empty bar
  &manabar = create_sprite(300,448,0,851,1);
  sp_noclip(&manabar,1);
  sp_que(&manabar, -1000);
 
  &manabar = create_sprite(324,448,0,851,2);
  sp_noclip(&manabar,1);
  sp_que(&manabar, -1000);
  &manabar = create_sprite(348,448,0,851,2);
  sp_noclip(&manabar,1);
  sp_que(&manabar, -1000);
  &manabar = create_sprite(372,448,0,851,2);
  sp_noclip(&manabar,1);
  sp_que(&manabar, -1000);
  &manabar = create_sprite(396,448,0,851,2);
  sp_noclip(&manabar,1);
  sp_que(&manabar, -1000);
  &manabar = create_sprite(420,448,0,851,2);
  sp_noclip(&manabar,1);
  sp_que(&manabar, -1000);
  &manabar = create_sprite(444,448,0,851,2);
  sp_noclip(&manabar,1);
  sp_que(&manabar, -1000);
  &manabar = create_sprite(468,448,0,851,2);
  sp_noclip(&manabar,1);
  sp_que(&manabar, -1000);
 
  &manabar = create_sprite(480,448,0,851,3);
  sp_noclip(&manabar,1);
  sp_que(&manabar, -1000);
 
   
  //the lines
  if(&mana > 100)
  {
   &mana = 100;
  }
  int &big = &mana;
  &big /= 10;
  int &small = math_mod(&mana,10);
  int &pos = 302;
 
  if(&big > 0)
  {
   loop1:
   &manabar = create_sprite(&pos,448,41,850,1);
   sp_noclip(&manabar,1);
   //sp_nohit(&manabar,1);
   &pos += 20;
   &big -= 1;
   if(&big > 0)
   {
    goto loop1;
   }
  }
   
  if(&small > 0)
  {
   loop2:
   &manabar = create_sprite(&pos,448,41,850,2);
   sp_noclip(&manabar,1);
   //sp_nohit(&manabar,1);
   &pos += 2;
   &small -= 1;
   if(&small > 0)
   {
    goto loop2;
   }
  }  
  kill_this_task();
 }
}



