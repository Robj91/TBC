void main(void)
{
 if (&sgchar == 1)
 {
  int &girl = &current_sprite;
  script_attach(0);
  sp_script(&girl, "l1-girlp2");
  kill_this_task();
 }

 sp_brain(&current_sprite, 16);
 sp_base_walk(&current_sprite, 330);
 sp_speed(&current_sprite, 1);
 sp_timing(&current_sprite, 33);
}

void talk(void)
{
 if (&sgchar == 0)
 {
  freeze(1);
  freeze(&current_sprite);
  external("face", "face_each_other_dink");
  say_stop("How are you holding up, Chealse", 1);
  wait(200);
  say_stop("`5Fine, for now.", &current_sprite); 
  &pause = 1;
  choice_start();
  set_y 240
  set_title_color 5
  title_start();
  "Chealse looks at you with a fearful look on her face, and then tries to hide it with a smile."
  title_end();
  "Where did that Bonca come from?"
  "Do you know of any other survivors?"
  (&vision == 3) "Do you know where Storm went?"
  "leave"
  choice_end();
  &pause = 0;

    if (&result == 1)
    {
     say_stop("Where did that Bonca come from?", 1);
     wait(200);
     say_stop("`5I'm not exactly sure.", &current_sprite);
     say_stop("`5I was looking at the ducks just outside of the town.", &current_sprite);
     say_stop("`5And all of a sudden a Bonca started chasing me", &current_sprite);
     say_Stop("`5It came from the west. It could have come from Goodheart, or up in the hills.", &current_sprite);
     say_stop("`5I thought you got rid of the monsters at the source, over a year ago.", &current_sprite);
     wait(200);
     say_stop("I did. Obviosly something, or someone is behind the re-appearance of them.", 1);
     wait(200);
     say_Stop("`5Well I hope you can save us all again, Dink.", &current_sprite);
    }
    if (&result == 2)
    {
     say_Stop("Do you know of any survivors?", 1);
     wait(200);
     say_stop("`5No Dink. I was too busy running from that Bonca to worry about other survivors!", &current_sprite);
     wait(200);
     say_stop("Ah", 1);
    }
    if (&result == 3)
    {
     say_stop("Do you know where Storm went?", 1);
     wait(200);
     say_stop("`5He said he's gone to find a another path to Martridge's house, whoever that is.", &current_sprite);
     wait(200);
     say_stop("Ah... ok. I'm gonna go look for him.", 1);
     wait(200);
     say_stop("`5Ok", &current_sprite);
    }
  unfreeze(1);
  unfreeze(&current_sprite);
 }
}

void hit(void)
{
 say("`5Not again!", &current_sprite);
 playsound(50, 22050, 0, &current_sprite, 0);
}



