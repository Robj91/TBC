void talk(void)
{
 if (&player_map == 736) say("`6No.. I'm not gonna sleep in some random's bed", 1);
 if (&player_map == 672) say("`6It's Dink's bed..", 1);
}

void hit(void)
{
 if (&player_map == 736) say("`6I'll break you into pieces!", 1);
 if (&player_map == 672) say("`6Dink's bed must suffer!", 1);
}