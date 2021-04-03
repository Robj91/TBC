//main.c run when dink is started

void main()
{

 //Needed globals

  make_global_int("&exp",0);
  make_global_int("&strength", 1);
  make_global_int("&defense", 0);
  make_global_int("&cur_weapon", 0);
  make_global_int("&cur_magic", 0);
  make_global_int("&gold", 0);
  make_global_int("&magic", 0);
  make_global_int("&magic_level", 0);
  make_global_int("&vision", 0);
  make_global_int("&result", 0);
  make_global_int("&lifemax", 10); 
  make_global_int("&life", 10);
  make_global_int("&level", 1);
  make_global_int("&player_map", 0);
  make_global_int("&last_text", 0);
  make_global_int("&update_status", 0);
  make_global_int("&missile_target", 0);
  make_global_int("&missle_source", 0);
  make_global_int("&enemy_sprite", 0);
  make_global_int("&magic_cost", 0);
  make_global_int("&mana", 0);
  make_global_int("&manastop", 0);
  make_global_int("&save_x", 0);
  make_global_int("&save_y", 0);

 //Globals to store which character is in play
  make_global_int("&sgchar", 1);


 //intro and story variables
  make_global_int("&coml", 0);
  make_global_int("&story", 0);
  make_global_int("&stormy", 0);
  make_global_int("&intro", 0);
  
 //other variables
  make_global_int("&hghero", 0);
  make_global_int("&hdhero", 0);
  make_global_int("&height", 0);
  make_global_int("&pause", 0);
  make_global_int("&timer", 0);
  make_global_int("&bowlore", 1);
  make_global_int("&csave", 1);  

 //Temphold variables
 make_global_int("&temphold", 0); 
 make_global_int("&temp2hold", 0);
 make_global_int("&chartemp", 0);
 make_global_int("&scrtemp", 0);
 
 //Item variables
 make_global_int("&hmbom", 0);

 //Level 1 - Stonebroke
 make_global_int("&knight", 0);
 make_global_int("&guy", 0);

 &csave = 1;

//Now we're done... Dink knows to run START.C automatically next....

    debug("Dink started. Time to <Your Dmod Name Goes Here>");
    kill_this_task();
}
