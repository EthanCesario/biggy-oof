//
//  AppDelegate.h
//  CArdgame
//
//  Created by Cesario, Ethan on 3/5/20.
//  Copyright © 2020 Cesario, Ethan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

