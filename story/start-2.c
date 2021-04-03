//for continue button

void main( void )
{
    int &crap;
}

void buttonon( void )
{
    sp_pframe(&current_sprite, 2);
    playsound(17, 8000, 0, &junk, 0);
    int &dinkhit = create_sprite(314, 401, 0, 322, 1);
    sp_seq(&dinkhit, 322);
}

void buttonoff( void )
{   
    sp_nodraw(&dinkhit, 1);
    sp_active(&dinkhit, 0);
    sp_pframe(&current_sprite, 1);
    playsound(24, 22050, 0, &current_sprite, 0);
}

void load( void )
{
    Playsound(18,22050,0,0,0);
        choice_start();
        "&savegameinfo"
        "&savegameinfo"
        "&savegameinfo"
        "&savegameinfo" 
        "&savegameinfo" 
        "&savegameinfo" 
        "&savegameinfo" 
        "&savegameinfo" 
        "&savegameinfo" 
        "&savegameinfo" 
        "Nevermind"
        choice_end();

if (&result == 11)
   return;

if (game_exist(&result) == 0)
    return;


    stopmidi();
    stopcd();
     sp_active(1, 1);
   sp_x(1, 334);
   sp_y(1, 161);
   sp_base_walk(1, 70);
   sp_base_attack(1, 100);
    sp_dir(1, 4);
    sp_brain(1, 1);
    sp_que(1, 0);
    sp_noclip(1, 0);
    set_mode(2);
   //script now can't die when the load is preformed..
    load_game(&result);
    kill_this_task();
}

void click ( void )
{
    sp_brain(1, 0);
    load();
    sp_brain(1, 13);
    if (&result != 11)
    Say_xy("`%Trying to cheat me, huh?", 0, 386);
}
