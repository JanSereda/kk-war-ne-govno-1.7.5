{"2c1_rus"
	{on spawn			
		{add_view	"smoke_zenit" 	"zenite_smoke"	"foresight1"}
		{add_view 	"smoke_ejector" "zenite_smoke" 	"foresight1"}					
 	}

	{on fire "gun"
		{spawn "canon_gaub_fire" "Foresight1" x}
		{spawn "proj_probe" "Fs1" x}
		{spawn "proj_probe" "Fs2" x}
		{spawn "dust_shot_big" "basis"}
		{view start "smoke_add"}
		{delay 0.16 "shell_off"
			{view start "zenite_smoke"}
			{view pause "smoke_add"}
			{view pause "flashbarrel_gun"}
			{delay 5	
				{view pause "zenite_smoke"}
			}
		}
  		{delay 1
   			{ani_play "lyk" 1  }
  		}
  		{delay 2.5
   			{ani_play "shell_tank" callback}
  		}
	}

	{on animation_end "shell_tank"
  		{spawn "shell_cannon" "fx_gilza" x scale 2
			{impulse up 0.1 0.1 dir 4 0  cz 0.3 0.3 com }
			{add_view "smoke_zenit" "smoke_shell" "fx_shellsmoke"}
			{view start "smoke_shell"}
			{delay_effect 3 1 "stop"}
			{delay 3 0.5
				{hide 10}
			}
		}
	}
}
{"2c1"
	{on spawn			
		{add_view	"smoke_zenit" 	"zenite_smoke"	"foresight1"}
		{add_view 	"smoke_ejector" "zenite_smoke" 	"foresight1"}					
 	}

	{on fire "gun"
		{spawn "canon_gaub_fire" "Foresight1" x}
		{spawn "proj_probe" "Fs1" x}
		{spawn "proj_probe" "Fs2" x}
		{spawn "dust_shot_big" "basis"}
		{view start "smoke_add"}
		{delay 0.16 "shell_off"
			{view start "zenite_smoke"}
			{view pause "smoke_add"}
			{view pause "flashbarrel_gun"}
			{delay 5	
				{view pause "zenite_smoke"}
			}
		}
  		{delay 1
   			{ani_play "lyk" 1  }
  		}
  		{delay 2.5
   			{ani_play "shell_tank" callback}
  		}
	}

	{on animation_end "shell_tank"
  		{spawn "shell_cannon" "fx_gilza" x scale 2
			{impulse up 0.1 0.1 dir 4 0  cz 0.3 0.3 com }
			{add_view "smoke_zenit" "smoke_shell" "fx_shellsmoke"}
			{view start "smoke_shell"}
			{delay_effect 3 1 "stop"}
			{delay 3 0.5
				{hide 10}
			}
		}
	}
}
{"rm70"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("Ural375_sound")	  
}
{"vlkv_t813"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("Ural375_sound")	  
}
{"vlkv_t815_art"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("Ural375_sound")	  
}
{"4310kamaz_shtab"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("Kamaz_sound")	  
}
{"4310kamaz_tral"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("Kamaz_sound")	  
}
{"4310_fuel"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("Kamaz_sound")	  
}
{"pancir-sm"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("Kamaz_sound")	  
}

{"gaz_66"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("gaz66_sound")	  
}
{"gaz_66_med"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("gaz66_sound")	  
}
{"gaz_66_radio"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("gaz66_sound")	  
}
{"gaz69"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("gaz66_sound")	  
}
{"gazon_sadko"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("gaz66_sound")	  
}
{"gazon_sadko_ammo"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("gaz66_sound")	  
}

{"zil131"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("Ural4320_sound")	  
}
{"zil131_k"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("Ural4320_sound")	  
}
{"zil157"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("Ural375_sound")	  
}
{"zil157rem"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("Ural375_sound")	  
}
{"233115ambulance"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("gaz66_sound")	  
}
{"iveco_lmv"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("gaz66_sound")	  
}
{"uaz469"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("uaz_sound")	  
}

{"hmmwv_isis"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("hmmwv_sound")	  
}
{"us_m998"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("hmmwv_sound")	  
}
{"us_m998_cargo"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("hmmwv_sound")	  
}
{"us_m998_dshkm"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("hmmwv_sound")	  
}
{"kraz_coguar_pkm"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("hmmwv_sound")	  
}
{"kraz_coguar_hcb"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("hmmwv_sound")	  
}
{"kraz_spartan_dshk"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("hmmwv_sound")	  
}
{"dozor-b_1"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("gaz66_sound")	  
}
{"kraz_255"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("Ural4320_sound")	  
}
{"kraz_260"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("Ural4320_sound")	  
}
{"kraz_kolchuga"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("Ural4320_sound")	  
}
{"kraz_6322"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("Ural4320_sound")	  
}
{"kraz_6322_art"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("Ural4320_sound")	  
}
{"kraz_6322_eng"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("Ural4320_sound")	  	  
}
{"kraz_6322_fuel"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("Ural4320_sound")	  	  
}
{"m142"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("m939_sound")	  	  
}
{"fmtv"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("m939_sound")	  	  
}
{"fmtv_ammo_art"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("m939_sound")	  	  
}

;-----------------------------------trenches/foxholes
{"spawner_trench_bighole"
			{on spawn
					{delay 0.2
				{spawn "spheredust_norm" "basis"}
				{spawn "trench_low2" "trench1" x }
			}
		}
}
{"spawner_trench_deep"
			{on spawn
					{delay 0.2
				{spawn "spheredust_norm" "basis"}
				{spawn "trench_sit_2" "trench1" x }
			}
		}
}
{"spawner_trench_low"
			{on spawn
					{delay 0.2
				{spawn "spheredust_norm" "basis"}
				{spawn "trench_lie_1" "trench1" x }
			}
		}
}
{"spawner_trench_long"
		{on spawn
			{delay 0.2
				{spawn "spheredust_norm" "basis"}
				{spawn "trench_low" "trench1" x }
				{spawn "trench_low_exit" "trench2" x }
				{spawn "trench_low_exit" "trench3" x }
			}
		}
}
{"spawner_trench_cannon"
        {on spawn
                {delay 0.2
                        {spawn "spheredust_norm" "basis"}
                        {if terrain_fx "country_road"	
                                {spawn "trench1_can_pos" "trench1" x {tex_morph "ground" 0.1}}
                                ;{spawn "trench1_exit" "trench2" x {tex_morph "ground" 0.1}}
                        else terrain_fx "snow"
                                {spawn "trench1_can_pos" "trench1" x {tex_morph "win1" 0.1}}
                                ;{spawn "trench1_exit" "trench2" x {tex_morph "win1" 0.1}}
                        else terrain_fx "sand"
                                {spawn "trench1_can_pos" "trench1" x {tex_morph "sand" 0.1}}
                                ;{spawn "trench1_exit" "trench2" x {tex_morph "sand" 0.1}}
                        else terrain_fx "grass"
                                {spawn "trench1_can_pos" "trench1" x {tex_morph "grass" 0.1}}
                                ;{spawn "trench1_exit" "trench2" x {tex_morph "grass" 0.1}}
                        else terrain_fx "ground"
                                {spawn "trench1_can_pos" "trench1" x {tex_morph "ground" 0.1}}
                                ;{spawn "trench1_exit" "trench2" x {tex_morph "ground" 0.1}}
                        else
                                {spawn "trench1_can_pos" "trench1" x {tex_morph "ground" 0.1}}
                                ;{spawn "trench1_exit" "trench2" x {tex_morph "ground" 0.1}}
                        }
                }
        }
}
{"spawner_trench_bunker"
        {on spawn
                {delay 0.2
                        {spawn "spheredust_norm" "basis"}
                        {if terrain_fx "country_road"	
                                {spawn "dzot_5" "trench1" x {tex_morph "ground" 0.1}}
                                {spawn "trench_ground_exit2_1_5" "trench2" x {tex_morph "ground" 0.1}}
                        else terrain_fx "snow"
                                {spawn "dzot_5" "trench1" x {tex_morph "snow" 0.1}}
                                {spawn "trench_ground_exit2_1_5" "trench2" x {tex_morph "snow" 0.1}}
                        else terrain_fx "sand"
                                {spawn "dzot_5" "trench1" x {tex_morph "sand" 0.1}}
                                {spawn "trench_ground_exit2_1_5" "trench2" x {tex_morph "sand" 0.1}}
                        else terrain_fx "grass"
                                {spawn "dzot_5" "trench1" x {tex_morph "grass" 0.1}}
                                {spawn "trench_ground_exit2_1_5" "trench2" x {tex_morph "grass" 0.1}}
                        else terrain_fx "ground"
                                {spawn "dzot_5" "trench1" x {tex_morph "ground" 0.1}}
                                {spawn "trench_ground_exit2_1_5" "trench2" x {tex_morph "ground" 0.1}}
                        else
                                {spawn "dzot_5" "trench1" x {tex_morph "ground" 0.1}}
                                {spawn "trench_ground_exit2_1_5" "trench2" x {tex_morph "ground" 0.1}}
                        }
                }
        }
}
{"spawner_trench_long_deep"
        {on spawn
                {delay 0.2
                        {spawn "spheredust_norm" "basis"}
                        {if terrain_fx "country_road"	
                                {spawn "trench1_sack" "trench1" x {tex_morph "ground" 0.1}}
                                {spawn "trench1_sack_exit" "trench2" x {tex_morph "ground" 0.1}}
                                {spawn "trench1_sack_exit" "trench3" x {tex_morph "ground" 0.1}}
                        else terrain_fx "snow"
                                {spawn "trench1_sack" "trench1" x {tex_morph "snow" 0.1}}
                                {spawn "trench1_sack_exit" "trench2" x {tex_morph "snow" 0.1}}
                                {spawn "trench1_sack_exit" "trench3" x {tex_morph "snow" 0.1}}
                        else terrain_fx "sand"
                                {spawn "trench1_sack" "trench1" x {tex_morph "sand" 0.1}}
                                {spawn "trench1_sack_exit" "trench2" x {tex_morph "sand" 0.1}}
                                {spawn "trench1_sack_exit" "trench3" x {tex_morph "sand" 0.1}}
                        else terrain_fx "grass"
                                {spawn "trench1_sack" "trench1" x {tex_morph "grass" 0.1}}
                                {spawn "trench1_sack_exit" "trench2" x {tex_morph "grass" 0.1}}
                                {spawn "trench1_sack_exit" "trench3" x {tex_morph "grass" 0.1}}
                        else terrain_fx "ground"
                                {spawn "trench1_sack" "trench1" x {tex_morph "ground" 0.1}}
                                {spawn "trench1_sack_exit" "trench2" x {tex_morph "ground" 0.1}}
                                {spawn "trench1_sack_exit" "trench3" x {tex_morph "ground" 0.1}}
                        else
                                {spawn "trench1_sack" "trench1" x {tex_morph "ground" 0.1}}
                                {spawn "trench1_sack_exit" "trench2" x {tex_morph "ground" 0.1}}
                                {spawn "trench1_sack_exit" "trench3" x {tex_morph "ground" 0.1}}
                        }
                }
        }
}
;-----------------------------------------------------------------------------
