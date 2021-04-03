void main(void)
{
 if (&story == 4)
 {
  freeze(1);
  sp_base_walk(&current_sprite, 410);
  sp_speed(&current_sprite, 2);
  sp_dir(&current_sprite, 6);
  int &girl = create_sprite(300, 262, 0, 339, 1);
  sp_base_walk(&girl, 330);
  sp_speed(&girl, 3);
  sp_dir(&girl, 8);
  if (&knight != 99)
  {
   int &knight = create_sprite(360, 262, 0, 287, 1);
   sp_base_walk(&knight, 280);
   sp_speed(&knight, 3);
   sp_timing(&knight, 33);
   sp_dir(&knight, 8);
  }
  wait(100);

  int &x = sp_x(1, -1);
  int &y = sp_y(1, -1);
  if (&x > 240)
  {
   if (&x < 440) move_stop(1, 6, 440, 1);
   if (&x > 440) move_stop(1, 4, 440, 1);
   move_stop(1, 8, 232, 1);
   sp_dir(1, 8);
   goto moveend;
  }
  if (&y < 232) move_stop(1, 2, 232, 1);
  if (&y > 232) move_stop(1, 8, 232, 1);
  if (&x < 440) move_stop(1, 6, 440, 1);
  if (&x > 440) move_stop(1, 4, 440, 1);
  sp_dir(1, 8);

 moveend:
  spawn("l1-bom"); 
  move_stop(&current_sprite, 6, 537, 1);
  move_stop(&current_sprite, 2, 197, 1); 
  sp_dir(&current_sprite, 8);
  wait(100);
  say_stop("Fire in the hole!", 1);
  wait(600);
  say_stop("`6Alright, we're good to go. Follow me.", &current_sprite);
  move_stop(&current_sprite, 4, 413, 1);
  move_stop(&current_sprite, 8, 43, 1);
  move(1, 8, 22, 1);
  move(&current_sprite, 8, -80, 1);
  move_stop(1, 8, 43, 1);
  if (&knight != 99)
  {
   move(&knight, 8, -80, 1);
  } 
  wait(50);
  move(&girl, 9, 425, 1); 
  move_stop(1, 8, -80, 1);
 }

 if (&story < 2) return;

 sp_brain(&current_sprite, 16);
}

void talk(void)
{
 freeze(1);
 freeze(&current_sprite);
 external("face", "face_each_other_dink");
 if (&story == 1)
 {
  say_stop("Hey Storm, have you made any progress yet?", 1);
  wait(200);
  say_stop("`6Not yet Dink, still working on it", &current_sprite);
 }
 &pause = 1;
 choice_start();
 set_y 240
 set_title_color 6
 title_start();
 "Storm turns to talk to you, innatentive of what you want to say. It is obvious there is something bothering him."
 title_end();
 "What am I supposed to be doing?"
 (&story == 1) "Why are you staring at that rock?"
 "Do you know what is causing all this havoc?"
 "Where should I look first?"
 (&knight == 1) "There's a guard dying to the west."
 (&knight == 2) "I found some elixir."
 (&knight == 3) "I got some elixir."
 (&guy == 1) "A slayer just chased someone north of Stonebrook."
 "leave"
 choice_end();
 &pause = 0;

   if (&result == 1)
   {
    say_stop("What am I supposed to be doing?", 1);
    wait(200);
    say_stop("`6You're supposed to be searching for any survivors around Stonebrook, Dink.", &current_sprite);
    wait(200);
    say_stop("Ah, now I remember.", 1);
    wait(200);
    say_stop("`6Well, you better get to it then", &current_sprite);
   }
   if (&result == 2)
   {
    say_stop("Why are you staring at that rock?", 1);
    wait(200);
    say_stop("`6I'm examining it to see how weak it is,", &current_sprite);
    say_stop("`6to see if there's a chance of getting rid of it somehow.", &current_sprite);
   }
   if (&result == 3)
   {
    say_stop("Do you know what's causing all this havoc?", 1);
    wait(200);
    say_stop("`6I have a hunch.... but I could be wrong", &current_sprite);
    say_stop("`6At least, I hope I'm wrong", &current_sprite);
    wait(200);
    say_stop("What's your 'hunch'?", 1);
    wait(200);
    say_stop("`6No time to talk about that now. Go look for surviors, Dink.", &current_sprite);
   }
   if (&result == 4)
   {
    say_stop("Where should I look first?", 1);
    wait(200);
    say_stop("`6Wherever you want Dink, just go look for survivors in and around Stonebrook", &current_sprite);
    say_stop("`6and help whoever you can.", &current_sprite);
    say_stop("`6Some people may have been coming this way from other towns, to escape the monsters", &current_sprite);
    wait(200);
    say_stop("I doubt there'd be much of the other towns left, the whole world's falling apart, piece by piece", 1);
    wait(200);
    say_stop("`6You're right, Dink. However, some people might have made it in time", &current_sprite);
    say_stop("`6If they did, they might need your help. You best get started with the searching", &current_sprite);
   }
   if (&result == 5)
   {
    say_stop("There's a guard dying to the west", 1);
    say_stop("I need to find a way to heal him.", 1);
    wait(200);
    say_stop("`6So you need something like elixir then.", &current_sprite);
    wait(200);
    say_stop("Where am I supposed to find elixir in Stonebrook?", 1);
    wait(200);
    say_stop("`6Well, elixir is usually kept in bottles.", &current_sprite);
    wait(200);
    say_stop("Right.", 1);
    sp_dir(1, 2);
    sp_dir(&current_sprite, 8);
    say_stop("Now where can I find some bottles to search through in Stonebrook?   Hmmmm...", 1); 
   }
   if (&result == 6)
   {
    say_stop("I found some elixir to heal the guard to the west, who's dying.", 1);
    wait(200);
    say_stop("`6Well what are you waiting for? Take it to him!", &current_sprite);
    wait(200);
    say_stop("I didn't grab it.... it's steal in Ethel's case full of liquor", 1);
    wait(200);
    say_stop("`6What the hell?! Are you out of your mind. Grab the damn elixir and take it to the guard!", &current_sprite);
    wait(200);
    say_stop("Yeh.... I probably should do that.", 1);
   }
   if (&result == 7)
   {
    say_stop("I got some elixir to heal the guard to the west, who's dying.", 1);
    wait(200);
    say_stop("`6Well you should hurry up and take it to him then, before it's too late!", &current_sprite); 
    wait(200);
    say_stop("Yeh... you're probably right.", 1);
   }
   if (&result == 8)
   {
    say_stop("A slayer just chased someone north of Stonebrook", 1);
    wait(200);
    say_stop("`6So.... you killed the slayer and helped him?", &current_sprite);
    wait(200);
    say_stop("No, he'll probably be dead in less than a minute.", 1);
    wait(200);
    say_stop("`6Then what the hell are you doing here?! Get into that forest and find him!", &current_sprite);
   }
 sp_dir(&current_sprite, 8);
 unfreeze(1);
 unfreeze(&current_sprite);
}

void hit(void)
{
 say("`6Ouch!  What the hell do you think you're doing, Dink?!", &current_sprite);
}
