//
//  ViewController.m
//  PMFMDB
//
//  Created by wsy on 15/12/1.
//  Copyright © 2015年 WSY. All rights reserved.
//

#import "ViewController.h"
#import "PMMainViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];


}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
    [super touchesBegan:touches withEvent:event];
    PMMainViewController *mainViewController = [[PMMainViewController alloc] init];
    [self.navigationController pushViewController:mainViewController animated:YES];
}

@end
