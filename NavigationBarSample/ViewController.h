//
//  ViewController.h
//  NavigationBarSample
//
//  Created by Patrick on 14-6-9.
//  Copyright (c) 2014年 Patrick. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UILabel *label;
- (IBAction)save:(id)sender;
- (IBAction)add:(id)sender;

@end
