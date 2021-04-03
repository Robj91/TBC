// 14 == first wizard(counterclockwise)
void main() 
void hit()
    if(&player_map == 14)
    {
        if(&sgchar == 0)//dink
        {
            say("Out of the way!", 1);
        }
        if(&sgchar == 1)//storm
        {
            say("`6Avada Kedavra!", 1);
        }
    }
void talk()
    if(&player_map == 14)
    {
        if(&sgchar == 0)//dink
        {
            say("This bed is in my way.", 1);
        }
        if(&sgchar == 1)//storm
        {
            say("`6Haphazardly left over here, just like all furniture.", 1);
        }
    }
void push() 
    if(&player_map == 14)
    {
        if(&sgchar == 0)//dink
        {
            say("Outta the way!", 1);
        }
        if(&sgchar == 1)//storm
        {
            say("`6It won't budge. beds never do.", 1);
        }
    } 
