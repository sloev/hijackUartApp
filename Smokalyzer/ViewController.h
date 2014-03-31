//
//  ViewController.h
//  Smokalyzer
//
//  Created by Andrew Robinson on 10/29/12.
//  Copyright (c) 2012 Andrew Robinson. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HiJackMgr.h"


@interface ViewController : UIViewController <HiJackDelegate> {
    HiJackMgr * hiJackMgr;
    
}
- (IBAction)knap:(UIButton *)sender;

@property (weak, nonatomic) IBOutlet UITextView *lolText;

@end
