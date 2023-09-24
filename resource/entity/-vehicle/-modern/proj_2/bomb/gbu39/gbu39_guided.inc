
	(include "/properties/Projectile.ext")
	(include "/properties/shadow/round.inc")
	{collider "ammo"}
	{extender "stuff"
		{item "sdb1_stuff ammo"}
	}
	{props "steel" "explosive_stuff" "gbu39" "vis_level_targetable_missile" "-vis_level_missile"}
	{targetclass "bomb"}
	{Extension "gbu39.mdl"}
	{Weaponry
	    {place "targeting_sys_anti_jamming"
			{weapon "missilets_arc_160_gbu" filling "usa_gps cwps2 ammo" 200}
			{foresight "missle_foresight"}
			{charger "driver"}
			{gunner "driver"}
			{basic}
			{SequentialAim 0}
		}
		{place "targeting_sys"
			{weapon "missilets_arc_200_gbu" filling "usa_gps cwps2 ammo" 200}
			{foresight "missle_foresight"}
			{charger "driver"}
			{gunner "driver"}
			{basic}
			{SequentialAim 0}
		}
	}
	{armor
		{setting "body"
            {thickness 3}
            {durability {blast {value 30} } {pierce  {value 30} }  }  
            {threshold  {blast {value 30} } {pierce  {value 30} }}
            {volumes "body" "select" "check_for_sam"}
        }
	}
	{component "body"
		{RepairTime 1}
    }
	{component "check_for_sam"
		{RepairTime 1}
    }
	{sensor
		{RecognizeTime 0.01}
		{InformRange 0.1 0.1}
		{Visor "main"
			{vision "missile"}
			{bone "missle_foresight"}
		}
		{Visor "close"
			{vision "missile_close"}
			{bone "missle_foresight"}
		}
	}
	{volume "cont_vol"
		{able clear {contact}}
		{Box 0 25 25}
		{Bone "cont_vol"}
		{Position 1	0	0}
	}
	{Volume "check_for_sam"
		{able clear {Visible 1} {bullet 1}} {Thickness 0.1} {component "check_for_sam"}
		{box 20 20 20}
		{Bone "body"}
		{Position 0	-20	0}
	}
