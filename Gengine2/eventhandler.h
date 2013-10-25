/* 
 * File:   eventhandler.h
 * Author: Eric
 *
 * Created on June 17, 2013, 10:30 PM
 * PURPOSE: The eventhandler class handles is too handle individual events
 */

#ifndef EVENTHANDLER_H
#define	EVENTHANDLER_H

#include <SDL/SDL.h>

class Game;

class EventHandler{
    
public:
    
    virtual void handle(Game *game, SDL_Event *event);
    
    //==== events ===//
    virtual void on_au(Game *game, SDL_Event *event);
    virtual void on_bu(Game *game, SDL_Event *event);
    virtual void on_cu(Game *game, SDL_Event *event);
    virtual void on_du(Game *game, SDL_Event *event);
    virtual void on_eu(Game *game, SDL_Event *event);
    virtual void on_fu(Game *game, SDL_Event *event);
    virtual void on_gu(Game *game, SDL_Event *event);
    virtual void on_hu(Game *game, SDL_Event *event);
    virtual void on_iu(Game *game, SDL_Event *event);
    virtual void on_ju(Game *game, SDL_Event *event);
    virtual void on_ku(Game *game, SDL_Event *event);
    virtual void on_lu(Game *game, SDL_Event *event);
    virtual void on_mu(Game *game, SDL_Event *event);
    virtual void on_nu(Game *game, SDL_Event *event);
    virtual void on_ou(Game *game, SDL_Event *event);
    virtual void on_pu(Game *game, SDL_Event *event);
    virtual void on_qu(Game *game, SDL_Event *event);
    virtual void on_ru(Game *game, SDL_Event *event);
    virtual void on_su(Game *game, SDL_Event *event);
    virtual void on_tu(Game *game, SDL_Event *event);
    virtual void on_uu(Game *game, SDL_Event *event);
    virtual void on_vu(Game *game, SDL_Event *event);
    virtual void on_wu(Game *game, SDL_Event *event);
    virtual void on_xu(Game *game, SDL_Event *event);
    virtual void on_yu(Game *game, SDL_Event *event);
    virtual void on_zu(Game *game, SDL_Event *event);
    
    virtual void on_1u(Game *game, SDL_Event *event);
    virtual void on_2u(Game *game, SDL_Event *event);
    virtual void on_3u(Game *game, SDL_Event *event);
    virtual void on_4u(Game *game, SDL_Event *event);
    virtual void on_5u(Game *game, SDL_Event *event);
    virtual void on_6u(Game *game, SDL_Event *event);
    virtual void on_7u(Game *game, SDL_Event *event);
    virtual void on_8u(Game *game, SDL_Event *event);
    virtual void on_9u(Game *game, SDL_Event *event);
    virtual void on_0u(Game *game, SDL_Event *event);
    
    virtual void on_f1u(Game *game, SDL_Event *event);
    virtual void on_f2u(Game *game, SDL_Event *event);
    virtual void on_f3u(Game *game, SDL_Event *event);
    virtual void on_f4u(Game *game, SDL_Event *event);
    virtual void on_f5u(Game *game, SDL_Event *event);
    virtual void on_f6u(Game *game, SDL_Event *event);
    virtual void on_f7u(Game *game, SDL_Event *event);
    virtual void on_f8u(Game *game, SDL_Event *event);
    virtual void on_f9u(Game *game, SDL_Event *event);
    virtual void on_f10u(Game *game, SDL_Event *event);
    virtual void on_f11u(Game *game, SDL_Event *event);
    virtual void on_f12u(Game *game, SDL_Event *event);
    
    virtual void on_minusu(Game *game, SDL_Event *event);
    virtual void on_equalu(Game *game, SDL_Event *event);
    virtual void on_backquoteu(Game *game, SDL_Event *event);
    virtual void on_backslashu(Game *game, SDL_Event *event);
    virtual void on_leftbracketu(Game *game, SDL_Event *event);
    virtual void on_rightbracketu(Game *game, SDL_Event *event);
    virtual void on_semicolonu(Game *game, SDL_Event *event);
    virtual void on_quoteu(Game *game, SDL_Event *event);
    virtual void on_commau(Game *game, SDL_Event *event);
    virtual void on_periodu(Game *game, SDL_Event *event);
    virtual void on_slashu(Game *game, SDL_Event *event);
    virtual void on_upu(Game *game, SDL_Event *event);
    virtual void on_downu(Game *game, SDL_Event *event);
    virtual void on_rightu(Game *game, SDL_Event *event);
    virtual void on_leftu(Game *game, SDL_Event *event);
    
    virtual void on_rshiftu(Game *game, SDL_Event *event);
    virtual void on_rctrlu(Game *game, SDL_Event *event);
    virtual void on_raltu(Game *game, SDL_Event *event);
    virtual void on_lshiftu(Game *game, SDL_Event *event);
    virtual void on_lctrlu(Game *game, SDL_Event *event);
    virtual void on_laltu(Game *game, SDL_Event *event);
    virtual void on_backu(Game *game, SDL_Event *event);
    virtual void on_returnu(Game *game, SDL_Event *event);
    virtual void on_capsu(Game *game, SDL_Event *event);
    virtual void on_numu(Game *game, SDL_Event *event);
    virtual void on_scrollu(Game *game, SDL_Event *event);
    virtual void on_deleteu(Game *game, SDL_Event *event);
    virtual void on_homeu(Game *game, SDL_Event *event);
    virtual void on_endu(Game *game, SDL_Event *event);
    virtual void on_pageupu(Game *game, SDL_Event *event);
    virtual void on_pagedownu(Game *game, SDL_Event *event);
    virtual void on_pauseu(Game *game, SDL_Event *event);
    virtual void on_insertu(Game *game, SDL_Event *event);
    virtual void on_escapeu(Game *game, SDL_Event *event);
    virtual void on_printu(Game *game, SDL_Event *event);
    virtual void on_breaku(Game *game, SDL_Event *event);
    virtual void on_tabu(Game *game, SDL_Event *event);
    virtual void on_clearu(Game *game, SDL_Event *event);
    virtual void on_spaceu(Game *game, SDL_Event *event);
    
    virtual void on_ad(Game *game, SDL_Event *event);
    virtual void on_bd(Game *game, SDL_Event *event);
    virtual void on_cd(Game *game, SDL_Event *event);
    virtual void on_dd(Game *game, SDL_Event *event);
    virtual void on_ed(Game *game, SDL_Event *event);
    virtual void on_fd(Game *game, SDL_Event *event);
    virtual void on_gd(Game *game, SDL_Event *event);
    virtual void on_hd(Game *game, SDL_Event *event);
    virtual void on_id(Game *game, SDL_Event *event);
    virtual void on_jd(Game *game, SDL_Event *event);
    virtual void on_kd(Game *game, SDL_Event *event);
    virtual void on_ld(Game *game, SDL_Event *event);
    virtual void on_md(Game *game, SDL_Event *event);
    virtual void on_nd(Game *game, SDL_Event *event);
    virtual void on_od(Game *game, SDL_Event *event);
    virtual void on_pd(Game *game, SDL_Event *event);
    virtual void on_qd(Game *game, SDL_Event *event);
    virtual void on_rd(Game *game, SDL_Event *event);
    virtual void on_sd(Game *game, SDL_Event *event);
    virtual void on_td(Game *game, SDL_Event *event);
    virtual void on_ud(Game *game, SDL_Event *event);
    virtual void on_vd(Game *game, SDL_Event *event);
    virtual void on_wd(Game *game, SDL_Event *event);
    virtual void on_xd(Game *game, SDL_Event *event);
    virtual void on_yd(Game *game, SDL_Event *event);
    virtual void on_zd(Game *game, SDL_Event *event);
    
    virtual void on_1d(Game *game, SDL_Event *event);
    virtual void on_2d(Game *game, SDL_Event *event);
    virtual void on_3d(Game *game, SDL_Event *event);
    virtual void on_4d(Game *game, SDL_Event *event);
    virtual void on_5d(Game *game, SDL_Event *event);
    virtual void on_6d(Game *game, SDL_Event *event);
    virtual void on_7d(Game *game, SDL_Event *event);
    virtual void on_8d(Game *game, SDL_Event *event);
    virtual void on_9d(Game *game, SDL_Event *event);
    virtual void on_0d(Game *game, SDL_Event *event);
    
    virtual void on_f1d(Game *game, SDL_Event *event);
    virtual void on_f2d(Game *game, SDL_Event *event);
    virtual void on_f3d(Game *game, SDL_Event *event);
    virtual void on_f4d(Game *game, SDL_Event *event);
    virtual void on_f5d(Game *game, SDL_Event *event);
    virtual void on_f6d(Game *game, SDL_Event *event);
    virtual void on_f7d(Game *game, SDL_Event *event);
    virtual void on_f8d(Game *game, SDL_Event *event);
    virtual void on_f9d(Game *game, SDL_Event *event);
    virtual void on_f10d(Game *game, SDL_Event *event);
    virtual void on_f11d(Game *game, SDL_Event *event);
    virtual void on_f12d(Game *game, SDL_Event *event);
    
    virtual void on_minusd(Game *game, SDL_Event *event);
    virtual void on_equald(Game *game, SDL_Event *event);
    virtual void on_backquoted(Game *game, SDL_Event *event);
    virtual void on_backslashd(Game *game, SDL_Event *event);
    virtual void on_leftbracketd(Game *game, SDL_Event *event);
    virtual void on_rightbracketd(Game *game, SDL_Event *event);
    virtual void on_semicolond(Game *game, SDL_Event *event);
    virtual void on_quoted(Game *game, SDL_Event *event);
    virtual void on_commad(Game *game, SDL_Event *event);
    virtual void on_periodd(Game *game, SDL_Event *event);
    virtual void on_slashd(Game *game, SDL_Event *event);
    virtual void on_upd(Game *game, SDL_Event *event);
    virtual void on_downd(Game *game, SDL_Event *event);
    virtual void on_rightd(Game *game, SDL_Event *event);
    virtual void on_leftd(Game *game, SDL_Event *event);
    
    virtual void on_rshiftd(Game *game, SDL_Event *event);
    virtual void on_rctrld(Game *game, SDL_Event *event);
    virtual void on_raltd(Game *game, SDL_Event *event);
    virtual void on_lshiftd(Game *game, SDL_Event *event);
    virtual void on_lctrld(Game *game, SDL_Event *event);
    virtual void on_laltd(Game *game, SDL_Event *event);
    virtual void on_backd(Game *game, SDL_Event *event);
    virtual void on_returnd(Game *game, SDL_Event *event);
    virtual void on_capsd(Game *game, SDL_Event *event);
    virtual void on_numd(Game *game, SDL_Event *event);
    virtual void on_scrolld(Game *game, SDL_Event *event);
    virtual void on_deleted(Game *game, SDL_Event *event);
    virtual void on_homed(Game *game, SDL_Event *event);
    virtual void on_endd(Game *game, SDL_Event *event);
    virtual void on_pageupd(Game *game, SDL_Event *event);
    virtual void on_pagedownd(Game *game, SDL_Event *event);
    virtual void on_paused(Game *game, SDL_Event *event);
    virtual void on_insertd(Game *game, SDL_Event *event);
    virtual void on_escaped(Game *game, SDL_Event *event);
    virtual void on_printd(Game *game, SDL_Event *event);
    virtual void on_breakd(Game *game, SDL_Event *event);
    virtual void on_tabd(Game *game, SDL_Event *event);
    virtual void on_cleard(Game *game, SDL_Event *event);
    virtual void on_spaced(Game *game, SDL_Event *event);
    
    virtual void on_mouseup(Game *game, SDL_Event *event);
    virtual void on_mousedown(Game *game, SDL_Event *event);
    virtual void on_motion(Game *game, SDL_Event *event);
    virtual void on_active(Game *game, SDL_Event *event);
    virtual void on_quit(Game *game, SDL_Event *event);
    virtual void on_user(Game *game, SDL_Event *event);
    virtual void on_resize(Game *game, SDL_Event *event);
    virtual void on_expose(Game *game, SDL_Event *event);
    
};

#include "game.h"

#endif	/* EVENTHANDLER_H */