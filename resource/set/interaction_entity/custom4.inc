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
