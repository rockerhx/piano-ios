//
//  HXStoryBoardManager.h
//
//  Created by RockerHX
//  Copyright (c) Andy Shaw. All rights reserved.
//

#import <UIKit/UIKit.h>


typedef NS_ENUM(NSUInteger, HXStoryBoardName) {
    HXStoryBoardNameDiscovery,
    HXStoryBoardNameMe,
    HXStoryBoardNameLogin,
    HXStoryBoardNameProfile,
    HXStoryBoardNameSetting,
    HXStoryBoardNameLive,
    HXStoryBoardNameRewardGift,
    HXStoryBoardNameRewardAlbum,
    HXStoryBoardNamePlay,
    HXStoryBoardNameAlbums,
};


@interface HXStoryBoardManager : NSObject

+ (__kindof UIViewController *)navigaitonControllerWithIdentifier:(NSString *)identifier storyBoardName:(HXStoryBoardName)name;
+ (__kindof UIViewController *)viewControllerWithClass:(Class)class storyBoardName:(HXStoryBoardName)name;

@end
