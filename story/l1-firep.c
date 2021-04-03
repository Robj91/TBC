void talk(void)
{
 if (&sgchar == 0)
 {
  freeze(1);
  say_stop("This is my fireplace, some people say I'm over cautious with it though.", 1);
  say_Stop("I just don't have that much trust in it,", 1);
  say_stop("Since the fireplace could have been what caused my old home to burn.", 1);
  unfreeze(1);
 }
 if (&sgchar == 1) say("`6Ah.. it's nice and warm..", 1);
}

void hit(void)
{
 if (&sgchar == 0) say("Ouch!", 1);

 if (&sgchar == 1) say("`6Sure, let's try and set fire to my only weapon.. that'll help a lot.", 1);
}