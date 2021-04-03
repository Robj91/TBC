void main(void)
{
 if (&stormy >= 2)
 {
  &vision = 1;
  if (&stormy == 2)
  {
   int &dinkm = create_sprite(213, 146, 0, 76, 1);
   sp_base_walk(&dinkm, 70);
   sp_speed(&dinkm, 2);
   sp_timing(&dinkm, 33);
   sp_brain(&dinkm, 16);
   sp_script(&dinkm, "l1-dinkm");
  }
 }  
 if (&guy == 1)
 {
  &guy = 100;
  freeze(1);
  int &guy = create_sprite(191, 100, 0, 371, 1);
  sp_base_walk(&guy, 370);
  sp_speed(&guy, 2);
  int &slay = create_sprite(200, 180, 0, 647, 1);
  sp_base_walk(&slay, 640);
  sp_speed(&slay, 2);
  move(&slay, 8, 135, 1);
  wait(100);
  say_stop("HEY!!", 1);
  move_stop(&slay, 8, 135, 1);
  move_stop(&slay, 2, 145, 1);
  wait(200);
  say_stop("Hey stranger, are you ok?", 1);
  wait(200);
  say_stop("`2Dink Smallwood... Seth wants you dead", &guy);
  wait(200);
  say_stop("What the hell are you talking about?  ....Seth is dead.", 1);
  wait(200);
  say_stop("`2Seth is more alive then he has ever been, and he wants you dead", &guy);
  move_stop(&slay, 6, 225, 1);
  move_stop(&slay, 2, 177, 1);
  move_stop(&guy, 2, 177, 1);
  wait(50);
  say_stop("What the hell are you doing? get away from it.", 1);
  wait(200);
  say_stop("`2Why would I want to do that?", &guy);
  wait(200);
  say_stop("It'll kill you!", 1);
  wait(200);
  say_stop("`2The only one that is going to die around here is you, Dink Smallwood.", &guy);
  say_stop("`2In the name of Seth, we will destroy you!", &guy);
  playsound(24, 22052, 0, &guy, 0); 
  playmidi("7.mid"); 
  int &explo = create_sprite(191, 177, 7, 167, 1);
  sp_seq(&explo, 167);
  sp_pseq(&guy, 632);
  sp_frame(&guy, 1);
  sp_base_walk(&guy, 640);
  sp_script(&guy, "l1-boss");
  sp_script(&slay, "l1-boss");
  say("`2Prepare to die!", &guy);
  say("I it'd be a good idea to equip my light sword right about now!", 1);
  unfreeze(1);
 }
}
 
  