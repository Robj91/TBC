//screen 14 is the first wizzard house(counterclockwise)
void main() 
void talk()
    if(&player_map == 14)
    {
        if(&sgchar == 0)//dink
        {
            say("How thoughtful, to place a table right here.", 1);
        }
        if(&sgchar == 1)//storm
        {
            say("`6This doesn't make the place any more useful.", 1);
        }
    }
void hit()
    if(&player_map == 14)
    {s
        if(&sgchar == 0)//dink
        {
            say("Begone!", 1);
        }
        if(&sgchar == 1)//storm
        {
            say("`6Yeah, im reaping tables now.", 1);
        }
    }
void push() 
    if(&player_map == 14)
    {
        if(&sgchar == 0)//dink
        {
            say("Get out of the way!", 1);
        }
        if(&sgchar == 1)//storm
        {
            say("`6Im too old to do this.", 1);
        }
    }
