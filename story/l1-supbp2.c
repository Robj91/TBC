void talk(void)
{
 if (&player_map == 704) say("`6I suppose this holds up the roof, I also suppose it isn't helping my quest at all.", 1);
 if (&player_map == 736) say("`6Maybe staring at inanimate objects will somehow complete my quest!", 1);
}

void hit(void)
{
 if (&player_map == 704) say("`6Burn Dink's house down! ... with lemons", 1);
 if (&player_map == 736) say("`6I'll kill you!", 1);
}