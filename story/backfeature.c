//something = the back of something stone.
void hit()
    if(&player_map == something)
    {
        if(&sgchar == 0)//dink
        {
            say("HOW DARE YOU!", 1);
        }
        if(&sgchar == 1)//storm
        {
            say("`6DIE! featureless stone! ", 1);
        }
    }
void talk()
    if(&player_map == something)
    {
        if(&sgchar == 0)//dink
        {
            say("This building is turning it's back to me!", 1);
        }
        if(&sgchar == 1)//storm
        {
            say("`6This looks like stone... ", 1);
        }
    }
void push() 
    if(&player_map == something)
    {
        if(&sgchar == 0)//dink
        {
            say("GRRRR...", 1);
        }
        if(&sgchar == 1)//storm
        {
            say("`6Yep, stone.", 1);
        }
    }
 
