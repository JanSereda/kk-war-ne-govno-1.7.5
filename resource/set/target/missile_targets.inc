	{commonmissile
		{"trophy"}
		{"smoke_atgm" {ground}}
		{"smoke_kzvp"}
		{"ir_soep_ammo"}
	}
	{laser_using_missile
	    {"smoke_atgm" {ground}}
		{"smoke_shtora"}
		{"trophy"}
		{"smoke_kzvp"}
	}
	{antiship_missile	;antiship and cruise
	    {"usa_radpassive cwps2"  {volume "targ_for_missile"}}
		{"rus_radpassive cwps2"  {volume "targ_for_missile"}}
		
		{"usa_radpassive_aj cwps2"  {volume "targ_for_missile"}}
		{"rus_radpassive_aj cwps2"  {volume "targ_for_missile"}}
		
		{"anti_smallmissile_gs" {volume "targ_for_missile"}}	
		{"radiowave" {volume "body"}}
		{"anti_smallmissile" {volume "body"}}	
		{"antimissile" {volume "targ_for_missile"}}	
	
		;{"trophy"}	;ПКР обычно плохо пробиваются в лоб
		{"smoke_kzvp"}
		;{"zenite" {volume "target_front"}}
		;{"zenite_ap" {volume "target_front"}}
		;{"autocannon_small ap" {volume "target_front"}}
		;{"autocannon_small fragmentary" {volume "target_front"}}
		;{"autocannon_small" {volume "target_front"}}
		{"shell_antimissile" {volume "target_front"}}
		;пуск ракеты по самому первому волуму, а вот наведение уже на более близкий.
		
		

	}
	{antirad_missile	;antiradiation
		{"RadAA_missile" }
	    {"RadAA_missile_1gen" }
		{"RadAA_missile_2gen" }
		{"AA_proj" }
		{"AA_missile" }
		{"AA_missile_2gen" }	
		{"rus_radpassive cwps2"  }
		{"rus_radpassive_missile"}
		{"rus_radpassive_aj cwps2"  }
		{"rus_radpassive_missile_aj"}
		{"rus_active cwps2"  }
		{"rus_active_aj cwps2"  }
		{"rus_active_asm_aj cwps2"  }
		{"usa_active cwps2"  }
		{"usa_active_aj cwps2"  }
		{"usa_active_asm_aj cwps2"  }
		{"usa_radpassive cwps2"  }
		{"usa_radpassive_missile"}
		{"usa_radpassive_aj cwps2"  }
		{"usa_radpassive_missile_aj"}
	}
	{small_targ_missile	;air-to-ground and ATGM
	    {"anti_smallmissile" {volume "target_front"}}	
		{"anti_smallmissile_gs" {volume "target_front"}}	
	   
		{"trophy"}
		{"smoke_kzvp"}
		{"smoke_atgm"}
		;{"zenite" {volume "target_front"}}
		;{"zenite_ap" {volume "target_front"}}
		;{"autocannon_small ap" {volume "target_front"}}
		;{"autocannon_small fragmentary" {volume "target_front"}}
		;{"autocannon_small" {volume "target_front"}}
		{"shell_antimissile" {volume "target_front"}}
		;пуск ракеты по самому первому волуму, а вот наведение уже на более близкий.
		

	}	
	{proj_rus_active
		{"rus_active cwps2"  }
		{"rus_active_aj cwps2"  }
		{"rus_active_asm_aj cwps2"  }
	}
	{proj_rus_ir
		{"rus_ir cwps2"  }
		{"rus_ir_aj cwps2"  }
		{"rus_ir_asm_aj cwps2"}
	}
	{proj_rus_antirad
		{"missile_antirad_usa"}
		{"usa_antirad cwps2" {volume "body"}}
		
		{"missile_antirad_usa_aj"}
		{"usa_antirad_aj cwps2" {volume "body"}}
	}
	{proj_rus_laser
		{"rus_laser cwps2"  }
		{"rus_laser_aj cwps2"  }
		{"rus_laser_asm_aj cwps2"  }
	}
	{proj_rus_laser_guide
		{"rus_laser_spot cwps2"  }
		{"rus_laser_spot_aj cwps2"  }
	}
	{proj_rus_laser_uas
		{"rus_laser_spot cwps2"  }
		{"rus_laser_spot_aj cwps2"  }
	}
	{proj_rus_other
		{"rus_other cwps2"  }
		{"rus_other_aj cwps2"  }
		{"rus_other_asm_aj cwps2"  }
	}
	{proj_rus_antiship
		{"rus_antiship cwps2"  }
		{"rus_antiship_aj cwps2"  }
	}
	{proj_rus_radpassive
		{"rus_radpassive cwps2"  }
		{"rus_radpassive_missile"}
		
		{"rus_radpassive_aj cwps2"  }
		{"rus_radpassive_missile_aj"}
	}
	{proj_usa_active
		{"usa_active cwps2"  }
		{"usa_active_aj cwps2"  }
		{"usa_active_asm_aj cwps2"  }
	}
	{proj_usa_ir
		{"usa_ir cwps2"  }
		{"usa_ir_aj cwps2"  }
		{"usa_ir_asm_aj cwps2"}
	}
	{proj_usa_antirad
		{"missile_antirad_rus"}
		{"rus_antirad cwps2" {volume "body"}}
		
		{"missile_antirad_rus_aj"}
		{"rus_antirad_aj cwps2" {volume "body"}}
	}
	{proj_usa_laser
		{"usa_laser cwps2"  }
		{"usa_laser_aj cwps2"  }
		{"usa_laser_asm_aj cwps2"  }
	}
	{proj_usa_other
		{"usa_other cwps2"  }
		{"usa_other_aj cwps2"  }
		{"usa_other_asm_aj cwps2"  }
	}
	{proj_usa_antiship
		{"usa_antiship cwps2"  }
		{"usa_antiship_aj cwps2"  }
	}
	{proj_usa_radpassive
		{"usa_radpassive cwps2"  }
		{"usa_radpassive_missile"}
		
		{"usa_radpassive_aj cwps2"  }
		{"usa_radpassive_missile_aj"}
	}
	{proj_ballistic_missile
	    {"anti_ballistic_missile_usa" {volume "targ_for_missile"}}
		{"anti_ballistic_missile_rus" {volume "targ_for_missile"}}
		
	    {"usa_active cwps2"  }
		{"usa_active_aj cwps2"  }
		{"usa_active_asm_aj cwps2"  }
	
		{"usa_radpassive cwps2"  }
		{"usa_radpassive_missile"}
		
		{"usa_radpassive_aj cwps2"  }
		{"usa_radpassive_missile_aj"}
		
		{"rus_radpassive cwps2"  }
		{"rus_radpassive_missile"}
		
		{"rus_radpassive_aj cwps2"  }
		{"rus_radpassive_missile_aj"}
		
		{"rus_active cwps2"  }
		{"rus_active_aj cwps2"  }
		{"rus_active_asm_aj cwps2"  }
		
	}
	{proj_ballistic_missile_rus
	    {"anti_ballistic_missile_usa" {volume "targ_for_missile"}}
	    {"usa_active cwps2"  }
		{"usa_active_aj cwps2"  }
		{"usa_active_asm_aj cwps2"  }
		{"usa_radpassive cwps2"  }
		{"usa_radpassive_missile"}
		{"usa_radpassive_aj cwps2"  }
		{"usa_radpassive_missile_aj"}
		
	}
	{proj_ballistic_missile_usa
		{"anti_ballistic_missile_rus" {volume "targ_for_missile"}}
		{"rus_radpassive cwps2"  }
		{"rus_radpassive_missile"}
		{"rus_radpassive_aj cwps2"  }
		{"rus_radpassive_missile_aj"}
		{"rus_active cwps2"  }
		{"rus_active_aj cwps2"  }
		{"rus_active_asm_aj cwps2"  }
		
	}
	{bomb
        {"RadAA_missile" {volume "check_for_sam"}}
	    {"RadAA_missile_1gen" {volume "check_for_sam"}}
		{"RadAA_missile_2gen" {volume "check_for_sam"}}
		{"AA_proj" {volume "check_for_sam"}}
		{"AA_missile" {volume "check_for_sam"}}
		{"AA_missile_2gen" {volume "check_for_sam"}}	
		{"rus_radpassive cwps2"  }
		{"rus_radpassive_missile"}
		{"rus_radpassive_aj cwps2"  }
		{"rus_radpassive_missile_aj"}
		{"rus_active cwps2"  }
		{"rus_active_aj cwps2"  }
		{"rus_active_asm_aj cwps2"  }
		{"usa_active cwps2"  }
		{"usa_active_aj cwps2"  }
		{"usa_active_asm_aj cwps2"  }
		{"usa_radpassive cwps2"  }
		{"usa_radpassive_missile"}
		{"usa_radpassive_aj cwps2"  }
		{"usa_radpassive_missile_aj"}
	}
	
	{proj_cwps3

		{"rus_active cwps2" {volume "target_rus_active"}}
		{"rus_ir cwps2" {volume "target_rus_ir"}}
		{"rus_laser cwps2" {volume "target_rus_laser"}}
		{"rus_laser_spot cwps2" {volume "target_rus_laser_spot"}}
		{"rus_other cwps2" {volume "target_rus_other"}}
		{"rus_antiship cwps2" {volume "target_rus_antiship"}}
		{"rus_radpassive cwps2" {volume "target_rus_radpassive"}}
		{"rus_radpassive_missile" {volume "target_rus_radpassive"}}
		{"usa_active cwps2" {volume "target_usa_active"}}
		{"usa_ir cwps2" {volume "target_usa_ir"}}
		{"usa_laser cwps2" {volume "target_usa_laser"}}
		{"usa_other cwps2" {volume "target_usa_other"}}
		{"usa_antiship cwps2" {volume "target_usa_antiship"}}
		{"usa_radpassive cwps2" {volume "target_usa_radpassive"}}
		{"usa_radpassive_missile" {volume "target_usa_radpassive"}}
		
		
		{"rus_active cwps2" {volume "rus_active"}}
		{"rus_ir cwps2" {volume "rus_ir"}}
		{"rus_laser cwps2" {volume "rus_laser"}}
		{"rus_other cwps2" {volume "rus_other"}}
		{"rus_antiship cwps2" {volume "rus_antiship"}}
		{"rus_radpassive cwps2" {volume "rus_radpassive"}}
		{"rus_radpassive_missile" {volume "rus_radpassive"}}
		{"usa_active cwps2" {volume "usa_active"}}
		{"usa_ir cwps2" {volume "usa_ir"}}
		{"usa_laser cwps2" {volume "usa_laser"}}
		{"usa_other cwps2" {volume "usa_other"}}
		{"usa_antiship cwps2" {volume "usa_antiship"}}
		{"usa_radpassive cwps2" {volume "usa_radpassive"}}
		{"usa_radpassive_missile" {volume "usa_radpassive"}}
		
; AJ	======================================================	
		{"rus_active_aj cwps2" {volume "target_rus_active"}}
		{"rus_active_asm_aj cwps2" {volume "target_rus_active"}}
		{"rus_ir_aj cwps2" {volume "target_rus_ir"}}
		{"rus_ir_asm_aj cwps2" {volume "target_rus_ir"}}
		{"rus_laser_aj cwps2" {volume "target_rus_laser"}}
		{"rus_laser_spot_aj cwps2" {volume "target_rus_laser_spot"}}
		{"rus_laser_asm_aj cwps2" {volume "target_rus_laser"}}
		{"rus_other_aj cwps2" {volume "target_rus_other"}}
		{"rus_other_asm_aj cwps2" {volume "target_rus_other"}}
		{"rus_antiship_aj cwps2" {volume "target_rus_antiship"}}
		{"rus_radpassive_aj cwps2" {volume "target_rus_radpassive"}}
		{"rus_radpassive_missile_aj" {volume "target_rus_radpassive"}}
		{"usa_active_aj cwps2" {volume "target_usa_active"}}
		{"usa_active_asm_aj cwps2" {volume "target_usa_active"}}
		{"usa_ir_aj cwps2" {volume "target_usa_ir"}}
		{"usa_ir_asm_aj cwps2" {volume "target_usa_ir"}}
		{"usa_laser_aj cwps2" {volume "target_usa_laser"}}
		{"usa_laser_asm_aj cwps2" {volume "target_usa_laser"}}
		{"usa_other_aj cwps2" {volume "target_usa_other"}}
		{"usa_other_asm_aj cwps2" {volume "target_usa_other"}}
		{"usa_antiship_aj cwps2" {volume "target_usa_antiship"}}
		{"usa_radpassive_aj cwps2" {volume "target_usa_radpassive"}}
		{"usa_radpassive_missile_aj" {volume "target_usa_radpassive"}}
		
		
		{"rus_active_aj cwps2" {volume "rus_active"}}
		{"rus_active_asm_aj cwps2" {volume "rus_active"}}
		{"rus_ir_aj cwps2" {volume "rus_ir"}}
		{"rus_ir_asm_aj cwps2" {volume "rus_ir"}}
		{"rus_laser_aj cwps2" {volume "rus_laser"}}
		{"rus_laser_asm_aj cwps2" {volume "rus_laser"}}
		{"rus_other_aj cwps2" {volume "rus_other"}}
		{"rus_other_asm_aj cwps2" {volume "rus_other"}}
		{"rus_antiship_aj cwps2" {volume "rus_antiship"}}
		{"rus_radpassive_aj cwps2" {volume "rus_radpassive"}}
		{"rus_radpassive_missile_aj" {volume "rus_radpassive"}}
		{"usa_active_aj cwps2" {volume "usa_active"}}
		{"usa_active_asm_aj cwps2" {volume "usa_active"}}
		{"usa_ir_aj cwps2" {volume "usa_ir"}}
		{"usa_ir_asm_aj cwps2" {volume "usa_ir"}}
		{"usa_laser_aj cwps2" {volume "usa_laser"}}
		{"usa_laser_asm_aj cwps2" {volume "usa_laser"}}
		{"usa_other_aj cwps2" {volume "usa_other"}}
		{"usa_other_asm_aj cwps2" {volume "usa_other"}}
		{"usa_antiship_aj cwps2" {volume "usa_antiship"}}
		{"usa_radpassive_aj cwps2" {volume "usa_radpassive"}}
		{"usa_radpassive_missile_aj" {volume "usa_radpassive"}}
	}
	{decoy_chaff
		{"usa_active cwps2" {volume "body"}}
		{"rus_active cwps2" {volume "body"}}
		{"usa_antiship cwps2" {volume "body"}}
		{"rus_antiship cwps2" {volume "body"}}
		{"usa_radpassive cwps2" {volume "body"}}
		{"rus_radpassive cwps2" {volume "body"}}
	}
	{decoy_flare
		{"usa_ir cwps2" {volume "body"}}
		{"rus_ir cwps2" {volume "body"}}
	}
	{decoy_optic
		{"usa_laser cwps2" {volume "body"}}
		{"rus_laser cwps2" {volume "body"}}
		{"usa_other cwps2" {volume "body"}}
		{"rus_other cwps2" {volume "body"}}
	}
	{proj_usa_gps
		{"usa_gps cwps2" {volume "target_gbu"}}	
	}
	{proj_rus_gps
		{"rus_gps cwps2" {volume "target_gbu"}}	
	}
(define "gbu_selector"	
	{proj_usa_gps_%n
		{"usa_gps cwps2" {volume "target_gorka"}}
		{"usa_gps cwps2" {ground}}
		
	}
)
("gbu_selector" n(00))
("gbu_selector" n(01))
("gbu_selector" n(02))
("gbu_selector" n(03))
("gbu_selector" n(04))
("gbu_selector" n(05))
("gbu_selector" n(06))
("gbu_selector" n(07))
("gbu_selector" n(08))
("gbu_selector" n(09))
("gbu_selector" n(10))
("gbu_selector" n(11))
("gbu_selector" n(12))
("gbu_selector" n(13))
("gbu_selector" n(14))
("gbu_selector" n(15))
(define "umpk_selector"	
	{proj_rus_gps_%n
		{"rus_gps cwps2" {volume "target_gorka"}}
		{"rus_gps cwps2" {ground}}
		
	}
)
("umpk_selector" n(00))
("umpk_selector" n(01))