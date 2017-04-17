//
//  DKScrollTextLable.h
//  跑马字幕
//
//  Created by doublek on 2017/4/17.
//  Copyright © 2017年 doublek. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum : NSUInteger {
    DKTextCycleStyleDefault,//当文字长度大于label长度的长度才可以进行滚动
    DKTextCycleStyleAlways  //无论文字长短，一直滚动
} DKTextCycleStyle;


@interface DKScrollTextLable : UIView


@property (nonatomic, assign) DKTextCycleStyle style; //默认ORTextCycleStyleDefault
@property (nonatomic, assign)IBInspectable CGFloat interval; //间隔 默认 70
@property (nonatomic, assign)IBInspectable CGFloat rate;//速率 0~1 默认 0.5

@property (nonatomic, copy)IBInspectable NSString *text;
@property (nonatomic, strong) UIFont *font;
@property (nonatomic, strong)IBInspectable UIColor *textColor;
@property (nonatomic, assign) NSTextAlignment textAlignment;

- (void)start; //默认开启
- (void)pause;
- (void)stop;

@end
