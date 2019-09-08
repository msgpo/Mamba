#ifdef FIRMWARE_455C

    #define FIRMWARE_VERSION                                 0x455
    #define FIRMWARE_CEX                                     FIRMWARE_VERSION

    #ifdef PS3M_API
        #define PS3MAPI_FW_TYPE                              "CEX MAMBA"
        #define PS3MAPI_IDPS_1                               0x80000000003E17B0ULL
        #define PS3MAPI_IDPS_2                               0x8000000000474F1CULL
        #define PS3MAPI_PSID                                 0x8000000000474F34ULL
    #endif

    /* lv2 */
    #define TOC                                              0x34E620
    #define open_shared_kernel_object_symbol                 0x12484
    #define close_kernel_object_handle_symbol                0x11AA4
    #define open_kernel_object_symbol                        0x12674
    #define alloc_symbol                                     0x643B4
    #define dealloc_symbol                                   0x647F0
    #define copy_to_user_symbol                              0xF86C
    #define copy_from_user_symbol                            0xFA88
    #define copy_to_process_symbol                           0xF924
    #define copy_from_process_symbol                         0xF734
    #define page_allocate_symbol                             0x5FF24
    #define page_free_symbol                                 0x5F988
    #define page_export_to_proc_symbol                       0x600C0
    #define page_unexport_from_proc_symbol                   0x5F87C
    #define kernel_ea_to_lpar_addr_symbol                    0x6FCA8
    #define map_process_memory_symbol                        0x76DC8
    #define memcpy_symbol                                    0x7E488
    #define memset_symbol                                    0x4D6D8
    #define memcmp_symbol                                    0x4C9E8
    #define printf_symbol                                    0x27A530
    #define printfnull_symbol                                0x27EFA0
    #define sprintf_symbol                                   0x4EB00
    #define snprintf_symbol                                  0x4EA6C
    #define strcpy_symbol                                    0x4D884
    #define strncpy_symbol                                   0x4D94C
    #define strlen_symbol                                    0x4D8AC
    #define strcat_symbol                                    0x4D7B4
    #define strcmp_symbol                                    0x4D830
    #define strncmp_symbol                                   0x4D8D8
    #define strchr_symbol                                    0x4D7EC
    #define spin_lock_irqsave_ex_symbol                      0x277630
    #define spin_unlock_irqrestore_ex_symbol                 0x277604
    #define load_process_symbol                              0x5004
    #define ppu_thread_create_symbol                         0x13F3C
    #define ppu_thread_exit_symbol                           0x13FF4
    #define ppu_thread_join_symbol                           0x14048
    #define ppu_thread_delay_symbol                          0x28810
    #define create_user_thread2_symbol                       0x250F4
    #define start_thread_symbol                              0x23DC0
    #define run_thread_symbol                                0x235F0
    #define register_thread_symbol                           0x27183C
    #define allocate_user_stack_symbol                       0x272024
    #define mutex_create_symbol                              0x136B0
    #define mutex_destroy_symbol                             0x13648
    #define mutex_lock_symbol                                0x13640
    #define mutex_unlock_symbol                              0x13638
    #define event_port_create_symbol                         0x130EC
    #define event_port_destroy_symbol                        0x13554
    #define event_port_connect_symbol                        0x135CC
    #define event_port_disconnect_symbol                     0x134F8
    #define event_port_send_symbol                           0x130E4
    #define event_queue_create_symbol                        0x133F4
    #define event_queue_destroy_symbol                       0x1337C
    #define event_queue_receive_symbol                       0x131C0
    #define cellFsOpen_symbol                                0x29FA10
    #define cellFsClose_symbol                               0x29F878
    #define cellFsRead_symbol                                0x29F9B4
    #define cellFsWrite_symbol                               0x29F920
    #define cellFsLseek_symbol                               0x29EFA8
    #define cellFsStat_symbol                                0x29F22C
    #define cellFsUnlink_internal_symbol                     0x19D83C
    #define cellFsUtilMount_symbol                           0x29ED88
    #define cellFsUtilUmount_symbol                          0x29ED5C
    #define pathdup_from_user_symbol                         0x1A3730
    #define open_path_symbol                                 0x29F748
    #define open_fs_object_symbol                            0x18BB60
    #define close_fs_object_symbol                           0x18AA9C
    #define storage_get_device_info_symbol                   0x283980
    #define storage_open_symbol                              0x283390
    #define storage_close_symbol                             0x283180
    #define storage_read_symbol                              0x2826F0
    #define storage_send_device_command_symbol               0x28227C
    #define storage_map_io_memory_symbol                     0x28383C
    #define storage_unmap_io_memory_symbol                   0x283708
    #define storage_internal_get_device_object_symbol        0x281D34
    #define decrypt_func_symbol                              0x349DC
    #define lv1_call_99_wrapper_symbol                       0x4EF14
    #define modules_verification_symbol                      0x586E8
    #define prx_load_module_symbol                           0x88680
    #define prx_start_module_symbol                          0x8734C
    #define prx_stop_module_symbol                           0x88724
    #define prx_unload_module_symbol                         0x87080
    #define prx_get_module_info_symbol                       0x86B08
    #define prx_get_module_list_symbol                       0x86B88
    #define extend_kstack_symbol                             0x6FC00
    #define get_pseudo_random_number_symbol                  0x2321D4
    #define syscall_table_symbol                             0x362680
    #define syscall_call_offset                              0x27FA84
    #define read_bdvd0_symbol                                0x1AE6A0
    #define read_bdvd1_symbol                                0x1B02CC
    #define read_bdvd2_symbol                                0x1BD454
    #define device_event_port_send_call                      0x28BEEC
    #define process_map_caller_call                          0x4D24
    #define fsloop_open_call                                 0x29FBA8
    #define fsloop_close_call                                0x29FBF8
    #define fsloop_read_call                                 0x29FC38
    #define io_rtoc_entry_1                                 -0x1B8
    #define io_sub_rtoc_entry_1                             -0x7EA0
    #define decrypt_rtoc_entry_2                            -0x66A8
    #define storage_rtoc_entry_1                             0x1E10
    #define device_event_rtoc_entry_1                        0x2080
    #define process_rtoc_entry_1                            -0x7800
    #define patch_func2                                      0x59990
    #define patch_func2_offset                               0x2C
    #define user_thread_prio_patch                           0x20470
    #define user_thread_prio_patch2                          0x2047C
    #define shutdown_patch_offset                            0xAAB8
    #define shutdown_copy_params_call                        0xAACC

    /* hash */
    #define EXPLORE_PLUGIN_HASH                         0xACF4AF2B000EC3A6
    #define EXPLORE_CATEGORY_GAME_HASH                  0x9CB3205600056C47
    #define GAME_EXT_PLUGIN_HASH                        0xE274AF7B0001E2C8
    #define LIBFS_EXTERNAL_HASH                         0x5BC7BCE800006477
    #define PSP_EMULATOR_HASH                           0x7BE641F500023794
    #define PEMUCORELIB_HASH                            0xF349A563000C0CFC
    #define EMULATOR_API_HASH                           0xA9F5B37A0001BB36
    #define EMULATOR_DRM_HASH                           0xA324DC4A0000539C
    #define EMULATOR_DRM_DATA_HASH                      0x1D8D2DA00001B6E4
    #define LIBSYSUTIL_SAVEDATA_PSP_HASH                0x57BBC04800003207

    /* lv1 */
    #define vsh_pos_in_ram                              0x840000

    /* vsh */
    #define ps2tonet_patch                              0xC4C5C
    #define ps2tonet_size_patch                         0xC4C50
    #define vmode_patch_offset                          0x4430E8
    #define psp_drm_patch1                              0x24071C
    #define psp_drm_patch2                              0x2411BC
    #define psp_drm_patch3                              0x240DF8
    #define psp_drm_patch4                              0x241604
    #define psp_drm_patchA                              0x240838
    #define psp_drm_patchB                              0x2410D8
    #define psp_drm_patchC                              0x240270
    #define psp_drm_patchD                              0x240820
    #define psp_drm_patchE                              0x240824
    #define psp_drm_patchF                              0x2411F0
    #define psp_extra_drm_patch                         0x0

    /* explore_plugin */
    #define ps2_nonbw_offset                            0xDD754

    /* explore_category_game */
    #define ps2_nonbw_offset2                           0x68430

    /* game_ext_plugin */
    #define ps2_nonbw_offset3                           0x16850

    /* psp_emulator */
    #define psp_set_psp_mode_offset                     0x1C18

    /* emulator_api */
    #define psp_read                                    0x102D8
    #define psp_read_header                             0x1125C
    #define psp_drm_patch5                              0x11080
    #define psp_drm_patch6                              0x110B0
    #define psp_drm_patch7                              0x110C8
    #define psp_drm_patch8                              0x110CC
    #define psp_drm_patch9                              0x1120C
    #define psp_drm_patch11                             0x11210
    #define psp_drm_patch12                             0x11220
    #define psp_product_id_patch1                       0x11320
    #define psp_product_id_patch3                       0x115F8

    /* pemucorelib */
    #define psp_eboot_dec_patch                         0x5E6BC
    #define psp_prx_patch                               0x577D8
    #define psp_savedata_bind_patch1                    0x7A4BC
    #define psp_savedata_bind_patch2                    0x7A514
    #define psp_savedata_bind_patch3                    0x7A030
    #define psp_extra_savedata_patch                    0x8753C
    #define psp_prometheus_patch                        0x12EA28
    #define prx_patch_call_lr                           0x5892C

    /* emulator_drm */
    #define psp_drm_tag_overwrite                       0x4C68
    #define psp_drm_key_overwrite                       (0x27580 - 0xBE80)

    /* libsysutil_savedata_psp */
    #define psp_savedata_patch1                         0x46D4
    #define psp_savedata_patch2                         0x46AC
    #define psp_savedata_patch3                         0x450C
    #define psp_savedata_patch4                         0x4544
    #define psp_savedata_patch5                         0x4558
    #define psp_savedata_patch6                         0x46C0

    /* libfs */
    #define aio_copy_root_offset                        0xD658

    /* DEX */
    #define EXPLORE_PLUGIN_REBUG_HASH                   0xACF4AF2B000ECBBD
    #define EXPLORE_CATEGORY_GAME_REBUG_HASH            0x9CB325E600056E4C
    #define GAME_EXT_PLUGIN_REBUG_HASH                  0xE274AF7B0001E2CF
    #define dex_ps2_nonbw_offset                        0xDD6D0
    #define dex_ps2_nonbw_offset2                       0x68244
    #define dex_ps2_nonbw_offset3                       0x16B40
    #define dex_ps2tonet_patch                          0xCA1A8
    #define dex_ps2tonet_size_patch                     0xCA19C
    #define dex_vmode_patch_offset                      0x44ACDC
    #define dex_psp_drm_patch1                          0x247F44
    #define dex_psp_drm_patch2                          0x2489E4
    #define dex_psp_drm_patch3                          0x248620
    #define dex_psp_drm_patch4                          0x248E2C
    #define dex_psp_drm_patchA                          0x248060
    #define dex_psp_drm_patchB                          0x248900
    #define dex_psp_drm_patchC                          0x247A98
    #define dex_psp_drm_patchD                          0x248048
    #define dex_psp_drm_patchE                          0x24804C
    #define dex_psp_drm_patchF                          0x248A18
    #define dex_psp_extra_drm_patch                     0x0
#endif
