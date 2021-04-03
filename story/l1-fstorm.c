void main(void)
{
 if (&story == 1)
 {
  if (&knight >= 5)
  {
   if (&guy >= 2)
   {
    freeze(1);
    wait(1);
    int &x = sp_x(1, -1);
    int &y = sp_y(1, -1);
    int &storm = create_sprite(278, 450, 0, 417, 1);
    sp_base_walk(&storm, 410);
    sp_speed(&storm, 2);
    move_stop(&storm, 8, 365, 1);
    wait(200);
    if (&x < 199) move_stop(1, 6, 199, 1);
    if (&x > 199) move_stop(1, 4, 199, 1);
    move_stop(1, 2, 201, 1);
    say_stop("`6Dink!", &storm);
    wait(200);
     say_stop("Hey Storm, how did you get over there?", 1);
    wait(200);
    say_stop("`6I found a secret path in Stonebrook forest", &storm);
    wait(200);
    say_stop("Ah....  Did you find a path to Martridge's house?", 1);
    wait(200);
    say_stop("`6Nope, I found some bombs though.", &storm);
    wait(200);
    say_Stop("Great! We can use them to blow up the rock blocking the way!", 1);
    wait(200);
    say_stop("`6Yep. How are you doing?", &storm);
    wait(200);
    if (&knight == 99) say_stop("Fine. I helped all the people I could find, but a knight died because I didn't help him in time.", 1);
    if (&guy == 99) say_stop("Fine. I helped all the people I could find, but a traveller died because I didn't help him in time.", 1);  
    if (&knight == 100)
    {
     if (&guy == 100) say_stop("Fine. I helped all the people I could find", 1);
    }   
    wait(200);
    say_stop("`6Ah. I'm doing alright too, I'm out of mana though", &storm);
    say_stop("`6But I'm on my way back there now.", &storm);
    wait(200);
    say("Ok, sounds good", 1);
    wait(500);
    int &slay = create_sprite(162, 450, 0, 647, 1);
    sp_base_walk(&slay, 640);
    sp_speed(&slay, 2);
    playmidi("8.mid");
    wait(250);
    move_stop(&slay, 8, 369, 1);
    wait(80);
    sp_dir(&storm, 4);
    wait(100);
    move_stop(&storm, 6, 370, 1);
    sp_dir(&storm, 4);
    say("`6I'm out of mana. I can't fight a slayer without magic!", &storm);
    move_stop(&slay, 8, 369, 1);
    move_stop(&slay, 6, 262, 1);
    say_stop("Storm, run back here NOW! I'm gonna come and help you, hold on. I'm on my way now.", 1);
    move(&slay, 6, 370, 1);
    move_stop(&storm, 2, 500, 1);
    move_stop(&slay, 6, 370, 1);
    move(&slay, 2, 500, 1);
    move_stop(1, 8, 100, 1);
    sp_dir(1, 2);
    say_stop("I have to find out where this secret path is in Stonebrook forest, and fast!", 1);
    sp_nodraw(&slay, 1);
    sp_nodraw(&storm, 1);
    sp_active(&slay, 0);
    sp_active(&storm, 0);
    &story = 2;
    spawn("l1-timer3");
    turn_midi_off();
    unfreeze(1);
   }
  }
 }
}
 

   
 