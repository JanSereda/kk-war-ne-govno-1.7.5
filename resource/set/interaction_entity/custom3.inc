
{"osa_akm"
  	
	{on spawn			
	{add_view	 "flash_gun_big"	"shooter00"	"shooter00"}			
	{add_view	 "flash_gun_big"	"shooter01"	"shooter01"}
	{add_view	 "flash_gun_big"	"shooter02"	"shooter02"}			
	{add_view	 "flash_gun_big"	"shooter03"	"shooter03"}
	{add_view	 "flash_gun_big"	"shooter04"	"shooter04"}	{add_view	 "flash_gun_big"	"shooter05"	"shooter05"}	
	{add_view	 "startsmoke_big"	"shooter00"	"shooter00"}			
	{add_view	 "startsmoke_big"	"shooter01"	"shooter01"}
	{add_view	 "startsmoke_big"	"shooter02"	"shooter02"}			
	{add_view	 "startsmoke_big"	"shooter03"	"shooter03"}	
	{add_view	 "startsmoke_big"	"shooter04"	"shooter04"}
	{add_view	 "startsmoke_big"	"shooter05"	"shooter05"}
	}		
	{on fire "gun" 			
	(define "fire_barrel"				name "%0"					
	{delay 0.1 
	{spawn "osa_missile_carrier" "shooter%0"   x}
	}					
	{ani_play "fire"}					
	{view start "shooter%0"}					
	{delay 0.42						{view pause "shooter%0"}					
	}			
	)				
	{if    ("fire_barrel" args 00)				  else ("fire_barrel" args 01)				  else ("fire_barrel" args 02)				  else ("fire_barrel" args 03)				  else ("fire_barrel" args 04)				  else ("fire_barrel" args 05)				
	}		
	}	
}


{"tochka_y"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("9k72_sound")	  
}
{"fpv_drone"		
	{on "add_movement_sound" overload			
		{link_sound "engine_start"		"vehicle/airborne/small_UAV/small_UAV_start"		}			
		{link_sound "engine_work"		"vehicle/airborne/small_UAV/small_UAV_work"			}			
		{link_sound "engine_stop"		"vehicle/airborne/small_UAV/small_UAV_stop"			}		
	}		
	{on "link_flare_fx" overload}		
	{on "engine_on"			
		{if not "engine_started"				
			{set "engine_started" 1}				
			{play_sound "engine_start"}				
			{ani_play "engine_start" callback}			
		}		
	}		
	{on animation_end "engine_start"			
		{ani_play "engine_work" loop}			
		{play_sound "engine_work" 1}		
	}		                                                                           		                        		
	("loitering_munition" missilename(fpv_drone))	
}
{"fpv_drone"

	{on "specability"
		{if chassis "wheel"		
			{spawn "fpv_drone_ammo" "basis" x}
			{delete}
		}
	}
	{on "add_movement_sound" overload			
	{link_sound "engine_start"		"vehicle/airborne/small_UAV/small_UAV_start"}			
	{link_sound "engine_work"		"vehicle/airborne/small_UAV/small_UAV_work"}			
	{link_sound "engine_stop"		"vehicle/airborne/small_UAV/small_UAV_stop"	}	
				
	}				
}
{"fpv_drone120"		
	{on "add_movement_sound" overload			
		{link_sound "engine_start"		"vehicle/airborne/small_UAV/small_UAV_start"		}			
		{link_sound "engine_work"		"vehicle/airborne/small_UAV/small_UAV_work"			}			
		{link_sound "engine_stop"		"vehicle/airborne/small_UAV/small_UAV_stop"			}		
	}		
	{on "link_flare_fx" overload}		
	{on "engine_on"			
		{if not "engine_started"				
			{set "engine_started" 1}				
			{play_sound "engine_start"}				
			{ani_play "engine_start" callback}			
		}		
	}		
	{on animation_end "engine_start"			
		{ani_play "engine_work" loop}			
		{play_sound "engine_work" 1}		
	}		                                                                           		                        		
	("loitering_munition" missilename(fpv_drone120))	
}

{"cvadropoter"

{on "specability"
	{if chassis "wheel"		
		{spawn "cvadropoter_ammo" "basis" x}
		{delete}
	}
}

{on "add_movement_sound" overload			
{link_sound "engine_start"		"vehicle/airborne/small_UAV/small_UAV_start"	
}			
{link_sound "engine_work"		"vehicle/airborne/small_UAV/small_UAV_work"			
}			
{link_sound "engine_stop"		"vehicle/airborne/small_UAV/small_UAV_stop"			
}	
			
}					
}

{"fpv_drone_b_ammo"			{on "change"			{spawn "fpv_drone_ammo" "root" x}										{delete}		}	}	
{"fpv_drone_ammo"			{on "onThrow"	        {spawn "fpv_drone" 		"root" dir_velocity no_normal}					{delete}	    }	}	
{"fpv_drone120_b_ammo"		{on "change"			{spawn "fpv_drone120_ammo" "root" x}									{delete}		}	}	
{"fpv_drone120_ammo"		{on "onThrow"	        {spawn "fpv_drone120" "root" dir_velocity no_normal}					{delete}	    }	}	
{"cvadropoter_b_ammo"		{on "change"			{spawn "cvadropoter_ammo" "root" x}										{delete}		}	}	
{"cvadropoter_ammo"			{on "onThrow"	        {spawn "cvadropoter" "root" dir_velocity no_normal} 					{delete}	    }	}

{"maz_537g"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("9k72_sound")	  
}
{"maz_535v"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("9k72_sound")	  
}
{"bastion_01"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("Ural375_sound")	  
}
{"2c1_gvazdika"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("Shilka_sound")	  
}

{"2c5_giacint_c"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("Msta_sound")	  
}
{"2s7_pion"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("Msta_sound")	  
}

{"btr80_ukr_detal"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("btr80_sound")	  
}
{"btr80_ukr"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("btr80_sound")	  
}

{"btr80_tral-2"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("btr80_sound")	  
}

{"btr-4e1_whth_pt"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("btr80_sound")	  
}

{"btr-4e1"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("btr80_sound")	  
}

{"btr-4e"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("btr80_sound")	  
}

{"btr-3e_whth_pt"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("btr80_sound")	  
}
{"btr60pu"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("btr80_sound")	  
}
{"btr70m"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("btr80_sound")	  
}
{"2c1_gvazdika"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("Shilka_sound")	  
}
{"mtlbu"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("Shilka_sound")	  
}
{"bmd4a_cwsm"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("bmd_sound")	  
}
{"bmd_1ksh"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("bmd_sound")	  
}
{"ampv"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("abrams_sound")
}
{"sppz_luchs"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("btr80_sound")	  
}
{"wiesel_aa"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("bmd_sound")
}
{"acv-15_aapc"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("bmd_sound")
}
{"acv-15_ifv"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("bmd_sound")
}
{"acv-aa"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("abrams_sound")
}
{"acv-aapc"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("abrams_sound")
}

{"brem-1"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("T72_sound")
}
{"t80y_net"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("T80_sound")
}
{"t-64b_ukr"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("T62_sound")
}
{"t64-55"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("T62_sound")
}

{"m60tsabra"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("abrams_sound")
}


{"begleitpanzer_57"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("marder_sound")
}
{"marder_vts1"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("marder_sound")
}
{"asu57"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("bmd_sound")
}

{"bwp1m_puma30"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("bmp1_sound")
}

{"m901ITV"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("m113_sound")
}




{"rosomak_rak"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("boxer_sound")
}

{"ito_90m"
	{on spawn
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke"}
		{add_view	"exhaust_dark_small"	"exhaust"		"FXsmoke1"}
	}
	("tpz_sound")
}



