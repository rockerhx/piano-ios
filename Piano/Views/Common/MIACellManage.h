//
//  MIACellManage.h
//  Piano
//
//  Created by 刘维 on 16/5/9.
//  Copyright © 2016年 Mia Music. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MIABaseTableViewCell.h"
#import "MIAHostAttentionCell.h"
#import "MIAHostRewardAlbumCell.h"
#import "MIAProfileLiveCell.h"
#import "MIAProfileAlbumCell.h"
#import "MIAProfileVideoCell.h"
#import "MIAProfileReplayCell.h"
#import "MIAAlbumSongCell.h"
#import "MIAAlbumCommentCell.h"
#import "MIAPaymentCell.h"
#import "MIAPayHistoryCell.h"
#import "MIASettingCell.h"

typedef NS_ENUM(NSUInteger, MIACellType){

    MIACellTypeNormal,
    //我的Profilt
    MIACellTypeHostAttention,//我关注的人
    MIACellTypeHostRewardAlbum, //我打赏的专辑
    MIACellTypeHostNormal, //我的M币 消费记录
    //主播的Profile
    MIACellTypeLive, //直播
    MIACellTypeAlbum,//专辑
    MIACellTypeVideo, //视频
    MIACellTypeReplay, //回放
    //专辑详情页
    MIACellTypeAlbumSong,//歌曲
    MIACellTypeAlbumComment,//评论
    //充值页面
    MIACellTypePayment,//充值
    MIACellTypePayHistory,//消费记录
    
    MIACellTypeSetting,//设置页面
};

@interface MIACellManage : NSObject

+ (__kindof MIABaseTableViewCell *)getCellWithType:(MIACellType)type;

@end
