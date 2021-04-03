void talk(void)
{
 if (&sgchar == 0) say("Well, well, what have we got here? ", 1);

 if (&sgchar == 1) say("`6I never actually knew there was a tunnel under this well, until today", 1);
}

void hit(void)
{
 if (&sgchar == 0) say("Water is for nubs!", 1);

 if (&sgchar == 1) say("`6Well, eat this!", 1);
}