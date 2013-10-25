#include "eventhandler.h"

void EventHandler::handle(Game *game, SDL_Event *event){
    /* Check for events */
    switch (event->type){
        case SDL_QUIT:
            on_quit(game, event);
            break;
        case SDL_ACTIVEEVENT:
            on_active(game, event);
            break;
        case SDL_KEYDOWN:
            // <editor-fold defaultstate="collapsed" desc="All the keys...">
            switch (event->key.keysym.sym){
                case SDLK_a:
                    on_ad(game, event);
                    break;
                case SDLK_b:
                    on_bd(game, event);
                    break;
                case SDLK_c:
                    on_cd(game, event);
                    break;
                case SDLK_d:
                    on_dd(game, event);
                    break;
                case SDLK_e:
                    on_ed(game, event);
                    break;
                case SDLK_f:
                    on_fd(game, event);
                    break;
                case SDLK_g:
                    on_gd(game, event);
                    break;
                case SDLK_h:
                    on_hd(game, event);
                    break;
                case SDLK_i:
                    on_id(game, event);
                    break;
                case SDLK_j:
                    on_jd(game, event);
                    break;
                case SDLK_k:
                    on_kd(game, event);
                    break;
                case SDLK_l:
                    on_ld(game, event);
                    break;
                case SDLK_m:
                    on_md(game, event);
                    break;
                case SDLK_n:
                    on_nd(game, event);
                    break;
                case SDLK_o:
                    on_od(game, event);
                    break;
                case SDLK_p:
                    on_pd(game, event);
                    break;
                case SDLK_q:
                    on_qd(game, event);
                    break;
                case SDLK_r:
                    on_rd(game, event);
                    break;
                case SDLK_s:
                    on_sd(game, event);
                    break;
                case SDLK_t:
                    on_td(game, event);
                    break;
                case SDLK_u:
                    on_ud(game, event);
                    break;
                case SDLK_v:
                    on_vd(game, event);
                    break;
                case SDLK_w:
                    on_wd(game, event);
                    break;
                case SDLK_x:
                    on_xd(game, event);
                    break;
                case SDLK_y:
                    on_yd(game, event);
                    break;
                case SDLK_z:
                    on_zd(game, event);
                    break;
                case SDLK_1:
                    on_1d(game, event);
                    break;
                case SDLK_2:
                    on_2d(game, event);
                    break;
                case SDLK_3:
                    on_3d(game, event);
                    break;
                case SDLK_4:
                    on_4d(game, event);
                    break;
                case SDLK_5:
                    on_5d(game, event);
                    break;
                case SDLK_6:
                    on_6d(game, event);
                    break;
                case SDLK_7:
                    on_7d(game, event);
                    break;
                case SDLK_8:
                    on_8d(game, event);
                    break;
                case SDLK_9:
                    on_9d(game, event);
                    break;
                case SDLK_0:
                    on_0d(game, event);
                    break;
                case SDLK_F1:
                    on_f1d(game, event);
                    break;
                case SDLK_F2:
                    on_f2d(game, event);
                    break;
                case SDLK_F3:
                    on_f3d(game, event);
                    break;
                case SDLK_F4:
                    on_f4d(game, event);
                    break;
                case SDLK_F5:
                    on_f5d(game, event);
                    break;
                case SDLK_F6:
                    on_f6d(game, event);
                    break;
                case SDLK_F7:
                    on_f7d(game, event);
                    break;
                case SDLK_F8:
                    on_f8d(game, event);
                    break;
                case SDLK_F9:
                    on_f9d(game, event);
                    break;
                case SDLK_F10:
                    on_f10d(game, event);
                    break;
                case SDLK_F11:
                    on_f11d(game, event);
                    break;
                case SDLK_F12:
                    on_f12d(game, event);
                    break;
                case SDLK_MINUS:
                    on_minusd(game, event);
                    break;
                case SDLK_EQUALS:
                    on_equald(game, event);
                    break;
                case SDLK_BACKQUOTE:
                    on_backquoted(game, event);
                    break;
                case SDLK_BACKSLASH:
                    on_backslashd(game, event);
                    break;
                case SDLK_LEFTBRACKET:
                    on_leftbracketd(game, event);
                    break;
                case SDLK_RIGHTBRACKET:
                    on_rightbracketd(game, event);
                    break;
                case SDLK_SEMICOLON:
                    on_semicolond(game, event);
                    break;
                case SDLK_QUOTE:
                    on_quoted(game, event);
                    break;
                case SDLK_COMMA:
                    on_commad(game, event);
                    break;
                case SDLK_PERIOD:
                    on_periodd(game, event);
                    break;
                case SDLK_SLASH:
                    on_slashd(game, event);
                    break;
                case SDLK_UP:
                    on_upd(game, event);
                    break;
                case SDLK_DOWN:
                    on_downd(game, event);
                    break;
                case SDLK_RIGHT:
                    on_rightd(game, event);
                    break;
                case SDLK_LEFT:
                    on_leftd(game, event);
                    break;
                case SDLK_RSHIFT:
                    on_rshiftd(game, event);
                    break;
                case SDLK_RCTRL:
                    on_rctrld(game, event);
                    break;
                case SDLK_RALT:
                    on_raltd(game, event);
                    break;
                case SDLK_LSHIFT:
                    on_lshiftd(game, event);
                    break;
                case SDLK_LCTRL:
                    on_lctrld(game, event);
                    break;      
                case SDLK_LALT:
                    on_laltd(game, event);
                    break;
                case SDLK_BACKSPACE:
                    on_backd(game, event);
                    break;  
                case SDLK_RETURN:
                    on_returnd(game, event);
                    break;
                case SDLK_CAPSLOCK:
                    on_capsd(game, event);
                    break;  
                case SDLK_NUMLOCK:
                    on_numd(game, event);
                    break;
                case SDLK_SCROLLOCK:
                    on_scrolld(game, event);
                    break;  
                case SDLK_DELETE:
                    on_deleted(game, event);
                    break;
                case SDLK_HOME:
                    on_homed(game, event);
                    break;  
                case SDLK_END:
                    on_endd(game, event);
                    break;
                case SDLK_PAGEUP:
                    on_pageupd(game, event);
                    break;  
                case SDLK_PAGEDOWN:
                    on_pagedownd(game, event);
                    break;
                case SDLK_PAUSE:
                    on_paused(game, event);
                    break;  
                case SDLK_INSERT:
                    on_insertd(game, event);
                    break;
                case SDLK_ESCAPE:
                    on_escaped(game, event);
                    break;  
                case SDLK_PRINT:
                    on_printd(game, event);
                    break;
                case SDLK_BREAK:
                    on_breakd(game, event);
                    break;  
                case SDLK_TAB:
                    on_tabd(game, event);
                    break;
                case SDLK_CLEAR:
                    on_cleard(game, event);
                    break;  
                case SDLK_SPACE:
                    on_spaced(game, event);
                    break;
                }
            // </editor-fold>
            break;
        case SDL_KEYUP:
            // <editor-fold defaultstate="collapsed" desc="All the keys...">
            switch (event->key.keysym.sym){
                case SDLK_a:
                    on_au(game, event);
                    break;
                case SDLK_b:
                    on_bu(game, event);
                    break;
                case SDLK_c:
                    on_cu(game, event);
                    break;
                case SDLK_d:
                    on_du(game, event);
                    break;
                case SDLK_e:
                    on_eu(game, event);
                    break;
                case SDLK_f:
                    on_fu(game, event);
                    break;
                case SDLK_g:
                    on_gu(game, event);
                    break;
                case SDLK_h:
                    on_hu(game, event);
                    break;
                case SDLK_i:
                    on_iu(game, event);
                    break;
                case SDLK_j:
                    on_ju(game, event);
                    break;
                case SDLK_k:
                    on_ku(game, event);
                    break;
                case SDLK_l:
                    on_lu(game, event);
                    break;
                case SDLK_m:
                    on_mu(game, event);
                    break;
                case SDLK_n:
                    on_nu(game, event);
                    break;
                case SDLK_o:
                    on_ou(game, event);
                    break;
                case SDLK_p:
                    on_pu(game, event);
                    break;
                case SDLK_q:
                    on_qu(game, event);
                    break;
                case SDLK_r:
                    on_ru(game, event);
                    break;
                case SDLK_s:
                    on_su(game, event);
                    break;
                case SDLK_t:
                    on_tu(game, event);
                    break;
                case SDLK_u:
                    on_uu(game, event);
                    break;
                case SDLK_v:
                    on_vu(game, event);
                    break;
                case SDLK_w:
                    on_wu(game, event);
                    break;
                case SDLK_x:
                    on_xu(game, event);
                    break;
                case SDLK_y:
                    on_yu(game, event);
                    break;
                case SDLK_z:
                    on_zu(game, event);
                    break;
                case SDLK_1:
                    on_1u(game, event);
                    break;
                case SDLK_2:
                    on_2u(game, event);
                    break;
                case SDLK_3:
                    on_3u(game, event);
                    break;
                case SDLK_4:
                    on_4u(game, event);
                    break;
                case SDLK_5:
                    on_5u(game, event);
                    break;
                case SDLK_6:
                    on_6u(game, event);
                    break;
                case SDLK_7:
                    on_7u(game, event);
                    break;
                case SDLK_8:
                    on_8u(game, event);
                    break;
                case SDLK_9:
                    on_9u(game, event);
                    break;
                case SDLK_0:
                    on_0u(game, event);
                    break;
                case SDLK_F1:
                    on_f1u(game, event);
                    break;
                case SDLK_F2:
                    on_f2u(game, event);
                    break;
                case SDLK_F3:
                    on_f3u(game, event);
                    break;
                case SDLK_F4:
                    on_f4u(game, event);
                    break;
                case SDLK_F5:
                    on_f5u(game, event);
                    break;
                case SDLK_F6:
                    on_f6u(game, event);
                    break;
                case SDLK_F7:
                    on_f7u(game, event);
                    break;
                case SDLK_F8:
                    on_f8u(game, event);
                    break;
                case SDLK_F9:
                    on_f9u(game, event);
                    break;
                case SDLK_F10:
                    on_f10u(game, event);
                    break;
                case SDLK_F11:
                    on_f11u(game, event);
                    break;
                case SDLK_F12:
                    on_f12u(game, event);
                    break;
                case SDLK_MINUS:
                    on_minusu(game, event);
                    break;
                case SDLK_EQUALS:
                    on_equalu(game, event);
                    break;
                case SDLK_BACKQUOTE:
                    on_backquoteu(game, event);
                    break;
                case SDLK_BACKSLASH:
                    on_backslashu(game, event);
                    break;
                case SDLK_LEFTBRACKET:
                    on_leftbracketu(game, event);
                    break;
                case SDLK_RIGHTBRACKET:
                    on_rightbracketu(game, event);
                    break;
                case SDLK_SEMICOLON:
                    on_semicolonu(game, event);
                    break;
                case SDLK_QUOTE:
                    on_quoteu(game, event);
                    break;
                case SDLK_COMMA:
                    on_commau(game, event);
                    break;
                case SDLK_PERIOD:
                    on_periodu(game, event);
                    break;
                case SDLK_SLASH:
                    on_slashu(game, event);
                    break;
                case SDLK_UP:
                    on_upu(game, event);
                    break;
                case SDLK_DOWN:
                    on_downu(game, event);
                    break;
                case SDLK_RIGHT:
                    on_rightu(game, event);
                    break;
                case SDLK_LEFT:
                    on_leftu(game, event);
                    break;
                case SDLK_RSHIFT:
                    on_rshiftu(game, event);
                    break;
                case SDLK_RCTRL:
                    on_rctrlu(game, event);
                    break;
                case SDLK_RALT:
                    on_raltu(game, event);
                    break;
                case SDLK_LSHIFT:
                    on_lshiftu(game, event);
                    break;
                case SDLK_LCTRL:
                    on_lctrlu(game, event);
                    break;      
                case SDLK_LALT:
                    on_laltu(game, event);
                    break;
                case SDLK_BACKSPACE:
                    on_backu(game, event);
                    break;  
                case SDLK_RETURN:
                    on_returnu(game, event);
                    break;
                case SDLK_CAPSLOCK:
                    on_capsu(game, event);
                    break;  
                case SDLK_NUMLOCK:
                    on_numu(game, event);
                    break;
                case SDLK_SCROLLOCK:
                    on_scrollu(game, event);
                    break;  
                case SDLK_DELETE:
                    on_deleteu(game, event);
                    break;
                case SDLK_HOME:
                    on_homeu(game, event);
                    break;  
                case SDLK_END:
                    on_endu(game, event);
                    break;
                case SDLK_PAGEUP:
                    on_pageupu(game, event);
                    break;  
                case SDLK_PAGEDOWN:
                    on_pagedownu(game, event);
                    break;
                case SDLK_PAUSE:
                    on_pauseu(game, event);
                    break;  
                case SDLK_INSERT:
                    on_insertu(game, event);
                    break;
                case SDLK_ESCAPE:
                    on_escapeu(game, event);
                    break;  
                case SDLK_PRINT:
                    on_printu(game, event);
                    break;
                case SDLK_BREAK:
                    on_breaku(game, event);
                    break;  
                case SDLK_TAB:
                    on_tabu(game, event);
                    break;
                case SDLK_CLEAR:
                    on_clearu(game, event);
                    break;  
                case SDLK_SPACE:
                    on_spaceu(game, event);
                    break;
                }
            // </editor-fold>
            break;
        case SDL_MOUSEBUTTONDOWN:
            on_mousedown(game, event);
            break;
        case SDL_MOUSEBUTTONUP:
            on_mouseup(game, event);
            break;
        case SDL_MOUSEMOTION:
            on_motion(game, event);
            break;
        case SDL_USEREVENT:
            on_user(game, event);
            break;
        case SDL_VIDEORESIZE:
            on_resize(game, event);
            break;
        case SDL_VIDEOEXPOSE:
            on_expose(game, event);
            break;
    }
  
}
// Finish on_quit
// <editor-fold defaultstate="collapsed" desc="All event declarations">

void EventHandler::on_au(Game *game, SDL_Event *event){}
void EventHandler::on_bu(Game *game, SDL_Event *event){}
void EventHandler::on_cu(Game *game, SDL_Event *event){}
void EventHandler::on_du(Game *game, SDL_Event *event){}
void EventHandler::on_eu(Game *game, SDL_Event *event){}
void EventHandler::on_fu(Game *game, SDL_Event *event){}
void EventHandler::on_gu(Game *game, SDL_Event *event){}
void EventHandler::on_hu(Game *game, SDL_Event *event){}
void EventHandler::on_iu(Game *game, SDL_Event *event){}
void EventHandler::on_ju(Game *game, SDL_Event *event){}
void EventHandler::on_ku(Game *game, SDL_Event *event){}
void EventHandler::on_lu(Game *game, SDL_Event *event){}
void EventHandler::on_mu(Game *game, SDL_Event *event){}
void EventHandler::on_nu(Game *game, SDL_Event *event){}
void EventHandler::on_ou(Game *game, SDL_Event *event){}
void EventHandler::on_pu(Game *game, SDL_Event *event){}
void EventHandler::on_qu(Game *game, SDL_Event *event){}
void EventHandler::on_ru(Game *game, SDL_Event *event){}
void EventHandler::on_su(Game *game, SDL_Event *event){}
void EventHandler::on_tu(Game *game, SDL_Event *event){}
void EventHandler::on_uu(Game *game, SDL_Event *event){}
void EventHandler::on_vu(Game *game, SDL_Event *event){}
void EventHandler::on_wu(Game *game, SDL_Event *event){}
void EventHandler::on_xu(Game *game, SDL_Event *event){}
void EventHandler::on_yu(Game *game, SDL_Event *event){}
void EventHandler::on_zu(Game *game, SDL_Event *event){}

void EventHandler::on_1u(Game *game, SDL_Event *event){}
void EventHandler::on_2u(Game *game, SDL_Event *event){}
void EventHandler::on_3u(Game *game, SDL_Event *event){}
void EventHandler::on_4u(Game *game, SDL_Event *event){}
void EventHandler::on_5u(Game *game, SDL_Event *event){}
void EventHandler::on_6u(Game *game, SDL_Event *event){}
void EventHandler::on_7u(Game *game, SDL_Event *event){}
void EventHandler::on_8u(Game *game, SDL_Event *event){}
void EventHandler::on_9u(Game *game, SDL_Event *event){}
void EventHandler::on_0u(Game *game, SDL_Event *event){}

void EventHandler::on_f1u(Game *game, SDL_Event *event){}
void EventHandler::on_f2u(Game *game, SDL_Event *event){}
void EventHandler::on_f3u(Game *game, SDL_Event *event){}
void EventHandler::on_f4u(Game *game, SDL_Event *event){}
void EventHandler::on_f5u(Game *game, SDL_Event *event){}
void EventHandler::on_f6u(Game *game, SDL_Event *event){}
void EventHandler::on_f7u(Game *game, SDL_Event *event){}
void EventHandler::on_f8u(Game *game, SDL_Event *event){}
void EventHandler::on_f9u(Game *game, SDL_Event *event){}
void EventHandler::on_f10u(Game *game, SDL_Event *event){}
void EventHandler::on_f11u(Game *game, SDL_Event *event){}
void EventHandler::on_f12u(Game *game, SDL_Event *event){}

void EventHandler::on_minusu(Game *game, SDL_Event *event){}
void EventHandler::on_equalu(Game *game, SDL_Event *event){}
void EventHandler::on_backquoteu(Game *game, SDL_Event *event){}
void EventHandler::on_backslashu(Game *game, SDL_Event *event){}
void EventHandler::on_leftbracketu(Game *game, SDL_Event *event){}
void EventHandler::on_rightbracketu(Game *game, SDL_Event *event){}
void EventHandler::on_semicolonu(Game *game, SDL_Event *event){}
void EventHandler::on_quoteu(Game *game, SDL_Event *event){}
void EventHandler::on_commau(Game *game, SDL_Event *event){}
void EventHandler::on_periodu(Game *game, SDL_Event *event){}
void EventHandler::on_slashu(Game *game, SDL_Event *event){}
void EventHandler::on_upu(Game *game, SDL_Event *event){}
void EventHandler::on_downu(Game *game, SDL_Event *event){}
void EventHandler::on_rightu(Game *game, SDL_Event *event){}
void EventHandler::on_leftu(Game *game, SDL_Event *event){}

void EventHandler::on_rshiftu(Game *game, SDL_Event *event){}
void EventHandler::on_rctrlu(Game *game, SDL_Event *event){}
void EventHandler::on_raltu(Game *game, SDL_Event *event){}
void EventHandler::on_lshiftu(Game *game, SDL_Event *event){}
void EventHandler::on_lctrlu(Game *game, SDL_Event *event){}
void EventHandler::on_laltu(Game *game, SDL_Event *event){}
void EventHandler::on_backu(Game *game, SDL_Event *event){}
void EventHandler::on_returnu(Game *game, SDL_Event *event){}
void EventHandler::on_capsu(Game *game, SDL_Event *event){}
void EventHandler::on_numu(Game *game, SDL_Event *event){}
void EventHandler::on_scrollu(Game *game, SDL_Event *event){}
void EventHandler::on_deleteu(Game *game, SDL_Event *event){}
void EventHandler::on_homeu(Game *game, SDL_Event *event){}
void EventHandler::on_endu(Game *game, SDL_Event *event){}
void EventHandler::on_pageupu(Game *game, SDL_Event *event){}
void EventHandler::on_pagedownu(Game *game, SDL_Event *event){}
void EventHandler::on_pauseu(Game *game, SDL_Event *event){}
void EventHandler::on_insertu(Game *game, SDL_Event *event){}
void EventHandler::on_escapeu(Game *game, SDL_Event *event){}
void EventHandler::on_printu(Game *game, SDL_Event *event){}
void EventHandler::on_breaku(Game *game, SDL_Event *event){}
void EventHandler::on_tabu(Game *game, SDL_Event *event){}
void EventHandler::on_clearu(Game *game, SDL_Event *event){}
void EventHandler::on_spaceu(Game *game, SDL_Event *event){}

void EventHandler::on_ad(Game *game, SDL_Event *event){}
void EventHandler::on_bd(Game *game, SDL_Event *event){}
void EventHandler::on_cd(Game *game, SDL_Event *event){}
void EventHandler::on_dd(Game *game, SDL_Event *event){}
void EventHandler::on_ed(Game *game, SDL_Event *event){}
void EventHandler::on_fd(Game *game, SDL_Event *event){}
void EventHandler::on_gd(Game *game, SDL_Event *event){}
void EventHandler::on_hd(Game *game, SDL_Event *event){}
void EventHandler::on_id(Game *game, SDL_Event *event){}
void EventHandler::on_jd(Game *game, SDL_Event *event){}
void EventHandler::on_kd(Game *game, SDL_Event *event){}
void EventHandler::on_ld(Game *game, SDL_Event *event){}
void EventHandler::on_md(Game *game, SDL_Event *event){}
void EventHandler::on_nd(Game *game, SDL_Event *event){}
void EventHandler::on_od(Game *game, SDL_Event *event){}
void EventHandler::on_pd(Game *game, SDL_Event *event){}
void EventHandler::on_qd(Game *game, SDL_Event *event){}
void EventHandler::on_rd(Game *game, SDL_Event *event){}
void EventHandler::on_sd(Game *game, SDL_Event *event){}
void EventHandler::on_td(Game *game, SDL_Event *event){}
void EventHandler::on_ud(Game *game, SDL_Event *event){}
void EventHandler::on_vd(Game *game, SDL_Event *event){}
void EventHandler::on_wd(Game *game, SDL_Event *event){}
void EventHandler::on_xd(Game *game, SDL_Event *event){}
void EventHandler::on_yd(Game *game, SDL_Event *event){}
void EventHandler::on_zd(Game *game, SDL_Event *event){}

void EventHandler::on_1d(Game *game, SDL_Event *event){}
void EventHandler::on_2d(Game *game, SDL_Event *event){}
void EventHandler::on_3d(Game *game, SDL_Event *event){}
void EventHandler::on_4d(Game *game, SDL_Event *event){}
void EventHandler::on_5d(Game *game, SDL_Event *event){}
void EventHandler::on_6d(Game *game, SDL_Event *event){}
void EventHandler::on_7d(Game *game, SDL_Event *event){}
void EventHandler::on_8d(Game *game, SDL_Event *event){}
void EventHandler::on_9d(Game *game, SDL_Event *event){}
void EventHandler::on_0d(Game *game, SDL_Event *event){}

void EventHandler::on_f1d(Game *game, SDL_Event *event){}
void EventHandler::on_f2d(Game *game, SDL_Event *event){}
void EventHandler::on_f3d(Game *game, SDL_Event *event){}
void EventHandler::on_f4d(Game *game, SDL_Event *event){}
void EventHandler::on_f5d(Game *game, SDL_Event *event){}
void EventHandler::on_f6d(Game *game, SDL_Event *event){}
void EventHandler::on_f7d(Game *game, SDL_Event *event){}
void EventHandler::on_f8d(Game *game, SDL_Event *event){}
void EventHandler::on_f9d(Game *game, SDL_Event *event){}
void EventHandler::on_f10d(Game *game, SDL_Event *event){}
void EventHandler::on_f11d(Game *game, SDL_Event *event){}
void EventHandler::on_f12d(Game *game, SDL_Event *event){}

void EventHandler::on_minusd(Game *game, SDL_Event *event){}
void EventHandler::on_equald(Game *game, SDL_Event *event){}
void EventHandler::on_backquoted(Game *game, SDL_Event *event){}
void EventHandler::on_backslashd(Game *game, SDL_Event *event){}
void EventHandler::on_leftbracketd(Game *game, SDL_Event *event){}
void EventHandler::on_rightbracketd(Game *game, SDL_Event *event){}
void EventHandler::on_semicolond(Game *game, SDL_Event *event){}
void EventHandler::on_quoted(Game *game, SDL_Event *event){}
void EventHandler::on_commad(Game *game, SDL_Event *event){}
void EventHandler::on_periodd(Game *game, SDL_Event *event){}
void EventHandler::on_slashd(Game *game, SDL_Event *event){}
void EventHandler::on_upd(Game *game, SDL_Event *event){}
void EventHandler::on_downd(Game *game, SDL_Event *event){}
void EventHandler::on_rightd(Game *game, SDL_Event *event){}
void EventHandler::on_leftd(Game *game, SDL_Event *event){}

void EventHandler::on_rshiftd(Game *game, SDL_Event *event){}
void EventHandler::on_rctrld(Game *game, SDL_Event *event){}
void EventHandler::on_raltd(Game *game, SDL_Event *event){}
void EventHandler::on_lshiftd(Game *game, SDL_Event *event){}
void EventHandler::on_lctrld(Game *game, SDL_Event *event){}
void EventHandler::on_laltd(Game *game, SDL_Event *event){}
void EventHandler::on_backd(Game *game, SDL_Event *event){}
void EventHandler::on_returnd(Game *game, SDL_Event *event){}
void EventHandler::on_capsd(Game *game, SDL_Event *event){}
void EventHandler::on_numd(Game *game, SDL_Event *event){}
void EventHandler::on_scrolld(Game *game, SDL_Event *event){}
void EventHandler::on_deleted(Game *game, SDL_Event *event){}
void EventHandler::on_homed(Game *game, SDL_Event *event){}
void EventHandler::on_endd(Game *game, SDL_Event *event){}
void EventHandler::on_pageupd(Game *game, SDL_Event *event){}
void EventHandler::on_pagedownd(Game *game, SDL_Event *event){}
void EventHandler::on_paused(Game *game, SDL_Event *event){}
void EventHandler::on_insertd(Game *game, SDL_Event *event){}
void EventHandler::on_escaped(Game *game, SDL_Event *event){}
void EventHandler::on_printd(Game *game, SDL_Event *event){}
void EventHandler::on_breakd(Game *game, SDL_Event *event){}
void EventHandler::on_tabd(Game *game, SDL_Event *event){}
void EventHandler::on_cleard(Game *game, SDL_Event *event){}
void EventHandler::on_spaced(Game *game, SDL_Event *event){}

void EventHandler::on_mouseup(Game *game, SDL_Event *event){}
void EventHandler::on_mousedown(Game *game, SDL_Event *event){}
void EventHandler::on_motion(Game *game, SDL_Event *event){}
void EventHandler::on_active(Game *game, SDL_Event *event){}
void EventHandler::on_user(Game *game, SDL_Event *event){}
void EventHandler::on_expose(Game *game, SDL_Event *event){}

void EventHandler::on_quit(Game *game, SDL_Event *event){
    game->quit();
}

void EventHandler::on_resize(Game *game, SDL_Event *event){
//     = SDL_SetVideoMode(event.resize.w, event.resize.h, 32, SDL_HWSURFACE | SDL_RESIZABLE); // Create new window
}

// </editor-fold>
