void main(void)
{
 sp_nodraw(&current_sprite, 1);


  sp_nohit(&current_sprite,1);
  &manastop = 0;
  int &manabar;
  int &manaico
  //the empty bar

  &manaico = create_sprite(255, 453, 0, 466, 1);
  sp_size(&manaico, 85);
  sp_pseq(&manaico, 466);
  sp_pframe(&manaico, 1);
  sp_noclip(&manaico, 1);
  sp_que(&manaico, -1000);
 

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



