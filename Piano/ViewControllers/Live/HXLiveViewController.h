//
//  HXLiveViewController.h
//  Piano
//
//  Created by miaios on 16/3/18.
//  Copyright © 2016年 Mia Music. All rights reserved.
//

#import "UIViewController+HXClass.h"
#import "HXLiveModel.h"


typedef NS_ENUM(NSUInteger, HXLiveType) {
    HXLiveTypeLive,
    HXLiveTypeReplay,
    HXLiveTypePublish,
};


@interface HXLiveViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIView *liveView;

@property (nonatomic, strong) HXLiveModel *model;
@property (nonatomic, assign)  HXLiveType  type;

- (IBAction)exitButtonPressed;

@end