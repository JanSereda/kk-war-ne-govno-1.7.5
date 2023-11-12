	(include "/properties/cannon.ext")
	(include "/properties/shadow/tank.inc"  scale(0.5))
	{props "vehicle" "m777" "cannon" "heavy" "wheeled" "vision_lev04_can" "round_sandbag2" "trailer"}
	{PatherId "cannon.large"}
	("armor_heavy")

	{volume "body"
		{tags "body"}
		{component "body"}
	}
	{volume "gun_rot"
		{tags "gun"}
		{component "gun"}
	}
	{Volume "gun_rot1"
		{tags "gun"}
		{component "gun"}
	}
	{Volume "gun_rot2"
		{tags "gun"}
		{component "gun"}
	}
	{Volume "turret1"
		{tags "turret"}
		{component "turret"}
	}
	{Volume "turret2"
		{tags "turret"}
		{component "turret"}
	}

	{boarder
		{anm "gunner"
			{forward	{end "pose_kpvt_charger" 10}}
		}
		{anm "commander"
			{forward	{end "pose_pak40_gunlayer" 10}}
		}
		{anm "charger"
			{forward	{end "pose_pak40_charger" 10}}
		}
		{anm "charger2"
			{forward	{end "pose_m8_charger" 10}}
		}
		{anm "driver1"
			{forward {end "cannon_pak40_pusher_right" 10}}
		}
		{anm "driver2"
			{forward {end "cannon_pak40_pusher_left" 10}}
		}
		{anm "driver3"
			{forward {end "cannon_pak40_pusher_left" 10}}
		}
		{anm "driver4"
			{forward {end "cannon_pak40_pusher_right" 10}}
		}
		{anm "seat1"
			{forward {end "pose_seat_cannon_right" 10}}
		}
		{anm "seat2"
			{forward {end "pose_seat_cannon_left" 10}}
		}
		{anm "seat3"
			{forward {end "pose_seat_cannon1_left" 10}}
		}
		{anm "seat4"
			{forward {end "pose_seat_cannon1_right" 10}}
		}
	}	
	
	
	(define "crew_human"
	{placer
		{place "%place"
			{group "%place"} {linkbone "%bone"}
		}
	}
	{boarder
		{door "%door"}
		{link "%door" "%place" {anm "%animation"} {forward putoff} {reverse puton}}
	}
    )

	("crew_human" place(gunner)		bone(gunner)	door(emit1) animation(gunner))
	("crew_human" place(commander)	bone(commander)	door(emit2) animation(commander))
	("crew_human" place(charger3)	bone(charger)	door(emit3) animation(charger))
	("crew_human" place(charger4)	bone(charger2)	door(emit4) animation(charger2))
	
	("crew_human" place(driver1) bone(driver1) door(emit1) animation(driver1))
	("crew_human" place(driver2) bone(driver2) door(emit2) animation(driver2))
	("crew_human" place(driver3) bone(driver3) door(emit3) animation(driver3))
	("crew_human" place(driver4) bone(driver4) door(emit4) animation(driver4))
	
	("crew_human" place(seat1) bone(seat1) door(emit1) animation(seat1))
	("crew_human" place(seat2) bone(seat2) door(emit2) animation(seat2))
	("crew_human" place(seat3) bone(seat3) door(emit3) animation(seat3))
	("crew_human" place(seat4) bone(seat4) door(emit4) animation(seat4))
	
	{placer
		{place "gunner" {group "crew"}}
		{place "commander" {group "crew"}}
		{place "charger3" {group "crew"}}
		{place "charger4" {group "crew"}}
	}
	{boarder
		{link "driver1" "gunner"}
		{link "driver2" "commander"}
		{link "driver3" "charger3"}
		{link "driver4" "charger4"}
		
		{link "driver1" "seat1"}
		{link "driver2" "seat2"}
		{link "driver3" "seat3"}
		{link "driver4" "seat4"}
		
		{link "seat1" "gunner"}
		{link "seat2" "commander"}
		{link "seat2" "charger3"}
		{link "seat4" "charger4"}
		
		
	}
	{extender "cannon"
		{animation
			{switch "close"}
			{move    "cannon_pak40_pusher_right" "cannon_pak40_pusher_left" "cannon_pak40_pusher_left" "cannon_pak40_pusher_right"}			;анимации при буксировке
			{aim     "" "cannon_155gpf_gunlayer"  "" ""}                                         ;анимации при наведении
			{fire    "cannon_m8_charger_fire" "Cannon_gunlayer_fire-alert" ""  ""}    ;Выстрел
			{reload  "" "" "cannon_155gpf_charger" "cannon_m8_charger"}                                      ;перезарядка
		}
		{move {workers "driver1" "driver2" "driver3" "driver4"} {obstacle "close"}}
		{attack {workers "gunner" "commander" "charger3" "charger4"} {obstacle "open"}}
		{trailing {workers "seat1" "seat2" "seat3" "seat4" "seat5"}}
		{rotate_ik_Limit 0}
	}
	
	("wheel" args "wheelright")
	("wheel" args "wheelleft")	


	{mass 4218}
	{Chassis "track"
		("car_trace" fx("tracewheel03") step(0.09) wheell("wlf") wheelr("wrf") bonel("FXtraceL") boner("FXtraceR"))
		("loco_big")
    }
	{sensor
		{visor "main"
			{vision "cannon_main-far"}
		}
	}
