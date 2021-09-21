
CFLAGS += -D _XBOX
CFLAGS += -D SDL $(JAAPFLAGS)
CFLAGS += -D __WIN32__

# increase the stack limit to avoid stack overflow issues
LDFLAGS += -stack:0x200000

XBE_TITLE = QuakeNX
GEN_XISO = $(XBE_TITLE).iso
SRCS = $(CURDIR)/cd_sdl.c $(CURDIR)/chase.c $(CURDIR)/cl_demo.c $(CURDIR)/cl_input.c $(CURDIR)/cl_main.c $(CURDIR)/cl_parse.c $(CURDIR)/cl_tent.c $(CURDIR)/cmd.c $(CURDIR)/common.c $(CURDIR)/console.c $(CURDIR)/crc.c $(CURDIR)/cvar.c $(CURDIR)/d_edge.c $(CURDIR)/d_fill.c $(CURDIR)/d_init.c $(CURDIR)/d_modech.c $(CURDIR)/d_part.c $(CURDIR)/d_polyse.c $(CURDIR)/d_scan.c $(CURDIR)/d_sky.c $(CURDIR)/d_sprite.c $(CURDIR)/d_surf.c $(CURDIR)/d_vars.c $(CURDIR)/d_zpoint.c $(CURDIR)/draw.c $(CURDIR)/host.c $(CURDIR)/host_cmd.c $(CURDIR)/keys.c $(CURDIR)/mathlib.c $(CURDIR)/menu.c $(CURDIR)/model.c $(CURDIR)/net_loop.c $(CURDIR)/net_main.c $(CURDIR)/net_none.c $(CURDIR)/net_vcr.c $(CURDIR)/nonintel.c $(CURDIR)/pr_cmds.c $(CURDIR)/pr_edict.c $(CURDIR)/pr_exec.c $(CURDIR)/r_aclip.c $(CURDIR)/r_alias.c $(CURDIR)/r_bsp.c $(CURDIR)/r_draw.c $(CURDIR)/r_edge.c $(CURDIR)/r_efrag.c $(CURDIR)/r_light.c $(CURDIR)/r_main.c $(CURDIR)/r_misc.c $(CURDIR)/r_part.c $(CURDIR)/r_sky.c $(CURDIR)/r_sprite.c $(CURDIR)/r_surf.c $(CURDIR)/r_vars.c $(CURDIR)/sbar.c $(CURDIR)/screen.c $(CURDIR)/snd_dma.c $(CURDIR)/snd_mem.c $(CURDIR)/snd_mix.c $(CURDIR)/snd_sdl.c $(CURDIR)/sv_main.c $(CURDIR)/sv_move.c $(CURDIR)/sv_phys.c $(CURDIR)/sv_user.c $(CURDIR)/sys_sdl.c $(CURDIR)/vid_sdl.c $(CURDIR)/view.c $(CURDIR)/wad.c $(CURDIR)/world.c $(CURDIR)/zone.c $(CURDIR)/sdl_stubs.c
NXDK_DIR ?= $(CURDIR)/../..
NXDK_SDL = y

include $(NXDK_DIR)/Makefile

