//
//  testing123AppDelegate.h
//  testing123
//
//  Created by Benjamin Lee on 8/3/11.
//  Copyright 2011 Cisco. All rights reserved.
//

#import <UIKit/UIKit.h>

@class testing123ViewController;

@interface testing123AppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet testing123ViewController *viewController;

@end
