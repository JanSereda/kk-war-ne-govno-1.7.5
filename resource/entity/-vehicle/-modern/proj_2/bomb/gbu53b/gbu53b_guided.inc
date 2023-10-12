
	(include "/properties/projectile_impulse.ext")
	{extender "stuff"
		{item "sdb2_impactor"}
	}
	{props "gbu53b_guided"}
	("impulse_engine" missile("gbu53b")
	fore_offset(15) cont_offset(-50)
	calibre(190) length(1800)
	)

	("impulse_glide_bomb")
	{Weaponry
		{place "targeting_sys2"
			{weapon "missilets_short_gbu" filling "usa_active cwps2 ammo" 200}
			{foresight "missle_foresight"}
			{charger "driver"}
			{gunner "driver"}
			{basic}
			{SequentialAim 0}
		}
	}
	("guidance_double" country(usa) type(gps) typeaj(gps) guidance(long_gbu) guidanceaj(short_gbu))

	("impulse_missile_armor" thickness(3) durability(30))


