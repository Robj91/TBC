void talk(void)
{
 int &x = sp_x(&current_sprite, -1);
 if (&x < 320)
 {
  freeze(1);
  choice_start();
  set_y 240
  title_start();
  "These books are not very organised... there are a few interesting one in here, and one written about Dink."
  title_end();
  "The Story of Dink Smallwood"
  "Stonebrook"
  "The Royal Guards"
  "The Mysteries of Magic"  
  "Leave"
  choice_end();

    if (&result == 1)
    {
     say_stop("`%Dink Smallwood, a great hero and gifted adventurer started out as a pig farmer", &current_sprite);
     say_Stop("`%But not just any ordinary pig farmer, a pig farmer with big dreams", &current_sprite);
     say_stop("`%To travel the world and be one of the greatest adventurers that ever lived.", &current_sprite);
     say_stop("`%Shortly after Dink Smallwood's house was destroyed by a fire", &current_sprite);
     say_stop("`%He set out to Terris, where his dreams would begin to turn into reality", &current_sprite);
     say_stop("`%Although some events that lead to his adventuring were extremely devastating,", &current_sprite);
     say_stop("`%The timing couldn't have been better.", &current_sprite);
     say_Stop("`%Monsters had appeared near Edge of The World, pushing their way down towards Goodheart", &current_sprite);
     say_stop("`%And other towns. It was discovered later that the Dark Lands seemed to be the origin", &current_sprite);
     say_stop("`%So King Daniels best knight - Milder, travelled into the Dark Lands", &current_sprite);
     say_stop("`%In attempt to stop the monsters once and for all.", &current_sprite);
     say_stop("`%Whilst Dink was saving Windemere and Joppa Isle, Milder ventured further into the Dark Lands", &current_sprite);
     say_stop("`%Shortly after he was declared missing,", &current_sprite);
     say_stop("`%This was around the time that Dink Smallwood was becoming very famous for his good deeds.", &current_sprite);
     say_stop("`%Dink Smallwood visited King Daniel and asked permission to rescue Milder.", &current_sprite);
     say_stop("`%Knowing that the task was extremely dangerous, he too ventured into the Dark Lands", &current_sprite);
     say_stop("`%To look for Milder.", &current_sprite);
     say_stop("`%He finally found Milder, severly injured but healable", &current_sprite);
     say_stop("`%But before Dink could get him out of there, Seth appeared", &current_sprite);
     say_stop("`%This surprised Dink, as he was expecting The rogue group know as The Cast", &current_sprite);
     say_stop("`%To be behind all the evil doings, but apparently they were only a front. Seth was pure evil.", &current_sprite);
     say_stop("`%Seth brutally murdered Milder with enjoyment, he truly was a twisted evil abomination", &current_sprite);
     say_stop("`%Dink Smallwood went all out, attacking Seth with every bit of strength he had", &current_sprite);
     say_stop("`%Until at last, he destroyed Seth utterly.", &current_sprite);
     say_stop("`%Shortly after, Dink Smallwood was known all over the world as the bravest hero alive", &current_sprite);
     say_stop("`%Still to this day, he is the most famous adventurer for his time.", &current_sprite);
     say_stop("`%He now works for King Daniel, as his most trusted knight", &current_sprite);
     say_stop("`%And he promised that he would never let anything happen to the world", &current_sprite);
     wait(200);
     say_stop("`6Well-kept promise there, Smallwood..", 1);
    }
    if (&result == 2)
    {
     say_stop("`%Stonebrook is one of the smallest villages in the world", &current_sprite);
     say_stop("`%Many people who have visited have come to say that it is a peaceful and quiet place to live", &current_sprite);
     say_stop("`%Although there have never been any plans to expand Stonebrook,", &current_sprite);
     say_stop("`%an addition was added over the past year - Stonebrook Forest", &current_sprite);
     say_stop("`%Alot of the trees were cleared to add a clear path to allow people to walk through.", &current_sprite);
     say_stop("`%Stonebrook Forest can be found directly to the north of Stonebrook", &current_sprite);
    }
    if (&result == 3)
    {
     say_stop("`%The Royal Guards of Goodheart serve to protect this land.", &current_sprite);
     say_stop("`%King Daniel only employs the best men who are willing to do whatever it takes to", &current_sprite);
     say_stop("`%Protect this world and Goodheart Castle, even if it means putting their life on the line.", &current_sprite);
     say_stop("`%Guards are sent where they are needed.", &current_sprite);
     say_stop("`%Less experienced guards protect the smaller towns, while the more skilled protect bigger places", &current_sprite);
     say_stop("`%Only the best guards get the honour of protecting Goodheart Castle itself", &current_sprite);
     say_stop("`%The best of the best - Dink Smallwood, is employed by King Daniel to", &current_sprite);
     say_Stop("`%handle issues that are much to dangerous for anyone else.", &current_sprite);
    }
    if (&result == 4)
    {
     say_stop("`%To many people in this world, magc doesn't exist", &current_sprite);
     say_stop("`%These people believe that such a supernatural ability must be impossible", &current_sprite);
     say_stop("`%However, there are rumours of a select few people in this world with magical abilities", &current_sprite);
     say_stop("`%Some moreso than others.", &current_sprite);
     say_stop("`%The history behind magic is not well known, and is too vague to explain accurately", &current_sprite);
     say_stop("`%but it is said some people have been tricked into thinking they have magical abilities", &current_sprite);
     say_Stop("`%When really it is just a true wizard transferring their own magical powers to an ordinary person", &current_sprite);
     say_stop("`%It is said they do this to show people that magic is real.", &current_sprite);
     say_stop("`%Some wizards don't like the fact that they have a rare talent", &current_sprite);
     say_stop("`%that everyone dubs as unrealistic, imaginary and impossible.", &current_sprite);
     say_stop("`%It is rumoured that if a person does not truly have magical abilities", &current_sprite);
     say_stop("`%And a true wizard transfers some of their own powers to that person", &current_sprite);
     say_stop("`%It will eventually wear off", &current_sprite);
     say_stop("`%And the person will be left with just the ability to understand magic", &current_sprite); 
     say_Stop("`%But not fully grasp every aspect, and therefore they can no longer", &current_sprite);
     say_stop("`%commit a spell to memory.", &current_sprite);
     wait(200);
     say_stop("`6I'm sure it won't be long now before Dink completely loses his ability for magic, as well...", 1);
    }
  unfreeze(1);
 }
 if (&x > 320)
 { 
  say("`6Nothing interesting here...", 1);
 }
}

void hit(void)
{
 say("`6I'll harvest thee!", 1);
}