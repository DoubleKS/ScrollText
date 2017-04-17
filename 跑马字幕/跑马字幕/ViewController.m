//
//  ViewController.m
//  跑马字幕
//
//  Created by doublek on 2017/4/17.
//  Copyright © 2017年 doublek. All rights reserved.
//

#import "ViewController.h"
#import "DKScrollTextLable.h"
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
   
    DKScrollTextLable *label = [[DKScrollTextLable alloc]initWithFrame:CGRectMake(0, 250, [UIScreen mainScreen].bounds.size.width, 100)];
    
    
    label.text = @"😇😇🐷一些事一些情,🐔一些好音乐,🐺一起陪你到八十岁🥓,八十岁的约定!😜😜✈️";
    
    [self.view addSubview:label];
}




@end
