
	(include "/properties/projectile_impulse.ext")
	{extender "stuff"
		{item "sdb1_impactor"}
	}
	{props "gbu39_guided"}
	("impulse_engine" missile("gbu39")
	fore_offset(15) cont_offset(-50)
	calibre(190) length(1800)
	)

	("impulse_glide_bomb")
	("guidance_double" country(usa) type(gps) typeaj(gps) guidance(long_gbu) guidanceaj(short_gbu))
	("impulse_missile_armor" thickness(3) durability(30))


