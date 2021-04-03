//Script for multiple objects
void talk(void)
{
 int &types = sp_pseq(&current_sprite, -1);
 int &typef = sp_pframe(&current_sprite, -1);
 int &types2 = sp_seq(&current_sprite, -1);
 int &typef2 = sp_seq(&current_sprite, -1);

 if (&player_map == 257)
 {
  if (&intro >= 4)
  {
   if (&types == 95)
   {
    if (&typef == 1)
    {
     say("`6There's no way the slayer will get through this", 1);
    }
   }
  }
 }

 if (&player_map == 385)
 {
  if (&intro >= 4)
  {
   if (&types == 89)
   {
    if (&typef == 13)
    {
     say("`6I think I should climb this ladder before the slayer kills me", 1);
    }
    if (&typef == 12)
    {
     say("`6I should climb up here before the slayer gets me", 1);
    }
   }
  }
 }

 if (&player_map == 353)
 {
  if (&types == 95)
  {
   if (&typef == 4)
   {
    say("`6It's a rock.", 1);
   }
   if (&typef == 9)
   {
    say("`6No.. I don't talk to inanimate objects", 1);
   }
   if (&typef == 2)
   {
    say("`6Hello rock!", 1);
   }
  }
  if (&types == 93)
  {
   if (&typef == 4)
   {
    say("`6This rock is blocking the way", 1);
   }
  }
  if (&types == 90)
  {
   if (&typef == 7)
   {
    say("`6better not touch this stuff", 1);
   }
   if (&typef == 8)
   {
    say("`6better not touch this stuff", 1);
   }
   if (&typef == 9)
   {
    say("`6better not touch this stuff", 1);
   }
   if (&typef == 10)
   {
    say("`6better not touch this stuff", 1);
   }
  }
  if (&types == 82)
  {
   if (&typef == 1)
   {
    say("`6I can't talk to a pole", 1);
   }
  }
 }
 if (&player_map == 258)
 {
  if (&types == 345)
  {
   if (&typef == 1)
   { 
    say("`6This guy must have been attacked by something.", 1);
   }
  }
 }
 if (&player_map == 293)
 {
  if (&types == 375)
  {
   if (&typef == 1)
   {
    say("`6Looks like this guy got crushed by that rock", 1);
   }
  }
 }
}

void push(void)
{
 int &types = sp_pseq(&current_sprite, -1);
 int &typef = sp_pframe(&current_sprite, -1);

 if (&player_map == 257)
 {
  if (&intro >= 4)
  {
   if (&types == 95)
   {
    if (&typef == 1)
    {
     say("`6Oh sure, let's push the rock and get slaughtered by a slayer.", 1);
    }
   }
  }
 }

 if (&player_map == 353)
 {
  if (&types == 95)
  {
   if (&typef == 4)
   {
    say("`6I don't need to move this rock", 1);
   }
   if (&typef == 9)
   {
    say("`6There's no point moving this rock", 1);
   }
   if (&typef == 2)
   {
    say("`6It won't move.", 1);
   }
  }
  if (&types == 93)
  {
   if (&typef == 4)
   {
    say("`6It's stuck.", 1);
   }
  }
 }

 if (&player_map == 322)
 {
  if (&types == 95)
  {
   if (&typef == 4)
   {
    say("`6It won't move", 1);
   }
  }
 }

 if (&player_map == 321)
 {
  if (&types == 95)
  {
   if (&typef == 7)
   {
    say("`6It won't move.", 1);
   }
  }
 }
}

void hit(void)
{
 int &types = sp_pseq(&current_sprite, -1);
 int &typef = sp_pframe(&current_sprite, -1);

 if (&player_map == 257)
 {
  if (&intro >= 4)
  {
   if (&types == 95)
   {
    if (&typef == 1)
    {
     say("`6Die, rock that is stopping me from getting killed by a slayer!", 1);
    }
   }
  }
 }
 if (&player_map == 385)
 {
  if (&intro >= 4)
  {
   if (&types == 89)
   {
    if (&typef == 13)
    {
     say("`6Die, stupid ladder!", 1);
    }
    if (&typef == 12)
    {
     say("`6I hate ladders!", 1);
    }
   }
  }
 }
 if (&player_map == 353)
 {
  if (&types == 95)
  {
   if (&typef == 4)
   {
    say("`6Die rock!", 1);
   }
   if (&typef == 9)
   {
    say("`6These rocks don't break", 1);
   }
   if (&typef == 2)
   {
    say("`6Stupid rock!", 1);
   }
  }
  if (&types == 93)
  {
   if (&typef == 4)
   {
    say("`6Stupid rock, blocking the way!", 1);
   }
  }
 }

 if (&player_map == 322)
 {
  if (&types == 95)
  {
   if (&typef == 4)
   {
    say("`6Die, stupid rock!", 1);
   }
  }
 }

 if (&player_map == 321)
 {
  if (&types == 95)
  {
   if (&typef == 7)
   {
    say("`6Die, stupid rock that is blocking the way!", 1);
   }
  }
 }
}





  

