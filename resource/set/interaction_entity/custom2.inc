{"toyota_hilux_dshkm"
	{on spawn
		{call "rand_tex"}	
	}
	{on "rand_tex"	
				(define "rand_tex" 
						{if rand %r1
							{delay 0.05 
								{tex_mod "%r2"}	
							}
						}
				)	
("rand_tex" r1(0.25) r2(hamas1))	
("rand_tex" r1(0.25) r2(hamas2))	
("rand_tex" r1(0.10) r2(un))
("rand_tex" r1(0.15) r2(red2))
("rand_tex" r1(0.15) r2(5))

("rand_tex" r1(0.15) r2(2))

	}
	
}
{"toyota_hilux_spg9"
	{on spawn
		{call "rand_tex"}	
	}
	{on "rand_tex"	
				(define "rand_tex" 
						{if rand %r1
							{delay 0.05 
								{tex_mod "%r2"}	
							}
						}
				)	
("rand_tex" r1(0.25) r2(hamas1))	
("rand_tex" r1(0.25) r2(hamas2))	
("rand_tex" r1(0.10) r2(un))
("rand_tex" r1(0.15) r2(red2))
("rand_tex" r1(0.15) r2(5))

("rand_tex" r1(0.15) r2(2))

	}
	
}
{"toyota_hilux_ammo"
	{on spawn
		{call "rand_tex"}	
	}
	{on "rand_tex"	
				(define "rand_tex" 
						{if rand %r1
							{delay 0.05 
								{tex_mod "%r2"}	
							}
						}
				)	
("rand_tex" r1(0.25) r2(hamas1))	
("rand_tex" r1(0.25) r2(hamas2))	
("rand_tex" r1(0.10) r2(un))
("rand_tex" r1(0.15) r2(red2))
("rand_tex" r1(0.15) r2(5))

("rand_tex" r1(0.15) r2(2))

	}
	
}
{"toyota_hilux_tow"
	{on spawn
		{call "rand_tex"}	
	}
	{on "rand_tex"	
				(define "rand_tex" 
						{if rand %r1
							{delay 0.05 
								{tex_mod "%r2"}	
							}
						}
				)	
("rand_tex" r1(0.25) r2(hamas1))	
("rand_tex" r1(0.25) r2(hamas2))	
("rand_tex" r1(0.10) r2(un))
("rand_tex" r1(0.15) r2(red2))
("rand_tex" r1(0.15) r2(5))
("rand_tex" r1(0.15) r2(ter))
("rand_tex" r1(0.15) r2(2))

	}
	
}

{"btr-4"	
	("atgm_multi_launcher"
		weapon(gun2)
		foresight(foresight6)
		tail(foresight6)
	)
}
{"ptur_konkurs_2"	
	("atgm_single_launcher"
		weapon(gun)
		foresight(foresight1)
		tail(foresight1)
	)
}
{"milan_stan_2"	
	("atgm_single_launcher"
		weapon(gun)
		foresight(foresight1)
		tail(foresight1)
	)
}
{"toyota_hilux_tow"	
	("atgm_single_launcher"
		weapon(gun)
		foresight(foresight1)
		tail(foresight1)
	)
}
{"shershen_d_stan_4"	
	("atgm_multi_launcher"
		weapon(gun)
		foresight(foresight1)
		tail(foresight1)
	)
}
{"brdm2grom"	
	("atgm_single_launcher"
		weapon(gun2)
		foresight(foresight2)
		tail(foresight2)
	)
}
	
{"hj8_stan_2"	
	("atgm_single_launcher"
		weapon(gun)
		foresight(foresight1)
		tail(foresight1)
	)
}
{"tank_avlb"
	("abrams_sound")
	{on "specability" 
		{ani_play "close" 0.1} 
                {delay 40
		{spawn "qm" "qiao" x}
                {delay 0.1
		{bone hide "Mesh08"}
		{bone cut "qiao"}}
                {delay 5
		{ani_play "close" -0.4} }}          
 	}
}
{"t-64b_ser"
	("T64_sound")
	("2a46_type_gun")
}



{"chapparal"
	("m113_sound")	  	
	{on spawn			
	{add_view	 "flash_gun_big"	"shooter00"	"shooter00"}			
	{add_view	 "flash_gun_big"	"shooter01"	"shooter01"}
	{add_view	 "flash_gun_big"	"shooter02"	"shooter02"}			
	{add_view	 "flash_gun_big"	"shooter03"	"shooter03"}
	
	{add_view	 "startsmoke_big"	"shooter00"	"shooter00"}			
	{add_view	 "startsmoke_big"	"shooter01"	"shooter01"}
	{add_view	 "startsmoke_big"	"shooter02"	"shooter02"}			
	{add_view	 "startsmoke_big"	"shooter03"	"shooter03"}	
	}		
	{on fire "gun2" 			
	(define "fire_barrel"				name "%0"					
	{delay 0.1 
	{spawn "aim-9l_carrier" "shooter%0"   x}
	}					
	{ani_play "fire"}					
	{view start "shooter%0"}					
	{delay 0.42						{view pause "shooter%0"}					
	}			
	)				
	{if    ("fire_barrel" args 00)				  else ("fire_barrel" args 01)				  else ("fire_barrel" args 02)				  else ("fire_barrel" args 03)				 			
	}		
	}	
	}	


{"hawk"
	("m113_sound")	  	
	{on spawn			
	{add_view	 "flash_gun_big"	"shooter00"	"shooter00"}			
	{add_view	 "flash_gun_big"	"shooter01"	"shooter01"}
	{add_view	 "flash_gun_big"	"shooter02"	"shooter02"}			
	
	{add_view	 "startsmoke_big"	"shooter00"	"shooter00"}			
	{add_view	 "startsmoke_big"	"shooter01"	"shooter01"}
	{add_view	 "startsmoke_big"	"shooter02"	"shooter02"}			 	
	}		
	{on fire "ptur1" 			
	(define "fire_barrel"				name "%0"					
	{delay 0.1 
	{spawn "mim23b_ihawk_carrier" "shooter%0"   x}
	}					
	{ani_play "fire"}					
	{view start "shooter%0"}					
	{delay 0.42						{view pause "shooter%0"}					
	}			
	)				
	{if    ("fire_barrel" args 00)				  else ("fire_barrel" args 01)				  else ("fire_barrel" args 02)				 			
	}		
	}	
	}	




{"s125x2"
	("Ural375_sound")	  	
	{on spawn			
	{add_view	 "flash_gun_big"	"shooter00"	"shooter00"}			
	{add_view	 "flash_gun_big"	"shooter01"	"shooter01"}			
	
	{add_view	 "startsmoke_big"	"shooter00"	"shooter00"}			
	{add_view	 "startsmoke_big"	"shooter01"	"shooter01"}		 	
	}		
	{on fire "gun2" 			
	(define "fire_barrel"				name "%0"					
	{delay 0.1 
	{spawn "s125_carrier" "shooter%0"   x}
	}					
	{ani_play "fire"}					
	{view start "shooter%0"}					
	{delay 0.42						{view pause "shooter%0"}					
	}			
	)				
	{if    ("fire_barrel" args 00)				  else ("fire_barrel" args 01)				 			
	}		
	}	
	}	


{"s125x4"	  	
	{on spawn			
	{add_view	 "flash_gun_big"	"shooter00"	"shooter00"}			
	{add_view	 "flash_gun_big"	"shooter01"	"shooter01"}
	{add_view	 "flash_gun_big"	"shooter02"	"shooter02"}			
	{add_view	 "flash_gun_big"	"shooter03"	"shooter03"}
	
	{add_view	 "startsmoke_big"	"shooter00"	"shooter00"}			
	{add_view	 "startsmoke_big"	"shooter01"	"shooter01"}
	{add_view	 "startsmoke_big"	"shooter02"	"shooter02"}			
	{add_view	 "startsmoke_big"	"shooter03"	"shooter03"}	
	}		
	{on fire "gun2" 			
	(define "fire_barrel"				name "%0"					
	{delay 0.1 
	{spawn "s125_carrier" "shooter%0"   x}
	}					
	{ani_play "fire"}					
	{view start "shooter%0"}					
	{delay 0.42						{view pause "shooter%0"}					
	}			
	)				
	{if    ("fire_barrel" args 00)				  else ("fire_barrel" args 01)				  else ("fire_barrel" args 02)				  else ("fire_barrel" args 03)				 			
	}		
	}	
	}	




{"s75"	  			
	{on fire "gun2" 			
	{spawn "s75_carrier" "shooter00"   x}				
	}	
	}	

;fpv drone


{"fpv_drone"

{on "specability"
	{if chassis "wheel"		
		{spawn "fpv_drone_ammo" "basis" x}
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

	
{"fpv_drone_b_ammo"		{on "change"			{spawn "fpv_drone_ammo" "root" x}			{delete}		}	}	
{"fpv_drone_ammo"		{on "onThrow"	             				{spawn "fpv_drone" "root" dir_velocity no_normal}				{delete}	    		}	}