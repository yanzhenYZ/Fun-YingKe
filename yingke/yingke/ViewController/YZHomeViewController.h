//
//  YZHomeViewController.h
//  yingke
//
//  Created by yanzhen on 16/12/7.
//  Copyright © 2016年 v2tech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface YZHomeViewController : UIViewController

- (void)childVCDidScroll:(CGFloat)offsetY isHot:(BOOL)hot;
- (void)childVCDidEndDragging:(CGFloat)offsetY;
@end
