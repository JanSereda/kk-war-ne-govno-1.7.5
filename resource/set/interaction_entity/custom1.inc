



{"2s7_pion"	  
	("Shilka_sound")	

	{on fire "gun" 
	     		{spawn "dust_shot_big_2" "basis"}
			{ani_play "fire"}
			{view start "flashbarrel_gun"}
			{view start "spawn_shell"}
	{delay 1
			{ani_play "reload"}}

	}	
}



{"saab_j39"
("air_multibarrel_launcher" weapon(ptur2) shooter(shooter)missile(aim-120c7) flashbarrel(shooter))				}

{"a4_skyhawk"
("air_multibarrel_launcher" weapon(ptur1) shooter(shooter_) missile(agm-65g) flashbarrel(shooter_))				}

{"su24_x59"
("air_multibarrel_launcher" weapon(ptur4) shooter(Shooter_x59_) missile(x59m) flashbarrel(Shooter_x59_))				
}
{"mig-21bis_x59"
("air_multibarrel_launcher" weapon(nar1) shooter(Shooter_0) missile(x59m) flashbarrel(Shooter_x59_))				
}		
{"su24_x31"
("air_multibarrel_launcher" weapon(ptur4) shooter(Shooter_r31_) missile(x31p) flashbarrel(Shooter_r31_))			
}	
{"su24_x25"
("air_multibarrel_launcher" weapon(ptur) shooter(shooter_) missile(x_25ml_su25_ammo) flashbarrel(shooter_))				
}
{"su24_agm88"
("air_multibarrel_launcher" weapon(ptur4) shooter(AGM-86-88_shooter_) missile(agm88) flashbarrel(AGM-86-88_shooter_))			
}
{"mig-21bis_agm88" 
("air_multibarrel_launcher" weapon(ptur2) shooter(Shooter_0) missile(x31p) flashbarrel(Shooter_r31_))					
}
{"harrier_support"
("air_multibarrel_launcher" weapon(ptur_agm) shooter(shooter_) missile(agm-65g) flashbarrel(shooter_))				}



{"m113a_ser"
	{On spawn
		{Delay 0.2
			{tex_mod "un"}
		}
	}
}
{"t34-85_ser"
	{On spawn
		{Delay 0.2
			{tex_mod "balkans"}
		}
	}
}
{"mig-21bis_harm"
	{On spawn
		{Delay 0.2
			{tex_mod "serb"}
		}
	}
}
{"mig-21bis_support"
	{On spawn
		{Delay 0.2
			{tex_mod "serb"}
		}
	}
}
{"mig-21bis_bomber"
	{On spawn
		{Delay 0.2
			{tex_mod "serb"}
		}
	}
}
{"mtlb_vmk_ogon"
	{On spawn
		{Delay 0.2
			{tex_mod "medic_ua"}
		}
	}
}