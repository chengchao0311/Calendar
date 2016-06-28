//
//  ViewController.h
//  QuickstartApp
//
//  Created by 陈 鑫琦 on 6/29/16.
//  Copyright © 2016 cxq. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GTMOAuth2ViewControllerTouch.h"
#import "GTLCalendar.h"

@interface ViewController : UIViewController

@property (nonatomic, strong) GTLServiceCalendar *service;
@property (nonatomic, strong) UITextView *output;

@end

