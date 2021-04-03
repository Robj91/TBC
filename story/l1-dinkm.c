void main(void)
{
 if (&stormy == 5)
 {
  freeze(1);
  &stormy = 6;
  int &dinkm = create_sprite(432, 64, 0, 76, 1);
  sp_base_walk(&dinkm, 70);
  sp_speed(&dinkm, 2);
  sp_timing(&dinkm, 0);
  sp_brain(&dinkm, 0);
  move(&dinkm, 4, 370, 1);
  wait(200);
  move_stop(1, 8, 364, 1);
  say("`6Dink!", 1);
  wait(350);
  move_stop(&dinkm, 2, 199, 1);
  say_stop("Hey Storm, how did you get over there?", &dinkm);
  wait(200);
  say_stop("`6I found a secret path in Stonebrook forest", 1);
  wait(200);
  say_stop("Ah....  Did you find a path to Martridge's house?", &dinkm); 
  wait(200);
  say_stop("`6Nope, I found some bombs though.", 1);
  wait(200);
  say_stop("Great! We can use them to blow up the rock blocking the way!", &dinkm);
  wait(200);
  say_stop("`6Yep! I'm on my way back now", 1);
  wait(200);
  say_Stop("Be careful.. there's monsters appearing everywhere.. I have no idea where they are coming from", &dinkm);
  wait(200);
  say_stop("`6Dink.. I think it's part of a terrible curse..", 1);
  wait(200);
  say_stop("What curse?", &dinkm);
  wait(200);
  say_stop("`6It doesn't matter for now.. I'm still trying to make sense of it, and I hope I'm wrong", 1);
  say_stop("`6Just.. be careful", 1);
  wait(200);
  say_stop("Well, it's like they are just appearing everywhere..", &dinkm);
  say_stop("I just killed some more slayers near stonebrook forest..", &dinkm);
  say_stop("Hurry back and be careful! I'll starting fighting my way towards you from my end", &dinkm);
  wait(200);
  say_stop("`6Alright.. I'm on my way.", 1);
  move(&dinkm, 8, -100, 1);
  unfreeze(1);
 }
}