
    (include "/properties/projectile_impulse.ext")
	{extender "stuff"
		{item "ls6_impactor"}
	}
	{props "ls6_guided"}
	
	("impulse_engine" missile("ls6")
	fore_offset(35) cont_offset(-70)
	calibre(450) length(2500)
	)
	("impulse_glide_bomb")
	("guidance_double" country(rus) type(gps) typeaj(gps) guidance(long_gbu) guidanceaj(short_gbu))
	("impulse_missile_armor" thickness(3) durability(30))


