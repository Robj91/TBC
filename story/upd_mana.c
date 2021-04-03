void main(void)
{
 if (&sgchar == 1)
 {
  if(&mana > 100)
  {
   &mana = 100;
  }

  if(&manastop == 1)
  {
   return;
  }

  int &old = get_sprite_with_this_brain(41,0);
  if(&old > 0)
  {
   loop:
   sp_active(&old, 0);
   &old = get_sprite_with_this_brain(41,0);
   if(&old > 0)
   {
    goto loop;
   }
  }
   
  int &big = &mana;
  &big /= 10;
  int &small = math_mod(&mana,10);
  int &pos = 302;
  int &manabar;
 
  if(&big > 0)
  {
   loop1:
   &manabar = create_sprite(&pos,448,41,850,1);
   sp_noclip(&manabar,1);
   sp_nohit(&manabar,1);
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
   sp_nohit(&manabar,1);
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

void cool(void)
{
 //&arg1 - old mana;
 if(&mana > 100)
 {
  &mana = 100;
 }
   
 &manastop = 1;
  
 if(&mana < &arg1)
 {
  say("`%MANA ERROR!!!",1);
  return;
 }
   
 int &pos = &arg1;
 int &manabar;
 int &fakemana = &arg1;
 &pos *= 2;
 &pos += 302;
 loop3:
 if(&fakemana < &mana)
 {
  &manabar = create_sprite(&pos,448,41,850,2);
  sp_noclip(&manabar,1);
  sp_nohit(&manabar,1);
  &pos += 2;
  &fakemana += 1;
  wait(50);
  goto loop3;
 }
 
 &manastop = 0;
 kill_this_task();
 }
}