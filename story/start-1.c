//for start button

void main( void )
{
    int &crap;
}

void buttonon( void )
{
    sp_pframe(&current_sprite, 2);
    playsound(9, 22050, 0, &current_sprite, 0);
    int &punchhit = create_sprite(76, 401, 0, 102, 1);
    sp_seq(&punchhit, 102);
}

void buttonoff( void )
{
    sp_nodraw(&punchhit, 1);
    sp_active(&punchhit, 0);
    sp_pframe(&current_sprite, 1);
    Playsound(8, 8000, 0, &current_sprite, 0);
}

void click ( void )
{
    //lets start a new game
    Say_xy("`%Please wait. (Creating new game)", 0, 394);
    wait(1);

    //This is where you would change the room Dink starts in!!
//     &player_map = 768;
    &player_map = 768
    
    //This is where you would change the location Dink is going to show up
    //on this first screen...
//     sp_x(1, 370);
//     sp_y(1, 460);
     
    sp_x(1, 370);
    sp_y(1, 460);
    //Change dink from a mouse pointer into a human being. :)
    sp_base_walk(1, 70);
    sp_base_attack(1, 100);
    set_mode(2); //turn game on
    reset_timer();
    sp_dir(1, 8);
    sp_brain(1, 1);
    sp_que(1, 0);
    sp_noclip(1, 0);

    //Now, if you WANTED, you could set Dink's orininal variables so he
    //could start out with a little money & power if you want... Simply
    //comment out these lines if you want Dink to have nothing as far as
    //stats go when the game begins. Also, Dink starts with 10 LifeMax
    //(hit points).

    &strength = 5;
    &defense = 5;
    &magic = 15;
    &mana = 0;
    &gold = 0;
    sp_nodraw(1, 1);
    &lifemax = 15;
    &life = &lifemax;
    &level = 16;

    //lets give him fists to start out with, and arm him with the fists.
    add_item("item-fst",438, 1);
    &cur_weapon = 1;
    arm_weapon();

    //Clear the screen black in preparation for the first room of the game.
    fill_screen(0);

    //This turns on the "status bar" for the beginning of the game. If you
    //want to have an "intro", simply comment out the next two lines, then
    //do them both after your intro is over...


    //We're done, so let's kill this task & the game will begin!
    kill_this_task();
}
