//screen 149 is the fishing set.
//screen 14 is the food replicator.
// 22 is the shrine
// 59 is the 'here there be no treasure' sign


void main()
{
}

void talk()
{
    if(&player_map == 149)
    {
        if(&sgchar == 0)
        {
            say("Who in the world leaves a good fishing rod unnatended?", 1);
        }
        if(&sgchar == 1)
        {
            say("`6Just randomly left in here. I wonder who cares not enough to leave this here.", 1);
        }
    }


    if(&player_map == 14)
    {
        if(&sgchar == 0)
        {
            say("Sparkles!", 1);
        }
        if(&sgchar == 1)
        {
            say("`6I just hope this doesn't have anything to do with me.", 1);
        }
    }
    
    
    if(&player_map == 22)
    {
        if(&sgchar == 0)
        {
            say("Seems like there are no buttons to be pressed here.", 1);
        }
        if(&sgchar == 1)
        {
            say("`6A shrine, perhaps the family of a deseased built this in their memory.", 1);
        }
    }
        if(&player_map == 59)
    {
        if(&sgchar == 0)
        {
            say("`%RARK! Here there be na tres're for ya!", &current_sprite);
        }
        if(&sgchar == 1)
        {
            say("`%RARK! Here there be na tres're for ya!", &current_sprite);
        }
    }
}

void push()
{
    if(&player_map == 149)
    {
        if(&sgchar == 0)
        {
            say("None left standing!", 1);
        }
        if(&sgchar == 1)
        {
            say("`6It is staked to the ground.", 1);
        }
    }
        if(&player_map == 14)
    {
        if(&sgchar == 0)
        {
            say("I dont want to go in there!", 1);
        }
        if(&sgchar == 1)
        {
            say("`6Woooo. cool.", 1);
        }
    }
            if(&player_map == 22)
    {
        if(&sgchar == 0)
        {
            say("nope, I can't push it either.", 1);
        }
        if(&sgchar == 1)
        {
            say("`6Rest in peace.", 1);
        }
    }
        if(&player_map == 59)
    {
        if(&sgchar == 0)
        {
            say("Then don't speak to me!", &current_sprite);
        }
        if(&sgchar == 1)
        {
            say("`6Why am I suddenly suspiscious?", &current_sprite);
        }
    }
}

void hit()
{
    if(&player_map == 149)
    {
        if(&sgchar == 0)
        {
            say("Begone! Useless thing someone thought would look nice in here!", 1);
        }
        if(&sgchar == 1)
        {
            say("`6Save the fish!", 1);
        }
    }    
        if(&player_map == 14)
    {
        if(&sgchar == 0)
        {
            say("DIE! strange machine that I have never seen before", 1);
        }
        if(&sgchar == 1)
        {
            say("`6Im reaping your magic!", 1);
        }
    }   
            if(&player_map == 22)
    {
        if(&sgchar == 0)
        {
            say("BEGONE! useless piece of decoration!", 1);
        }
        if(&sgchar == 1)
        {
            say("`6Rest in pieces!", 1);
        }
    }   
        if(&player_map == 59)
    {
        if(&sgchar == 0)
        {
            say("RARK?", &current_sprite);
        }
        if(&sgchar == 1)
        {
            say("`6Take this! you rark!", &current_sprite);
        }
    }
}
