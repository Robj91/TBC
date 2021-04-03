//for quit button

void main( void )
{
    int &crap;
}

void buttonon( void )
{
    sp_pframe(&current_sprite, 2);
    playsound(54, 22050, 0, &current_sprite, 0);
    int &seth = create_sprite(560, 401, 6, 580, 1);
    sp_seq(&seth, 580);
}

void buttonoff( void )
{
    sp_active(&seth, 0);
    sp_pframe(&current_sprite, 1);
    playsound(31, 4000, 0, &current_sprite, 0);
}

void click(void)
}
    Playsound(17,22050,0,0,0);
    kill_game();
}
