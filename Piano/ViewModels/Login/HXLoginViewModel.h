//
//  HXLoginViewModel.h
//  Piano
//
//  Created by miaios on 16/3/23.
//  Copyright © 2016年 Mia Music. All rights reserved.
//

#import "HXAccountModel.h"
#import "ReactiveCocoa.h"


@interface HXLoginViewModel : NSObject

@property (nonatomic, strong, readonly) HXAccountModel *account;

@end
