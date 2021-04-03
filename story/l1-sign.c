void talk(void)
{
 if (&player_map == 701) 
 {
     freeze(1)
     say_stop("`%Continue South, and you will evidently come upon the small village of Stonebrook", &current_sprite);
     say_stop("`%Home of the notorious Dink Smallwood, saviour of the world; Goodheart.", &current_sprite);
     say_stop("`%Yours, the signwritter :}", &current_sprite);
     unfreeze(1)
 }
 
 if (&player_map == 637) 
 {
     freeze(1)
     say_stop("`%This is quite obviously a forest, since it is directly north of Stonebrook", &current_sprite);
     say_stop("`%a very inventive mind decided to call it North Stonebrook Forest.", &current_sprite);
     unfreeze(1)
 }
}
