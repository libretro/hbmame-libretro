// license:BSD-3-Clause
// copyright-holders:Robbbert
#include "../mame/drivers/namcos2.cpp"


/********
 Phelios
**********/

ROM_START( pheliosx )
	ROM_REGION( 0x040000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "ps2_mpr0_ps01.mpr0",  0x000000, 0x020000, CRC(e277e0a7) SHA1(5b97fb2d6918802a39275a8875260533ee874346) )
	ROM_LOAD16_BYTE( "ps2_mpr1.mpr1",  0x000001, 0x020000, CRC(2546501a) SHA1(288cdfdf16feb61c9b49ab660efdf48020583274) )

	ROM_REGION( 0x040000, "slave", 0 )
	ROM_LOAD16_BYTE( "ps2_spr0.spr0",  0x000000, 0x010000, CRC(e9c6987e) SHA1(325532b065999276e4629b10c27d7df083e81c33) )
	ROM_LOAD16_BYTE( "ps2_spr1.spr1",  0x000001, 0x010000, CRC(02b074fb) SHA1(4025c3dd83e26ac87de9f2f73753d1cb1211c1ae) )

	ROM_REGION( 0x020000, "audiocpu", 0 )
	ROM_LOAD( "ps2_snd0.snd0",  0x000000, 0x020000, CRC(da694838) SHA1(e1a20aedd18c49dcd12717e8ce479a5a441c10e6) )

	ROM_REGION( 0x8000, "c65mcu:external", ROMREGION_ERASE00 )
	ROM_LOAD( "sys2_c65c.3f",  0x000000, 0x008000, CRC(a5b2a4ff) SHA1(068bdfcc71a5e83706e8b23330691973c1c214dc) )

	ROM_REGION( 0x400000, "sprite", 0 )
	NAMCOS2_SPRROM_LOAD_256K( "ps_obj-0.obj0",  0x000003, CRC(f323db2b) SHA1(fa3c42c618da06af161ad3f8aa1283e9c4bd63c0) )
	NAMCOS2_SPRROM_LOAD_256K( "ps_obj-1.obj1",  0x000002, CRC(faf7c2f5) SHA1(d0d33eddaf5de2b639717db83a85f441d81a5924) )
	NAMCOS2_SPRROM_LOAD_256K( "ps_obj-2.obj2",  0x000001, CRC(828178ba) SHA1(d35ab8020ebaad0b4c0b24fa9edc2886b713a8ed) )
	NAMCOS2_SPRROM_LOAD_256K( "ps_obj-3.obj3",  0x000000, CRC(e84771c8) SHA1(17bede39d8b703005b288f3596c4aaca266fa06b) )
	NAMCOS2_SPRROM_LOAD_256K( "ps_obj-4.obj4",  0x200003, CRC(81ea86c6) SHA1(27400b4e1d53c47bc6b821439c294d879bf58ae4) )
	NAMCOS2_SPRROM_LOAD_256K( "ps_obj-5.obj5",  0x200002, CRC(aaebd51a) SHA1(7acb88cfcaf7e7c41de171ed5952e1d0a13ef302) )
	NAMCOS2_SPRROM_LOAD_256K( "ps_obj-6.obj6",  0x200001, CRC(032ea497) SHA1(89f4deed8fa076683abc1f2e961ceb920ab9848d) )
	NAMCOS2_SPRROM_LOAD_256K( "ps_obj-7.obj7",  0x200000, CRC(f6183b36) SHA1(d1fec216e88f6a07f03d1e458a105548d0376ef3) )

	ROM_REGION( 0x400000, "c123tmap", 0 )
	NAMCOS2_GFXROM_LOAD_128K( "ps_chr-0.chr0",  0x000000, CRC(668b6670) SHA1(35bdac5478cee37b82a8a5367a2a08c70014131d) )
	NAMCOS2_GFXROM_LOAD_128K( "ps_chr-1.chr1",  0x080000, CRC(80c30742) SHA1(e9307b6a4a6a749a97f76355fb3785945e303289) )
	NAMCOS2_GFXROM_LOAD_128K( "ps_chr-2.chr2",  0x100000, CRC(f4e11bf7) SHA1(4506fdc83956d7e58bee1a6661da9fe12f1317a9) )
	NAMCOS2_GFXROM_LOAD_128K( "ps_chr-3.chr3",  0x180000, CRC(97a93dc5) SHA1(9e89271a0bcb201122465d8f3b980b490e1e7350) )
	NAMCOS2_GFXROM_LOAD_128K( "ps_chr-4.chr4",  0x200000, CRC(81d965bf) SHA1(c7a2349c1ed34a5375d8643a3a373adffab554f4) )
	NAMCOS2_GFXROM_LOAD_128K( "ps_chr-5.chr5",  0x280000, CRC(8ca72d35) SHA1(e3af2d3772468bd26b552a3f15c8a9dd562b1361) )
	NAMCOS2_GFXROM_LOAD_128K( "ps_chr-6.chr6",  0x300000, CRC(da3543a9) SHA1(085ac3a7e71db8cc60fc343d3a6b009a81f751ee) )

	ROM_REGION( 0x400000, "s2roz", 0 )
	NAMCOS2_GFXROM_LOAD_128K( "ps_roz-0.roz0",  0x000000, CRC(68043d7e) SHA1(ee81e0f3fc1cd0aa903ad670aa7832c972613a80) )
	NAMCOS2_GFXROM_LOAD_128K( "ps_roz-1.roz1",  0x080000, CRC(029802b4) SHA1(b9966d13f80faa5befa43cfa9628afd6a4ff783e) )
	NAMCOS2_GFXROM_LOAD_128K( "ps_roz-2.roz2",  0x100000, CRC(bf0b76dc) SHA1(28f01dc16ee8818291f89cfc03b126c6cd7ced72) )
	NAMCOS2_GFXROM_LOAD_128K( "ps_roz-3.roz3",  0x180000, CRC(9c821455) SHA1(259f2cb4a7de69e751644511f66611392e60f59d) )
	NAMCOS2_GFXROM_LOAD_128K( "ps_roz-4.roz4",  0x200000, CRC(63a39b7a) SHA1(2fa8ced5beb7574cb4add0245f97282ce9149691) )
	NAMCOS2_GFXROM_LOAD_128K( "ps_roz-5.roz5",  0x280000, CRC(fc5a99d0) SHA1(e61d45347ec0ee6db27edd6da797e810052803a2) )
	NAMCOS2_GFXROM_LOAD_128K( "ps_roz-6.roz6",  0x300000, CRC(a2a17587) SHA1(44a58735e6efdfa815576ed134a1295db49430fb) )

	ROM_REGION( 0x080000, "c123tmap:mask", 0 )
	NAMCOS2_GFXROM_LOAD_128K( "ps_shape.shape",  0x000000, CRC(58e26fcf) SHA1(9edc3b54964f923ed07ee878520ccf3f188f04ad) )

	ROM_REGION16_BE( 0x200000, "data_rom", 0 )
	NAMCOS2_DATA_LOAD_E_128K( "ps2_dat0.13s",  0x000000, CRC(ee4194b0) SHA1(a0c2a807db70164ed761e5ad04301e5ae1173e7a) )
	NAMCOS2_DATA_LOAD_O_128K( "ps2_dat1.13p",  0x000000, CRC(5b22d714) SHA1(f6cb1fe661f7691269840245f06875845fd6eb33) )

	ROM_REGION( 0x100000, "c140", 0 )
	ROM_LOAD( "ps_voi-1.voice1",  0x000000, 0x080000, CRC(f67376ed) SHA1(b54257aad34c6ad03d5b040e6a5dda94a48b6780) )
ROM_END

/*    YEAR  NAME            PARENT    MACHINE        INPUT       INIT             MONITOR COMPANY                 FULLNAME FLAGS */
// Phelios
GAME(1988, pheliosx,   phelios,  base2,    base,     namcos2_state, init_phelios,  ROT90,  "Wayder", "Phelios (Sound Bug fix - Final Battle)", 0)


