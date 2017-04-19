//
//  AppDelegate.h
//  aaa
//
//  Created by 孙佳泽 on 2017/4/19.
//  Copyright © 2017年 孙佳泽. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

