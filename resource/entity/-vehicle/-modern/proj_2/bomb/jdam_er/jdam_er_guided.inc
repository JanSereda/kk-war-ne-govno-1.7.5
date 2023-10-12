
    (include "/properties/projectile_impulse.ext")
	{extender "stuff"
		{item "jdam_er_impactor"}
	}
	{props "jdam_er_guided"}
	
	("impulse_engine" missile("jdam_er")
	fore_offset(35) cont_offset(-70)
	calibre(450) length(2500)
	)
	("impulse_glide_bomb")
	("guidance_double" country(usa) type(gps) typeaj(gps) guidance(long_gbu) guidanceaj(short_gbu))
	("impulse_missile_armor" thickness(3) durability(30))


