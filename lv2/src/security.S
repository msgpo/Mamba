#include <lv2/macros.h.S>
#include <lv2/symbols.h>

#ifdef aescbccfb_enc_symbol
#ifdef aescbccfb_dec_symbol
LV2_FUNCTION(aescbccfb_enc, aescbccfb_enc_symbol)
LV2_FUNCTION(aescbccfb_dec, aescbccfb_dec_symbol)
#endif
#endif

#ifdef get_pseudo_random_number_symbol
LV2_FUNCTION(get_pseudo_random_number, get_pseudo_random_number_symbol)
#endif

#ifdef md5_reset_symbol
#ifdef md5_update_symbol
#ifdef md5_final_symbol
LV2_FUNCTION(md5_reset, md5_reset_symbol)
LV2_FUNCTION(md5_update, md5_update_symbol)
LV2_FUNCTION(md5_final, md5_final_symbol)
#endif
#endif
#endif

#ifdef SHA1_init_symbol
#ifdef SHA1_update_symbol
#ifdef SHA1_final_symbol
LV2_FUNCTION(sha1_init, SHA1_init_symbol)
LV2_FUNCTION(sha1_update, SHA1_update_symbol)
LV2_FUNCTION(sha1_final, SHA1_final_symbol)
#endif
#endif
#endif

#ifdef ss_get_open_psid_symbol
LV2_FUNCTION(ss_get_open_psid, ss_get_open_psid_symbol)
#endif

#ifdef update_mgr_read_eeprom_symbol
LV2_FUNCTION(update_mgr_read_eeprom, update_mgr_read_eeprom_symbol)
#endif

#ifdef update_mgr_write_eeprom_symbol
LV2_FUNCTION(update_mgr_write_eeprom, update_mgr_write_eeprom_symbol)
#endif
