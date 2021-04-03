void talk(void)
{
 if (&sgchar == 0)
 {
  freeze(1);
  say_stop("This is the exact same table that was in my old home.", 1);
  say_stop("It's the only thing I have left to remember my mother.", 1);
  say_stop("It's not much, but it's all I have", 1);
  unfreeze(1);
 }
 if (&sgchar == 1) say("`6Dink's table.", 1);
}

void hit(void)
{
 if (&sgchar == 0) say("Eat my fist, table!", 1);

 if (&sgchar == 1) say("`6Eat my scythe, table!", 1);
}
