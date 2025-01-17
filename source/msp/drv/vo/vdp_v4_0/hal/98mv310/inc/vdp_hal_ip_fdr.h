#ifndef __VDP_HAL_IP_FDR_H__
#define __VDP_HAL_IP_FDR_H__

#include "hi_reg_common.h"
#include "vdp_hal_comm.h"

//-------------------------------------------------
// vid fdr driver
//-------------------------------------------------
HI_VOID VDP_FDR_VID_SetMrgMuteMode     ( HI_U32 offset, HI_U32 mrg_mute_mode     );
HI_VOID VDP_FDR_VID_SetFdrCkGtEn       ( HI_U32 offset, HI_U32 fdr_ck_gt_en      );
HI_VOID VDP_FDR_VID_SetMrgEnable       ( HI_U32 offset, HI_U32 mrg_enable        );
HI_VOID VDP_FDR_VID_SetVicapMuteEn     ( HI_U32 offset, HI_U32 vicap_mute_en     );
HI_VOID VDP_FDR_VID_SetMuteReqEn       ( HI_U32 offset, HI_U32 mute_req_en       );
HI_VOID VDP_FDR_VID_SetMuteEn          ( HI_U32 offset, HI_U32 mute_en           );
HI_VOID VDP_FDR_VID_SetRmode3d         ( HI_U32 offset, HI_U32 rmode_3d          );
HI_VOID VDP_FDR_VID_SetChmCopyEn       ( HI_U32 offset, HI_U32 chm_copy_en       );
HI_VOID VDP_FDR_VID_SetFlipEn          ( HI_U32 offset, HI_U32 flip_en           );
HI_VOID VDP_FDR_VID_SetLmDrawMode      ( HI_U32 offset, HI_U32 lm_draw_mode      );
HI_VOID VDP_FDR_VID_SetChmDrawMode     ( HI_U32 offset, HI_U32 chm_draw_mode     );
HI_VOID VDP_FDR_VID_SetLmRmode         ( HI_U32 offset, HI_U32 lm_rmode          );
HI_VOID VDP_FDR_VID_SetChmRmode        ( HI_U32 offset, HI_U32 chm_rmode         );
HI_VOID VDP_FDR_VID_SetPreRdEn         ( HI_U32 offset, HI_U32 pre_rd_en         );
HI_VOID VDP_FDR_VID_SetReqLdMode       ( HI_U32 offset, HI_U32 req_ld_mode       );
HI_VOID VDP_FDR_VID_SetReqInterval     ( HI_U32 offset, HI_U32 req_interval      );
HI_VOID VDP_FDR_VID_SetOflMaster       ( HI_U32 offset, HI_U32 ofl_master        );
HI_VOID VDP_FDR_VID_SetReqLen          ( HI_U32 offset, HI_U32 req_len           );
HI_VOID VDP_FDR_VID_SetReqCtrl         ( HI_U32 offset, HI_U32 req_ctrl          );
HI_VOID VDP_FDR_VID_SetDcmpFrmMaxEn    ( HI_U32 offset, HI_U32 dcmp_frm_max_en   );
HI_VOID VDP_FDR_VID_SetTestpatternEn   ( HI_U32 offset, HI_U32 testpattern_en    );
HI_VOID VDP_FDR_VID_SetSinglePortMode  ( HI_U32 offset, HI_U32 single_port_mode  );
HI_VOID VDP_FDR_VID_SetUvOrderEn       ( HI_U32 offset, HI_U32 uv_order_en       );
HI_VOID VDP_FDR_VID_SetDrawPixelMode   ( HI_U32 offset, HI_U32 draw_pixel_mode   );
HI_VOID VDP_FDR_VID_SetMuteY           ( HI_U32 offset, HI_U32 mute_y            );
HI_VOID VDP_FDR_VID_SetMuteCb          ( HI_U32 offset, HI_U32 mute_cb           );
HI_VOID VDP_FDR_VID_SetMuteCr          ( HI_U32 offset, HI_U32 mute_cr           );
HI_VOID VDP_FDR_VID_SetChmBypass3d     ( HI_U32 offset, HI_U32 chm_bypass_3d     );
HI_VOID VDP_FDR_VID_SetLmBypass3d      ( HI_U32 offset, HI_U32 lm_bypass_3d      );
HI_VOID VDP_FDR_VID_SetChmBypass2d     ( HI_U32 offset, HI_U32 chm_bypass_2d     );
HI_VOID VDP_FDR_VID_SetLmBypass2d      ( HI_U32 offset, HI_U32 lm_bypass_2d      );
HI_VOID VDP_FDR_VID_SetYFrmSize        ( HI_U32 offset, HI_U32 y_frm_size        );
HI_VOID VDP_FDR_VID_SetCFrmSize        ( HI_U32 offset, HI_U32 c_frm_size        );
HI_VOID VDP_FDR_VID_SetDcmpType        ( HI_U32 offset, HI_U32 dcmp_type         );
HI_VOID VDP_FDR_VID_SetDispMode        ( HI_U32 offset, HI_U32 disp_mode         );
HI_VOID VDP_FDR_VID_SetFieldType       ( HI_U32 offset, HI_U32 field_type        );
HI_VOID VDP_FDR_VID_SetDataWidth       ( HI_U32 offset, HI_U32 data_width        );
HI_VOID VDP_FDR_VID_SetDataFmt         ( HI_U32 offset, HI_U32 data_fmt          );
HI_VOID VDP_FDR_VID_SetDataType        ( HI_U32 offset, HI_U32 data_type         );
HI_VOID VDP_FDR_VID_SetSrcH            ( HI_U32 offset, HI_U32 src_h             );
HI_VOID VDP_FDR_VID_SetSrcW            ( HI_U32 offset, HI_U32 src_w             );
HI_VOID VDP_FDR_VID_SetSrcCropY        ( HI_U32 offset, HI_U32 src_crop_y        );
HI_VOID VDP_FDR_VID_SetSrcCropX        ( HI_U32 offset, HI_U32 src_crop_x        );
HI_VOID VDP_FDR_VID_SetIresoH          ( HI_U32 offset, HI_U32 ireso_h           );
HI_VOID VDP_FDR_VID_SetIresoW          ( HI_U32 offset, HI_U32 ireso_w           );
HI_VOID VDP_FDR_VID_SetVhdaddrH        ( HI_U32 offset, HI_U32 vhdaddr_h         );
HI_VOID VDP_FDR_VID_SetVhdaddrL        ( HI_U32 offset, HI_U32 vhdaddr_l         );
HI_VOID VDP_FDR_VID_SetVhdcaddrH       ( HI_U32 offset, HI_U32 vhdcaddr_h        );
HI_VOID VDP_FDR_VID_SetVhdcaddrL       ( HI_U32 offset, HI_U32 vhdcaddr_l        );
HI_VOID VDP_FDR_VID_SetVhdnaddrH       ( HI_U32 offset, HI_U32 vhdnaddr_h        );
HI_VOID VDP_FDR_VID_SetVhdnaddrL       ( HI_U32 offset, HI_U32 vhdnaddr_l        );
HI_VOID VDP_FDR_VID_SetVhdncaddrH      ( HI_U32 offset, HI_U32 vhdncaddr_h       );
HI_VOID VDP_FDR_VID_SetVhdncaddrL      ( HI_U32 offset, HI_U32 vhdncaddr_l       );
HI_VOID VDP_FDR_VID_SetHVhdaddrH       ( HI_U32 offset, HI_U32 h_vhdaddr_h       );
HI_VOID VDP_FDR_VID_SetHVhdaddrL       ( HI_U32 offset, HI_U32 h_vhdaddr_l       );
HI_VOID VDP_FDR_VID_SetHVhdcaddrH      ( HI_U32 offset, HI_U32 h_vhdcaddr_h      );
HI_VOID VDP_FDR_VID_SetHVhdcaddrL      ( HI_U32 offset, HI_U32 h_vhdcaddr_l      );
HI_VOID VDP_FDR_VID_SetBVhdaddrH       ( HI_U32 offset, HI_U32 b_vhdaddr_h       );
HI_VOID VDP_FDR_VID_SetBVhdaddrL       ( HI_U32 offset, HI_U32 b_vhdaddr_l       );
HI_VOID VDP_FDR_VID_SetBVhdcaddrH      ( HI_U32 offset, HI_U32 b_vhdcaddr_h      );
HI_VOID VDP_FDR_VID_SetBVhdcaddrL      ( HI_U32 offset, HI_U32 b_vhdcaddr_l      );
HI_VOID VDP_FDR_VID_SetChmStride       ( HI_U32 offset, HI_U32 chm_stride        );
HI_VOID VDP_FDR_VID_SetLmStride        ( HI_U32 offset, HI_U32 lm_stride         );
HI_VOID VDP_FDR_VID_SetChmTileStride   ( HI_U32 offset, HI_U32 chm_tile_stride   );
HI_VOID VDP_FDR_VID_SetLmTileStride    ( HI_U32 offset, HI_U32 lm_tile_stride    );
HI_VOID VDP_FDR_VID_SetChmHeadStride   ( HI_U32 offset, HI_U32 chm_head_stride   );
HI_VOID VDP_FDR_VID_SetLmHeadStride    ( HI_U32 offset, HI_U32 lm_head_stride    );
HI_VOID VDP_FDR_VID_SetTpMode          ( HI_U32 offset, HI_U32 tp_mode           );
HI_VOID VDP_FDR_VID_SetTpColorMode     ( HI_U32 offset, HI_U32 tp_color_mode     );
HI_VOID VDP_FDR_VID_SetTpLineW         ( HI_U32 offset, HI_U32 tp_line_w         );
HI_VOID VDP_FDR_VID_SetTpSpeed         ( HI_U32 offset, HI_U32 tp_speed          );
HI_VOID VDP_FDR_VID_SetTpSeed          ( HI_U32 offset, HI_U32 tp_seed           );
HI_VOID VDP_FDR_VID_SetFdrPressEn      ( HI_U32 offset, HI_U32 fdr_press_en      );
HI_VOID VDP_FDR_VID_SetChecksumEn      ( HI_U32 offset, HI_U32 checksum_en       );
HI_VOID VDP_FDR_VID_SetScopeDrdyNum    ( HI_U32 offset, HI_U32 scope_drdy_num    );
HI_VOID VDP_FDR_VID_SetMinDrdyNum      ( HI_U32 offset, HI_U32 min_drdy_num      );
HI_VOID VDP_FDR_VID_SetScopeNodrdyNum  ( HI_U32 offset, HI_U32 scope_nodrdy_num  );
HI_VOID VDP_FDR_VID_SetMinNodrdyNum    ( HI_U32 offset, HI_U32 min_nodrdy_num    );
HI_VOID VDP_FDR_VID_SetTunlThd         ( HI_U32 offset, HI_U32 tunl_thd          );
HI_VOID VDP_FDR_VID_SetTunlInterval    ( HI_U32 offset, HI_U32 tunl_interval     );
HI_VOID VDP_FDR_VID_SetTunlAddrH       ( HI_U32 offset, HI_U32 tunl_addr_h       );
HI_VOID VDP_FDR_VID_SetTunlAddrL       ( HI_U32 offset, HI_U32 tunl_addr_l       );


HI_VOID VDP_FDR_VID_SetYBsErr   ( HI_U32 offset, HI_U32 y_bs_err   );
HI_VOID VDP_FDR_VID_SetYConsume ( HI_U32 offset, HI_U32 y_consume  );
HI_VOID VDP_FDR_VID_SetYForgive ( HI_U32 offset, HI_U32 y_forgive  );
HI_VOID VDP_FDR_VID_SetYDcmpErr ( HI_U32 offset, HI_U32 y_dcmp_err );
HI_VOID VDP_FDR_VID_SetCBsErr   ( HI_U32 offset, HI_U32 c_bs_err   );
HI_VOID VDP_FDR_VID_SetCConsume ( HI_U32 offset, HI_U32 c_consume  );
HI_VOID VDP_FDR_VID_SetCForgive ( HI_U32 offset, HI_U32 c_forgive  );
HI_VOID VDP_FDR_VID_SetCDcmpErr ( HI_U32 offset, HI_U32 c_dcmp_err );

//-------------------------------------------------
// gfx fdr driver
//-------------------------------------------------
HI_VOID VDP_FDR_GFX_SetAddrMapEn      ( HI_U32 offset, HI_U32 addr_map_en      );
HI_VOID VDP_FDR_GFX_SetFdrCkGtEn      ( HI_U32 offset, HI_U32 fdr_ck_gt_en     );
HI_VOID VDP_FDR_GFX_SetMuteReqEn      ( HI_U32 offset, HI_U32 mute_req_en      );
HI_VOID VDP_FDR_GFX_SetMuteEn         ( HI_U32 offset, HI_U32 mute_en          );
HI_VOID VDP_FDR_GFX_SetRmode3d        ( HI_U32 offset, HI_U32 rmode_3d         );
HI_VOID VDP_FDR_GFX_SetFlipEn         ( HI_U32 offset, HI_U32 flip_en          );
HI_VOID VDP_FDR_GFX_SetDrawMode       ( HI_U32 offset, HI_U32 draw_mode        );
HI_VOID VDP_FDR_GFX_SetReadMode       ( HI_U32 offset, HI_U32 read_mode        );
HI_VOID VDP_FDR_GFX_SetReqLdMode      ( HI_U32 offset, HI_U32 req_ld_mode      );
HI_VOID VDP_FDR_GFX_SetReqInterval    ( HI_U32 offset, HI_U32 req_interval     );
HI_VOID VDP_FDR_GFX_SetOflMaster      ( HI_U32 offset, HI_U32 ofl_master       );
HI_VOID VDP_FDR_GFX_SetReqLen         ( HI_U32 offset, HI_U32 req_len          );
HI_VOID VDP_FDR_GFX_SetReqCtrl        ( HI_U32 offset, HI_U32 req_ctrl         );
HI_VOID VDP_FDR_GFX_SetTestpatternEn  ( HI_U32 offset, HI_U32 testpattern_en   );
HI_VOID VDP_FDR_GFX_SetPremultiEn     ( HI_U32 offset, HI_U32 premulti_en      );
HI_VOID VDP_FDR_GFX_SetBitext         ( HI_U32 offset, HI_U32 bitext           );
HI_VOID VDP_FDR_GFX_SetKeyEn          ( HI_U32 offset, HI_U32 key_en           );
HI_VOID VDP_FDR_GFX_SetKeyMode        ( HI_U32 offset, HI_U32 key_mode         );
HI_VOID VDP_FDR_GFX_SetPalphaEn       ( HI_U32 offset, HI_U32 palpha_en        );
HI_VOID VDP_FDR_GFX_SetPalphaRange    ( HI_U32 offset, HI_U32 palpha_range     );
HI_VOID VDP_FDR_GFX_SetMuteAlpha      ( HI_U32 offset, HI_U32 mute_alpha       );
HI_VOID VDP_FDR_GFX_SetMuteY          ( HI_U32 offset, HI_U32 mute_y           );
HI_VOID VDP_FDR_GFX_SetMuteCb         ( HI_U32 offset, HI_U32 mute_cb          );
HI_VOID VDP_FDR_GFX_SetMuteCr         ( HI_U32 offset, HI_U32 mute_cr          );
HI_VOID VDP_FDR_GFX_SetSmmuBypassH3d  ( HI_U32 offset, HI_U32 smmu_bypass_h3d  );
HI_VOID VDP_FDR_GFX_SetSmmuBypassH2d  ( HI_U32 offset, HI_U32 smmu_bypass_h2d  );
HI_VOID VDP_FDR_GFX_SetSmmuBypass3d   ( HI_U32 offset, HI_U32 smmu_bypass_3d   );
HI_VOID VDP_FDR_GFX_SetSmmuBypass2d   ( HI_U32 offset, HI_U32 smmu_bypass_2d   );
HI_VOID VDP_FDR_GFX_SetAlpha1         ( HI_U32 offset, HI_U32 alpha_1          );
HI_VOID VDP_FDR_GFX_SetAlpha0         ( HI_U32 offset, HI_U32 alpha_0          );
HI_VOID VDP_FDR_GFX_SetFrameSize0     ( HI_U32 offset, HI_U32 frame_size0      );
HI_VOID VDP_FDR_GFX_SetFrameSize1     ( HI_U32 offset, HI_U32 frame_size1      );
HI_VOID VDP_FDR_GFX_SetDcmpType       ( HI_U32 offset, HI_U32 dcmp_type        );
HI_VOID VDP_FDR_GFX_SetDispMode       ( HI_U32 offset, HI_U32 disp_mode        );
HI_VOID VDP_FDR_GFX_SetTyp            ( HI_U32 offset, HI_U32 typ              );
HI_VOID VDP_FDR_GFX_SetIfmt           ( HI_U32 offset, HI_U32 ifmt             );
HI_VOID VDP_FDR_GFX_SetSrcH           ( HI_U32 offset, HI_U32 src_h            );
HI_VOID VDP_FDR_GFX_SetSrcW           ( HI_U32 offset, HI_U32 src_w            );
HI_VOID VDP_FDR_GFX_SetSrcCropY       ( HI_U32 offset, HI_U32 src_crop_y       );
HI_VOID VDP_FDR_GFX_SetSrcCropX       ( HI_U32 offset, HI_U32 src_crop_x       );
HI_VOID VDP_FDR_GFX_SetIresoH         ( HI_U32 offset, HI_U32 ireso_h          );
HI_VOID VDP_FDR_GFX_SetIresoW         ( HI_U32 offset, HI_U32 ireso_w          );
HI_VOID VDP_FDR_GFX_SetGfxAddrH       ( HI_U32 offset, HI_U32 gfx_addr_h       );
HI_VOID VDP_FDR_GFX_SetGfxAddrL       ( HI_U32 offset, HI_U32 gfx_addr_l       );
HI_VOID VDP_FDR_GFX_SetGfxNaddrH      ( HI_U32 offset, HI_U32 gfx_naddr_h      );
HI_VOID VDP_FDR_GFX_SetGfxNaddrL      ( HI_U32 offset, HI_U32 gfx_naddr_l      );
HI_VOID VDP_FDR_GFX_SetDcmpStride     ( HI_U32 offset, HI_U32 dcmp_stride      );
HI_VOID VDP_FDR_GFX_SetSurfaceStride  ( HI_U32 offset, HI_U32 surface_stride   );
HI_VOID VDP_FDR_GFX_SetDcmpAddrH      ( HI_U32 offset, HI_U32 dcmp_addr_h      );
HI_VOID VDP_FDR_GFX_SetDcmpAddrL      ( HI_U32 offset, HI_U32 dcmp_addr_l      );
HI_VOID VDP_FDR_GFX_SetDcmpNaddrH     ( HI_U32 offset, HI_U32 dcmp_naddr_h     );
HI_VOID VDP_FDR_GFX_SetDcmpNaddrL     ( HI_U32 offset, HI_U32 dcmp_naddr_l     );
HI_VOID VDP_FDR_GFX_SetHAddrH         ( HI_U32 offset, HI_U32 h_addr_h         );
HI_VOID VDP_FDR_GFX_SetHAddrL         ( HI_U32 offset, HI_U32 h_addr_l         );
HI_VOID VDP_FDR_GFX_SetHead2Stride    ( HI_U32 offset, HI_U32 head2_stride     );
HI_VOID VDP_FDR_GFX_SetHeadStride     ( HI_U32 offset, HI_U32 head_stride      );
HI_VOID VDP_FDR_GFX_SetH2AddrH        ( HI_U32 offset, HI_U32 h2_addr_h        );
HI_VOID VDP_FDR_GFX_SetH2AddrL        ( HI_U32 offset, HI_U32 h2_addr_l        );
HI_VOID VDP_FDR_GFX_SetKeyRMax        ( HI_U32 offset, HI_U32 key_r_max        );
HI_VOID VDP_FDR_GFX_SetKeyGMax        ( HI_U32 offset, HI_U32 key_g_max        );
HI_VOID VDP_FDR_GFX_SetKeyBMax        ( HI_U32 offset, HI_U32 key_b_max        );
HI_VOID VDP_FDR_GFX_SetKeyRMin        ( HI_U32 offset, HI_U32 key_r_min        );
HI_VOID VDP_FDR_GFX_SetKeyGMin        ( HI_U32 offset, HI_U32 key_g_min        );
HI_VOID VDP_FDR_GFX_SetKeyBMin        ( HI_U32 offset, HI_U32 key_b_min        );
HI_VOID VDP_FDR_GFX_SetKeyRMsk        ( HI_U32 offset, HI_U32 key_r_msk        );
HI_VOID VDP_FDR_GFX_SetKeyGMsk        ( HI_U32 offset, HI_U32 key_g_msk        );
HI_VOID VDP_FDR_GFX_SetKeyBMsk        ( HI_U32 offset, HI_U32 key_b_msk        );
HI_VOID VDP_FDR_GFX_SetTpMode         ( HI_U32 offset, HI_U32 tp_mode          );
HI_VOID VDP_FDR_GFX_SetTpColorMode    ( HI_U32 offset, HI_U32 tp_color_mode    );
HI_VOID VDP_FDR_GFX_SetTpLineW        ( HI_U32 offset, HI_U32 tp_line_w        );
HI_VOID VDP_FDR_GFX_SetTpSpeed        ( HI_U32 offset, HI_U32 tp_speed         );
HI_VOID VDP_FDR_GFX_SetTpSeed         ( HI_U32 offset, HI_U32 tp_seed          );
HI_VOID VDP_FDR_GFX_SetFdrPressEn     ( HI_U32 offset, HI_U32 fdr_press_en     );
HI_VOID VDP_FDR_GFX_SetChecksumEn     ( HI_U32 offset, HI_U32 checksum_en      );
HI_VOID VDP_FDR_GFX_SetScopeDrdyNum   ( HI_U32 offset, HI_U32 scope_drdy_num   );
HI_VOID VDP_FDR_GFX_SetMinDrdyNum     ( HI_U32 offset, HI_U32 min_drdy_num     );
HI_VOID VDP_FDR_GFX_SetScopeNodrdyNum ( HI_U32 offset, HI_U32 scope_nodrdy_num );
HI_VOID VDP_FDR_GFX_SetMinNodrdyNum   ( HI_U32 offset, HI_U32 min_nodrdy_num   );
HI_VOID VDP_FDR_GFX_SetWrongGb        ( HI_U32 offset, HI_U32 wrong_gb         );
HI_VOID VDP_FDR_GFX_SetConsumeGb      ( HI_U32 offset, HI_U32 consume_gb       );
HI_VOID VDP_FDR_GFX_SetForgiveGb      ( HI_U32 offset, HI_U32 forgive_gb       );
HI_VOID VDP_FDR_GFX_SetWrongAr        ( HI_U32 offset, HI_U32 wrong_ar         );
HI_VOID VDP_FDR_GFX_SetConsumeAr      ( HI_U32 offset, HI_U32 consume_ar       );
HI_VOID VDP_FDR_GFX_SetForgiveAr      ( HI_U32 offset, HI_U32 forgive_ar       );

#endif

