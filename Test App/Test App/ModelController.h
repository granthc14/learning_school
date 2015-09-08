//
//  ModelController.h
//  Test App
//
//  Created by Grant Hamilton Cordle on 7/13/15.
//  Copyright (c) 2015 Grant Hamilton Cordle. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end

