//
//  HXLiveEndViewController.m
//  Piano
//
//  Created by miaios on 16/3/30.
//  Copyright © 2016年 Mia Music. All rights reserved.
//

#import "HXLiveEndViewController.h"
#import "FXBlurView.h"
#import "HXUserSession.h"
#import "UIImageView+WebCache.h"
#import "HXLiveModel.h"


@interface HXLiveEndViewController ()
@end


@implementation HXLiveEndViewController

#pragma mark - Class Methods
+ (HXStoryBoardName)storyBoardName {
    return HXStoryBoardNameLive;
}

#pragma mark - Status Bar
- (UIStatusBarStyle)preferredStatusBarStyle {
    return UIStatusBarStyleLightContent;
}

#pragma mark - View Controller Life Cycle
- (void)viewDidLoad {
    [super viewDidLoad];
    
    [self loadConfigure];
    [self viewConfigure];
}

#pragma mark - Configure Methods
- (void)loadConfigure {
    ;
}

- (void)viewConfigure {
    _blurView.contentMode = UIViewContentModeScaleAspectFill;
    _containerView.backgroundColor = [UIColor clearColor];
}

#pragma mark - Property
- (void)setIsLive:(BOOL)isLive {
    _isLive = isLive;
    _countContainerView.hidden = !isLive;
}

- (void)setSnapShotImage:(UIImage *)snapShotImage {
    _snapShotImage = snapShotImage;
    _blurView.image = [snapShotImage blurredImageWithRadius:30.0f iterations:10 tintColor:[UIColor blackColor]];
    
    [_avatar sd_setImageWithURL:[NSURL URLWithString:(_isLive ? [HXUserSession session].user.avatarUrl : _liveModel.avatarUrl)]];
    _nickNameLabel.text = (_isLive ? [HXUserSession session].nickName : _liveModel.nickName);
}

#pragma mark - Private Methods
- (IBAction)backButtonPressed {
    if (_delegate && [_delegate respondsToSelector:@selector(endViewControllerWouldLikeExitRoom:)]) {
        [_delegate endViewControllerWouldLikeExitRoom:self];
    }
}

@end