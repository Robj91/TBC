void talk()
    if(&player_map == SOMETHING)
    {
        if(&sgchar == 0)//dink
        {
            say("Im drowning! help! this carpet is killing me!", 1);
        }
        if(&sgchar == 1)//storm
        {
            say("`6This carpet makes me feel im in quicksand", 1);
        }
    }
void hit()
    if(&player_map == SOMETHING)
    {
        if(&sgchar == 0)//dink
        {
            say("SOFT THINGS MUST DIE!", 1);
        }
        if(&sgchar == 1)//storm
        {
            say("`6Maybe I can make the carpet less obstrosive... nah, impossible.", 1);
        }
    }
