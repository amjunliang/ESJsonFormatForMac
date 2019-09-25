//
//Created by iReader on 19/09/26.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol ESAweme_List,ESAweme_InfoText_Extra,ESAuthorCover_Url,ESVideoBit_Rate;
@class ESExtra,ESLog_Pb,ESShare_Info,ESAweme_List,ESAweme_ListAweme_Info,ESAweme_InfoAweme_Control,ESAweme_InfoShare_Info,ESAweme_InfoAuthor,ESAuthorAvatar_Medium,ESAuthorShare_Info,ESShare_InfoShare_Qrcode_Url,ESAuthorAvatar_Thumb,ESAuthorAvatar_300X300,ESAuthorVideo_Icon,ESAuthorAvatar_168X168,ESAuthorAvatar_Larger,ESAuthorCover_Url,ESAweme_InfoMusic,ESMusicAvatar_Medium,ESMusicAvatar_Thumb,ESMusicPlay_Url,ESMusicCover_Large,ESMusicStrong_Beat_Url,ESMusicCover_Medium,ESMusicCover_Thumb,ESMusicAvatar_Large,ESMusicCover_Hd,ESAweme_InfoRisk_Infos,ESAweme_InfoHot_Info,ESAweme_InfoStatistics,ESAweme_InfoDescendants,ESAweme_InfoVideo_Control,ESAweme_InfoXigua_Task,ESAweme_InfoStatus,ESAweme_InfoVideo,ESVideoPlay_Addr_Lowbr,ESVideoPlay_Addr,ESVideoDownload_Addr,ESVideoPlay_Addr_265,ESVideoOrigin_Cover,ESVideoPlay_Addr_H264,ESVideoDownload_Suffix_Logo_Addr,ESVideoCover,ESVideoDynamic_Cover,ESVideoBit_Rate,ESBit_RatePlay_Addr,ESBit_RatePlay_Addr_265,ESAweme_InfoText_Extra;
@interface ESRootResponse : NSObject

@property (nonatomic, strong, nullable) ESLog_Pb *log_pb;

@property (nonatomic, strong, nullable) NSArray<ESAweme_List> *aweme_list;

@property (nonatomic, assign) NSInteger status_code;

@property (nonatomic, strong, nullable) ESShare_Info *share_info;

@property (nonatomic, strong, nullable) ESExtra *extra;

@property (nonatomic, copy, nullable) NSString *status_msg;

@property (nonatomic, copy, nullable) NSString *active_time;

@end
@interface ESExtra : NSObject

@property (nonatomic, assign) long long now;

@property (nonatomic, strong, nullable) NSArray *fatal_item_ids;

@property (nonatomic, copy, nullable) NSString *logid;

@end

@interface ESLog_Pb : NSObject

@property (nonatomic, copy, nullable) NSString *impr_id;

@end

@interface ESShare_Info : NSObject

@property (nonatomic, copy, nullable) NSString *share_link_desc;

@property (nonatomic, copy, nullable) NSString *share_url;

@property (nonatomic, copy, nullable) NSString *share_title;

@end

@interface ESAweme_List : NSObject

@property (nonatomic, assign) NSInteger label;

@property (nonatomic, strong, nullable) ESAweme_ListAweme_Info *aweme_info;

@property (nonatomic, assign) NSInteger hot_value;

@end

@interface ESAweme_ListAweme_Info : NSObject

@property (nonatomic, assign) BOOL with_promotional_music;

@property (nonatomic, strong, nullable) ESAweme_InfoVideo *video;

@property (nonatomic, assign) long long author_user_id;

@property (nonatomic, assign) NSInteger is_hash_tag;

@property (nonatomic, strong, nullable) ESAweme_InfoAweme_Control *aweme_control;

@property (nonatomic, assign) BOOL is_pgcshow;

@property (nonatomic, assign) NSInteger item_react;

@property (nonatomic, assign) NSInteger collect_stat;

@property (nonatomic, strong, nullable) ESAweme_InfoRisk_Infos *risk_infos;

@property (nonatomic, copy, nullable) NSString *position;

@property (nonatomic, copy, nullable) NSString *group_id;

@property (nonatomic, copy, nullable) NSString *aweme_id;

@property (nonatomic, assign) BOOL prevent_download;

@property (nonatomic, strong, nullable) ESAweme_InfoHot_Info *hot_info;

@property (nonatomic, strong, nullable) ESAweme_InfoShare_Info *share_info;

@property (nonatomic, assign) BOOL cmt_swt;

@property (nonatomic, strong, nullable) NSArray *video_text;

@property (nonatomic, strong, nullable) ESAweme_InfoStatus *status;

@property (nonatomic, copy, nullable) NSString *desc_language;

@property (nonatomic, copy, nullable) NSString *sort_label;

@property (nonatomic, strong, nullable) ESAweme_InfoDescendants *descendants;

@property (nonatomic, copy, nullable) NSString *origin_comment_ids;

@property (nonatomic, copy, nullable) NSString *long_video;

@property (nonatomic, copy, nullable) NSString *desc;

@property (nonatomic, assign) BOOL is_relieve;

@property (nonatomic, strong, nullable) NSArray<ESAweme_InfoText_Extra> *text_extra;

@property (nonatomic, copy, nullable) NSString *image_infos;

@property (nonatomic, copy, nullable) NSString *nickname_position;

@property (nonatomic, assign) NSInteger create_time;

@property (nonatomic, copy, nullable) NSString *region;

@property (nonatomic, strong, nullable) ESAweme_InfoXigua_Task *xigua_task;

@property (nonatomic, copy, nullable) NSString *distance;

@property (nonatomic, strong, nullable) ESAweme_InfoStatistics *statistics;

@property (nonatomic, copy, nullable) NSString *cha_list;

@property (nonatomic, copy, nullable) NSString *commerce_config_data;

@property (nonatomic, copy, nullable) NSString *share_url;

@property (nonatomic, strong, nullable) ESAweme_InfoAuthor *author;

@property (nonatomic, copy, nullable) NSString *comment_list;

@property (nonatomic, strong, nullable) NSArray *geofencing;

@property (nonatomic, assign) NSInteger bodydance_score;

@property (nonatomic, strong, nullable) NSArray *promotions;

@property (nonatomic, assign) NSInteger duration;

@property (nonatomic, copy, nullable) NSString *interaction_stickers;

@property (nonatomic, assign) NSInteger is_top;

@property (nonatomic, copy, nullable) NSString *uniqid_position;

@property (nonatomic, assign) BOOL is_fantasy;

@property (nonatomic, assign) NSInteger aweme_type;

@property (nonatomic, assign) NSInteger rate;

@property (nonatomic, copy, nullable) NSString *challenge_position;

@property (nonatomic, assign) BOOL is_ads;

@property (nonatomic, strong, nullable) ESAweme_InfoMusic *music;

@property (nonatomic, strong, nullable) ESAweme_InfoVideo_Control *video_control;

@property (nonatomic, assign) NSInteger item_duet;

@property (nonatomic, copy, nullable) NSString *label_top_text;

@property (nonatomic, assign) NSInteger ad_link_type;

@property (nonatomic, assign) BOOL is_vr;

@property (nonatomic, assign) NSInteger distribute_type;

@property (nonatomic, copy, nullable) NSString *video_labels;

@property (nonatomic, assign) NSInteger vr_type;

@property (nonatomic, assign) NSInteger user_digged;

@property (nonatomic, assign) NSInteger item_comment_settings;

@end

@interface ESAweme_InfoAweme_Control : NSObject

@property (nonatomic, assign) BOOL can_forward;

@property (nonatomic, assign) BOOL can_show_comment;

@property (nonatomic, assign) BOOL can_share;

@property (nonatomic, assign) BOOL can_comment;

@end

@interface ESAweme_InfoShare_Info : NSObject

@property (nonatomic, copy, nullable) NSString *share_quote;

@property (nonatomic, copy, nullable) NSString *share_desc;

@property (nonatomic, copy, nullable) NSString *share_title_myself;

@property (nonatomic, copy, nullable) NSString *share_title_other;

@property (nonatomic, copy, nullable) NSString *share_title;

@property (nonatomic, assign) NSInteger bool_persist;

@property (nonatomic, copy, nullable) NSString *share_signature_url;

@property (nonatomic, copy, nullable) NSString *share_signature_desc;

@property (nonatomic, copy, nullable) NSString *share_weibo_desc;

@property (nonatomic, copy, nullable) NSString *share_link_desc;

@property (nonatomic, copy, nullable) NSString *share_url;

@end

@interface ESAweme_InfoAuthor : NSObject

@property (nonatomic, assign) BOOL show_image_bubble;

@property (nonatomic, copy, nullable) NSString *nickname;

@property (nonatomic, copy, nullable,getter=the_new_story_cover) NSString *new_story_cover;

@property (nonatomic, assign) NSInteger react_setting;

@property (nonatomic, copy, nullable) NSString *share_qrcode_uri;

@property (nonatomic, assign) NSInteger user_rate;

@property (nonatomic, copy, nullable) NSString *platform_sync_info;

@property (nonatomic, copy, nullable) NSString *account_region;

@property (nonatomic, assign) BOOL live_commerce;

@property (nonatomic, assign) BOOL has_orders;

@property (nonatomic, copy, nullable) NSString *uid;

@property (nonatomic, strong, nullable) ESAuthorAvatar_Larger *avatar_larger;

@property (nonatomic, assign) NSInteger tw_expire_time;

@property (nonatomic, copy, nullable) NSString *youtube_channel_id;

@property (nonatomic, copy, nullable) NSString *weibo_url;

@property (nonatomic, copy, nullable) NSString *item_list;

@property (nonatomic, assign) BOOL has_insights;

@property (nonatomic, copy, nullable) NSString *sec_uid;

@property (nonatomic, assign) BOOL has_unread_story;

@property (nonatomic, assign) NSInteger neiguang_shield;

@property (nonatomic, copy, nullable) NSString *ad_cover_url;

@property (nonatomic, assign) NSInteger favoriting_count;

@property (nonatomic, assign) BOOL user_canceled;

@property (nonatomic, copy, nullable) NSString *cv_level;

@property (nonatomic, copy, nullable) NSString *avatar_uri;

@property (nonatomic, copy, nullable) NSString *relative_users;

@property (nonatomic, assign) BOOL is_verified;

@property (nonatomic, strong, nullable) ESAuthorAvatar_Medium *avatar_medium;

@property (nonatomic, copy, nullable) NSString *signature;

@property (nonatomic, copy, nullable) NSString *google_account;

@property (nonatomic, copy, nullable) NSString *location;

@property (nonatomic, assign) NSInteger shield_comment_notice;

@property (nonatomic, assign) NSInteger download_prompt_ts;

@property (nonatomic, assign) BOOL is_phone_binded;

@property (nonatomic, assign) BOOL is_ad_fake;

@property (nonatomic, assign) NSInteger user_period;

@property (nonatomic, copy, nullable) NSString *cha_list;

@property (nonatomic, assign) BOOL is_discipline_member;

@property (nonatomic, copy, nullable) NSString *language;

@property (nonatomic, assign) BOOL story_open;

@property (nonatomic, assign) NSInteger constellation;

@property (nonatomic, assign) NSInteger sync_to_toutiao;

@property (nonatomic, copy, nullable) NSString *weibo_verify;

@property (nonatomic, copy, nullable) NSString *twitter_id;

@property (nonatomic, assign) BOOL has_twitter_token;

@property (nonatomic, assign) NSInteger live_verify;

@property (nonatomic, assign) NSInteger story_count;

@property (nonatomic, assign) NSInteger download_setting;

@property (nonatomic, assign) NSInteger create_time;

@property (nonatomic, assign) NSInteger shield_follow_notice;

@property (nonatomic, assign) NSInteger school_type;

@property (nonatomic, assign) NSInteger total_favorited;

@property (nonatomic, assign) BOOL hide_search;

@property (nonatomic, assign) BOOL accept_private_policy;

@property (nonatomic, copy, nullable) NSString *region;

@property (nonatomic, strong, nullable) ESAuthorAvatar_300X300 *avatar_300x300;

@property (nonatomic, assign) NSInteger secret;

@property (nonatomic, assign) NSInteger comment_filter_status;

@property (nonatomic, copy, nullable) NSString *followers_detail;

@property (nonatomic, assign) BOOL has_youtube_token;

@property (nonatomic, strong, nullable) ESAuthorShare_Info *share_info;

@property (nonatomic, copy, nullable) NSString *short_id;

@property (nonatomic, strong, nullable) ESAuthorAvatar_168X168 *avatar_168x168;

@property (nonatomic, assign) NSInteger live_agreement;

@property (nonatomic, copy, nullable) NSString *weibo_name;

@property (nonatomic, copy, nullable) NSString *custom_verify;

@property (nonatomic, assign) NSInteger unique_id_modify_time;

@property (nonatomic, assign) NSInteger commerce_user_level;

@property (nonatomic, assign) BOOL with_fusion_shop_entry;

@property (nonatomic, copy, nullable) NSString *school_name;

@property (nonatomic, assign) NSInteger reflow_page_gid;

@property (nonatomic, copy, nullable) NSString *birthday;

@property (nonatomic, copy, nullable) NSString *type_label;

@property (nonatomic, assign) NSInteger authority_status;

@property (nonatomic, copy, nullable) NSString *twitter_name;

@property (nonatomic, assign) NSInteger special_lock;

@property (nonatomic, strong, nullable) NSArray<ESAuthorCover_Url> *cover_url;

@property (nonatomic, assign) BOOL is_gov_media_vip;

@property (nonatomic, assign) NSInteger gender;

@property (nonatomic, assign) NSInteger live_agreement_time;

@property (nonatomic, assign) NSInteger following_count;

@property (nonatomic, copy, nullable) NSString *verify_info;

@property (nonatomic, copy, nullable) NSString *weibo_schema;

@property (nonatomic, assign) NSInteger youtube_expire_time;

@property (nonatomic, assign) BOOL is_block;

@property (nonatomic, assign) NSInteger reflow_page_uid;

@property (nonatomic, strong, nullable) ESAuthorAvatar_Thumb *avatar_thumb;

@property (nonatomic, assign) NSInteger verification_type;

@property (nonatomic, strong, nullable) ESAuthorVideo_Icon *video_icon;

@property (nonatomic, assign) NSInteger aweme_count;

@property (nonatomic, assign) NSInteger fb_expire_time;

@property (nonatomic, copy, nullable) NSString *school_poi_id;

@property (nonatomic, assign) BOOL has_facebook_token;

@property (nonatomic, assign) BOOL hide_location;

@property (nonatomic, assign) NSInteger duet_setting;

@property (nonatomic, assign) NSInteger follow_status;

@property (nonatomic, assign) NSInteger need_recommend;

@property (nonatomic, assign) NSInteger shield_digg_notice;

@property (nonatomic, assign) BOOL prevent_download;

@property (nonatomic, assign) NSInteger status;

@property (nonatomic, copy, nullable) NSString *enterprise_verify_reason;

@property (nonatomic, assign) NSInteger apple_account;

@property (nonatomic, assign) BOOL with_dou_entry;

@property (nonatomic, copy, nullable) NSString *unique_id;

@property (nonatomic, assign) BOOL is_binded_weibo;

@property (nonatomic, strong, nullable) NSArray *geofencing;

@property (nonatomic, assign) NSInteger room_id;

@property (nonatomic, copy, nullable) NSString *youtube_channel_title;

@property (nonatomic, assign) BOOL with_commerce_entry;

@property (nonatomic, assign) NSInteger user_mode;

@property (nonatomic, assign) NSInteger follower_status;

@property (nonatomic, assign) BOOL has_email;

@property (nonatomic, assign) BOOL with_shop_entry;

@property (nonatomic, copy, nullable) NSString *bind_phone;

@property (nonatomic, assign) NSInteger comment_setting;

@property (nonatomic, assign) BOOL is_star;

@property (nonatomic, copy, nullable) NSString *ins_id;

@property (nonatomic, assign) NSInteger follower_count;

@end

@interface ESAuthorAvatar_Medium : NSObject

@property (nonatomic, strong, nullable) NSArray *url_list;

@property (nonatomic, assign) NSInteger height;

@property (nonatomic, copy, nullable) NSString *uri;

@property (nonatomic, assign) NSInteger width;

@end

@interface ESAuthorShare_Info : NSObject

@property (nonatomic, strong, nullable) ESShare_InfoShare_Qrcode_Url *share_qrcode_url;

@property (nonatomic, copy, nullable) NSString *share_title_other;

@property (nonatomic, copy, nullable) NSString *share_title;

@property (nonatomic, copy, nullable) NSString *share_weibo_desc;

@property (nonatomic, copy, nullable) NSString *share_desc;

@property (nonatomic, copy, nullable) NSString *share_title_myself;

@property (nonatomic, copy, nullable) NSString *share_url;

@end

@interface ESShare_InfoShare_Qrcode_Url : NSObject

@property (nonatomic, strong, nullable) NSArray *url_list;

@property (nonatomic, assign) NSInteger width;

@property (nonatomic, copy, nullable) NSString *uri;

@property (nonatomic, assign) NSInteger height;

@end

@interface ESAuthorAvatar_Thumb : NSObject

@property (nonatomic, strong, nullable) NSArray *url_list;

@property (nonatomic, assign) NSInteger width;

@property (nonatomic, assign) NSInteger height;

@property (nonatomic, copy, nullable) NSString *uri;

@end

@interface ESAuthorAvatar_300X300 : NSObject

@property (nonatomic, strong, nullable) NSArray *url_list;

@property (nonatomic, assign) NSInteger width;

@property (nonatomic, copy, nullable) NSString *uri;

@property (nonatomic, assign) NSInteger height;

@end

@interface ESAuthorVideo_Icon : NSObject

@property (nonatomic, strong, nullable) NSArray *url_list;

@property (nonatomic, assign) NSInteger width;

@property (nonatomic, copy, nullable) NSString *uri;

@property (nonatomic, assign) NSInteger height;

@end

@interface ESAuthorAvatar_168X168 : NSObject

@property (nonatomic, strong, nullable) NSArray *url_list;

@property (nonatomic, assign) NSInteger width;

@property (nonatomic, copy, nullable) NSString *uri;

@property (nonatomic, assign) NSInteger height;

@end

@interface ESAuthorAvatar_Larger : NSObject

@property (nonatomic, strong, nullable) NSArray *url_list;

@property (nonatomic, assign) NSInteger width;

@property (nonatomic, copy, nullable) NSString *uri;

@property (nonatomic, assign) NSInteger height;

@end

@interface ESAuthorCover_Url : NSObject

@property (nonatomic, strong, nullable) NSArray *url_list;

@property (nonatomic, assign) NSInteger width;

@property (nonatomic, copy, nullable) NSString *uri;

@property (nonatomic, assign) NSInteger height;

@end

@interface ESAweme_InfoMusic : NSObject

@property (nonatomic, strong, nullable) ESMusicCover_Large *cover_large;

@property (nonatomic, copy, nullable) NSString *author;

@property (nonatomic, strong, nullable) ESMusicAvatar_Large *avatar_large;

@property (nonatomic, assign) NSInteger audition_duration;

@property (nonatomic, assign) long long ID;

@property (nonatomic, assign) NSInteger end_time;

@property (nonatomic, strong, nullable) ESMusicCover_Medium *cover_medium;

@property (nonatomic, assign) NSInteger source_platform;

@property (nonatomic, assign) NSInteger reason_type;

@property (nonatomic, copy, nullable) NSString *offline_desc;

@property (nonatomic, strong, nullable) ESMusicAvatar_Thumb *avatar_thumb;

@property (nonatomic, copy, nullable) NSString *sec_uid;

@property (nonatomic, strong, nullable) ESMusicPlay_Url *play_url;

@property (nonatomic, assign) NSInteger duration;

@property (nonatomic, copy, nullable) NSString *owner_handle;

@property (nonatomic, strong, nullable) ESMusicCover_Thumb *cover_thumb;

@property (nonatomic, copy, nullable) NSString *unshelve_countries;

@property (nonatomic, assign) NSInteger shoot_duration;

@property (nonatomic, assign) BOOL author_deleted;

@property (nonatomic, strong, nullable) ESMusicAvatar_Medium *avatar_medium;

@property (nonatomic, copy, nullable) NSString *extra;

@property (nonatomic, copy, nullable) NSString *author_position;

@property (nonatomic, copy, nullable) NSString *album;

@property (nonatomic, strong, nullable) ESMusicStrong_Beat_Url *strong_beat_url;

@property (nonatomic, copy, nullable) NSString *position;

@property (nonatomic, assign) BOOL redirect;

@property (nonatomic, copy, nullable) NSString *schema_url;

@property (nonatomic, copy, nullable) NSString *id_str;

@property (nonatomic, assign) BOOL is_original_sound;

@property (nonatomic, assign) BOOL prevent_download;

@property (nonatomic, assign) NSInteger preview_end_time;

@property (nonatomic, assign) NSInteger prevent_item_download_status;

@property (nonatomic, assign) NSInteger preview_start_time;

@property (nonatomic, assign) NSInteger status;

@property (nonatomic, strong, nullable) NSArray *external_song_info;

@property (nonatomic, assign) BOOL is_commerce_music;

@property (nonatomic, copy, nullable) NSString *owner_nickname;

@property (nonatomic, assign) NSInteger binded_challenge_id;

@property (nonatomic, assign) BOOL is_video_self_see;

@property (nonatomic, assign) NSInteger user_count;

@property (nonatomic, copy, nullable) NSString *mid;

@property (nonatomic, assign) NSInteger start_time;

@property (nonatomic, strong, nullable) ESMusicCover_Hd *cover_hd;

@property (nonatomic, assign) BOOL is_del_video;

@property (nonatomic, copy, nullable) NSString *owner_id;

@property (nonatomic, assign) BOOL is_original;

@property (nonatomic, assign) NSInteger collect_stat;

@property (nonatomic, copy, nullable) NSString *title;

@property (nonatomic, assign) BOOL is_restricted;

@end

@interface ESMusicAvatar_Medium : NSObject

@property (nonatomic, strong, nullable) NSArray *url_list;

@property (nonatomic, assign) NSInteger width;

@property (nonatomic, copy, nullable) NSString *uri;

@property (nonatomic, assign) NSInteger height;

@end

@interface ESMusicAvatar_Thumb : NSObject

@property (nonatomic, strong, nullable) NSArray *url_list;

@property (nonatomic, assign) NSInteger width;

@property (nonatomic, copy, nullable) NSString *uri;

@property (nonatomic, assign) NSInteger height;

@end

@interface ESMusicPlay_Url : NSObject

@property (nonatomic, strong, nullable) NSArray *url_list;

@property (nonatomic, assign) NSInteger width;

@property (nonatomic, copy, nullable) NSString *uri;

@property (nonatomic, assign) NSInteger height;

@end

@interface ESMusicCover_Large : NSObject

@property (nonatomic, strong, nullable) NSArray *url_list;

@property (nonatomic, assign) NSInteger width;

@property (nonatomic, copy, nullable) NSString *uri;

@property (nonatomic, assign) NSInteger height;

@end

@interface ESMusicStrong_Beat_Url : NSObject

@property (nonatomic, strong, nullable) NSArray *url_list;

@property (nonatomic, assign) NSInteger width;

@property (nonatomic, copy, nullable) NSString *uri;

@property (nonatomic, assign) NSInteger height;

@end

@interface ESMusicCover_Medium : NSObject

@property (nonatomic, strong, nullable) NSArray *url_list;

@property (nonatomic, assign) NSInteger width;

@property (nonatomic, copy, nullable) NSString *uri;

@property (nonatomic, assign) NSInteger height;

@end

@interface ESMusicCover_Thumb : NSObject

@property (nonatomic, strong, nullable) NSArray *url_list;

@property (nonatomic, assign) NSInteger width;

@property (nonatomic, copy, nullable) NSString *uri;

@property (nonatomic, assign) NSInteger height;

@end

@interface ESMusicAvatar_Large : NSObject

@property (nonatomic, strong, nullable) NSArray *url_list;

@property (nonatomic, assign) NSInteger width;

@property (nonatomic, copy, nullable) NSString *uri;

@property (nonatomic, assign) NSInteger height;

@end

@interface ESMusicCover_Hd : NSObject

@property (nonatomic, strong, nullable) NSArray *url_list;

@property (nonatomic, assign) NSInteger width;

@property (nonatomic, assign) NSInteger height;

@property (nonatomic, copy, nullable) NSString *uri;

@end

@interface ESAweme_InfoRisk_Infos : NSObject

@property (nonatomic, assign) BOOL vote;

@property (nonatomic, assign) BOOL warn;

@property (nonatomic, assign) BOOL risk_sink;

@property (nonatomic, assign) NSInteger type;

@property (nonatomic, copy, nullable) NSString *content;

@end

@interface ESAweme_InfoHot_Info : NSObject

@property (nonatomic, assign) NSInteger vb_rank;

@property (nonatomic, assign) NSInteger vb_rank_value;

@end

@interface ESAweme_InfoStatistics : NSObject

@property (nonatomic, assign) NSInteger lose_count;

@property (nonatomic, assign) NSInteger download_count;

@property (nonatomic, assign) NSInteger share_count;

@property (nonatomic, assign) NSInteger forward_count;

@property (nonatomic, assign) NSInteger comment_count;

@property (nonatomic, copy, nullable) NSString *aweme_id;

@property (nonatomic, assign) NSInteger lose_comment_count;

@property (nonatomic, assign) NSInteger digg_count;

@property (nonatomic, assign) NSInteger play_count;

@end

@interface ESAweme_InfoDescendants : NSObject

@property (nonatomic, copy, nullable) NSString *notify_msg;

@property (nonatomic, strong, nullable) NSArray *platforms;

@end

@interface ESAweme_InfoVideo_Control : NSObject

@property (nonatomic, assign) NSInteger share_type;

@property (nonatomic, assign) BOOL allow_react;

@property (nonatomic, assign) BOOL allow_duet;

@property (nonatomic, assign) NSInteger draft_progress_bar;

@property (nonatomic, assign) NSInteger show_progress_bar;

@property (nonatomic, assign) NSInteger timer_status;

@property (nonatomic, assign) BOOL allow_dynamic_wallpaper;

@property (nonatomic, assign) NSInteger prevent_download_type;

@property (nonatomic, assign) BOOL allow_download;

@end

@interface ESAweme_InfoXigua_Task : NSObject

@property (nonatomic, assign) BOOL is_xigua_task;

@end

@interface ESAweme_InfoStatus : NSObject

@property (nonatomic, assign) BOOL in_reviewing;

@property (nonatomic, copy, nullable) NSString *aweme_id;

@property (nonatomic, assign) BOOL self_see;

@property (nonatomic, assign) BOOL is_prohibited;

@property (nonatomic, assign) NSInteger download_status;

@property (nonatomic, assign) NSInteger private_status;

@property (nonatomic, assign) BOOL allow_share;

@property (nonatomic, assign) BOOL allow_comment;

@property (nonatomic, assign) BOOL with_fusion_goods;

@property (nonatomic, assign) BOOL is_delete;

@property (nonatomic, assign) BOOL is_private;

@property (nonatomic, assign) NSInteger reviewed;

@property (nonatomic, assign) BOOL with_goods;

@end

@interface ESAweme_InfoVideo : NSObject

@property (nonatomic, assign) BOOL has_watermark;

@property (nonatomic, strong, nullable) ESVideoDownload_Suffix_Logo_Addr *download_suffix_logo_addr;

@property (nonatomic, strong, nullable) ESVideoPlay_Addr_Lowbr *play_addr_lowbr;

@property (nonatomic, strong, nullable) ESVideoPlay_Addr_265 *play_addr_265;

@property (nonatomic, assign) NSInteger is_h265;

@property (nonatomic, assign) NSInteger width;

@property (nonatomic, copy, nullable) NSString *ratio;

@property (nonatomic, assign) BOOL has_download_suffix_logo_addr;

@property (nonatomic, strong, nullable) ESVideoPlay_Addr *play_addr;

@property (nonatomic, strong, nullable) ESVideoPlay_Addr_H264 *play_addr_h264;

@property (nonatomic, strong, nullable) NSArray<ESVideoBit_Rate> *bit_rate;

@property (nonatomic, strong, nullable) ESVideoCover *cover;

@property (nonatomic, assign) NSInteger height;

@property (nonatomic, assign) NSInteger duration;

@property (nonatomic, assign) NSInteger cdn_url_expired;

@property (nonatomic, strong, nullable) ESVideoOrigin_Cover *origin_cover;

@property (nonatomic, strong, nullable) ESVideoDynamic_Cover *dynamic_cover;

@property (nonatomic, strong, nullable) ESVideoDownload_Addr *download_addr;

@end

@interface ESVideoPlay_Addr_Lowbr : NSObject

@property (nonatomic, strong, nullable) NSArray *url_list;

@property (nonatomic, copy, nullable) NSString *url_key;

@property (nonatomic, assign) NSInteger width;

@property (nonatomic, assign) NSInteger height;

@property (nonatomic, copy, nullable) NSString *uri;

@end

@interface ESVideoPlay_Addr : NSObject

@property (nonatomic, strong, nullable) NSArray *url_list;

@property (nonatomic, copy, nullable) NSString *url_key;

@property (nonatomic, assign) NSInteger width;

@property (nonatomic, copy, nullable) NSString *uri;

@property (nonatomic, assign) NSInteger height;

@end

@interface ESVideoDownload_Addr : NSObject

@property (nonatomic, strong, nullable) NSArray *url_list;

@property (nonatomic, assign) NSInteger width;

@property (nonatomic, copy, nullable) NSString *uri;

@property (nonatomic, assign) NSInteger height;

@end

@interface ESVideoPlay_Addr_265 : NSObject

@property (nonatomic, copy, nullable) NSString *url_key;

@property (nonatomic, strong, nullable) NSArray *url_list;

@property (nonatomic, assign) NSInteger width;

@property (nonatomic, assign) NSInteger height;

@property (nonatomic, copy, nullable) NSString *uri;

@end

@interface ESVideoOrigin_Cover : NSObject

@property (nonatomic, strong, nullable) NSArray *url_list;

@property (nonatomic, assign) NSInteger width;

@property (nonatomic, assign) NSInteger height;

@property (nonatomic, copy, nullable) NSString *uri;

@end

@interface ESVideoPlay_Addr_H264 : NSObject

@property (nonatomic, copy, nullable) NSString *url_key;

@property (nonatomic, strong, nullable) NSArray *url_list;

@property (nonatomic, assign) NSInteger width;

@property (nonatomic, assign) NSInteger height;

@property (nonatomic, copy, nullable) NSString *uri;

@end

@interface ESVideoDownload_Suffix_Logo_Addr : NSObject

@property (nonatomic, strong, nullable) NSArray *url_list;

@property (nonatomic, assign) NSInteger width;

@property (nonatomic, assign) NSInteger height;

@property (nonatomic, copy, nullable) NSString *uri;

@end

@interface ESVideoCover : NSObject

@property (nonatomic, strong, nullable) NSArray *url_list;

@property (nonatomic, assign) NSInteger height;

@property (nonatomic, copy, nullable) NSString *uri;

@property (nonatomic, assign) NSInteger width;

@end

@interface ESVideoDynamic_Cover : NSObject

@property (nonatomic, strong, nullable) NSArray *url_list;

@property (nonatomic, assign) NSInteger width;

@property (nonatomic, copy, nullable) NSString *uri;

@property (nonatomic, assign) NSInteger height;

@end

@interface ESVideoBit_Rate : NSObject

@property (nonatomic, assign) NSInteger is_h265;

@property (nonatomic, assign) NSInteger bit_rate;

@property (nonatomic, strong, nullable) ESBit_RatePlay_Addr_265 *play_addr_265;

@property (nonatomic, strong, nullable) ESBit_RatePlay_Addr *play_addr;

@property (nonatomic, copy, nullable) NSString *gear_name;

@property (nonatomic, assign) NSInteger quality_type;

@end

@interface ESBit_RatePlay_Addr : NSObject

@property (nonatomic, strong, nullable) NSArray *url_list;

@property (nonatomic, copy, nullable) NSString *url_key;

@property (nonatomic, assign) NSInteger width;

@property (nonatomic, copy, nullable) NSString *uri;

@property (nonatomic, assign) NSInteger height;

@end

@interface ESBit_RatePlay_Addr_265 : NSObject

@property (nonatomic, copy, nullable) NSString *url_key;

@property (nonatomic, strong, nullable) NSArray *url_list;

@property (nonatomic, assign) NSInteger width;

@property (nonatomic, copy, nullable) NSString *uri;

@property (nonatomic, assign) NSInteger height;

@end

@interface ESAweme_InfoText_Extra : NSObject

@property (nonatomic, assign) NSInteger end;

@property (nonatomic, copy, nullable) NSString *user_id;

@property (nonatomic, assign) NSInteger type;

@property (nonatomic, copy, nullable) NSString *sec_uid;

@property (nonatomic, assign) NSInteger start;

@end

NS_ASSUME_NONNULL_END
