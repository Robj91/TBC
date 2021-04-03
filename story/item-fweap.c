void use(void)
{
 if (sp_dir(1, -1) == 1)
    sp_dir(1, 2);
 if (sp_dir(1, -1) == 3)
    sp_dir(1, 2);
 if (sp_dir(1, -1) == 7)
    sp_dir(1, 8);
 if (sp_dir(1, -1) == 9)
    sp_dir(1, 8);

 &basehit = sp_dir(1, -1);
 &basehit += 860;
 sp_seq(1, &basehit);
 sp_frame(1, 1); 
 sp_kill_wait(1); 
 sp_nocontrol(1, 1); 
 wait(1);
 playsound(8, 8000,0,0,0);
}

void disarm(void)
{
 debug("Killed weapon");

 init("load_sequence_now graphics\people\peasant2\weapon\hit\c11a- 862 50");
 init("load_sequence_now graphics\people\peasant2\weapon\hit\c11a- 864 50");
 init("load_sequence_now graphics\people\peasant2\weapon\hit\c11a- 866 50");
 init("load_sequence_now graphics\people\peasant2\weapon\hit\c11a- 868 50");
 init("load_sequence_now graphics\people\peasant2\weapon\hit\c11a- 860 50");

 kill_this_task();
}

void arm(void)
{
 sp_attack_hit_sound(1, 0);

 debug("weapon armed");


 int &basehit;
}

void pickup(void)
{
 Debug("Player now owns this item.");
 kill_this_task();
}

void drop(void)
{
 Debug("Item dropped.");
 kill_this_task();
}
