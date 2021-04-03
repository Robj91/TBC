void use(void)
{
 if (&mana < 5)
 {
  say("`6Not enough mana", 1);
  return;
 }

 &mydir = sp_dir(1, -1);

 if (sp_dir(1, -1) == 1)
    sp_dir(1, 4);
 if (sp_dir(1, -1) == 3)
    sp_dir(1, 6);
 if (sp_dir(1, -1) == 7)
    sp_dir(1, 4);
 if (sp_dir(1, -1) == 9)
    sp_dir(1, 6);

 if (&sgchar == 0)
 {
  &basehit = sp_dir(1, -1);
  &basehit += 320;

  sp_seq(1, &basehit);
  sp_frame(1, 1); //reset seq to 1st frame
  sp_kill_wait(1); //make sure dink will punch right away
  sp_nocontrol(1, 1); //dink can't move until anim is done!
 }
 &magic_level = 0;
 draw_status();
 &mholdx = sp_x(1, -1);
 &mholdy = sp_y(1, -1);

 wait(100);

 if (&mydir == 1)
 {
  &mholdx -= 30;
  &junk = create_sprite(&mholdx, &mholdy, 11, 163, 1);
  sp_seq(&junk, 163); 
  sp_mx(&junk, -6);
  sp_my(&junk, +2);
 }




 if (&mydir == 4)
 {
  &mholdx -= 30;
  &junk = create_sprite(&mholdx, &mholdy, 11, 163, 1);
  sp_seq(&junk, 163); 
  sp_dir(&junk, 4);
 }

 if (&mydir == 6)
 { 
  &mholdx += 30;
  &junk = create_sprite(&mholdx, &mholdy, 11, 163, 1);
  sp_seq(&junk, 163); 
  sp_dir(&junk, 6);
 }

 if (&mydir == 3)
 {
  &mholdx += 30;
  &junk = create_sprite(&mholdx, &mholdy, 11, 163, 1);
  sp_seq(&junk, 163); 
  sp_mx(&junk, +6);
  sp_my(&junk, +2);
 }




 if (&mydir == 2)
 {
  &junk = create_sprite(&mholdx, &mholdy, 11, 163, 1);
  sp_seq(&junk, 163); 
  sp_dir(&junk, 2);
 }

 if (&mydir == 7)
 {
  &mholdx -= 30;
  &junk = create_sprite(&mholdx, &mholdy, 11, 163, 1);
  sp_seq(&junk, 163); 
  sp_mx(&junk, -6);
  sp_my(&junk, -2);
 }


 if (&mydir == 8)
 {
  &junk = create_sprite(&mholdx, &mholdy, 11, 163, 1);
  sp_seq(&junk, 163); 
  sp_dir(&junk, 8);
 }

 if (&mydir == 9)
 {
  &mholdx += 30;
  &junk = create_sprite(&mholdx, &mholdy, 11, 163, 1);
  sp_seq(&junk, 163); 
  sp_mx(&junk, +6);
  sp_my(&junk, -2);
 }

 playsound(17, 3000,0,&junk,0);

 &mydir = &magic;
 &mydir -= 7;

 sp_timing(&junk, 0);
 sp_speed(&junk, 6);
 sp_strength(&junk, &mydir);
 sp_range(&junk, 10);
 sp_flying(&junk, 1);
 sp_script(&junk, "dam-ice");
 &mshadow = create_sprite(&mholdx, &mholdy, 15, 432, 3);
 sp_brain_parm(&mshadow, &junk);
 sp_que(&mshadow, -500);

 sp_brain_parm(&junk, 1);
 sp_brain_parm2(&junk, &mshadow);

 &mana -= 5;
 external("upd_mana", "main");

 unfreeze(1);
}

void disarm(void)
{
 &magic_cost = 0;
 kill_this_task();
}

void arm(void)
{
 Debug("Preloading ice");

 int &basehit;
 int &mholdx;
 int &mholdy;
 int &junk;
 int &mshadow;
 int &mydir;
 &magic_cost = 0;
 preload_seq(163);
 preload_seq(94);
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


